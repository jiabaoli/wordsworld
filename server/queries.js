/*Reference
https://github.com/mjhea0/node-postgres-promises
http://mherman.org/blog/2015/02/12/postgresql-and-nodejs/#.WXzsvsbMxR0
*/

const pg = require('pg');

const settings = require('./settings.js');
const helpers = require('./helpers.js');

// database configuration
// Change on Dev/Production
const connection_configuration = {
  host: settings.db_host,
  port: settings.db_port,
  database: settings.db_database,
  user: settings.db_user,
  password: settings.db_password
};

//CHANGE PASSWORD FOR process.env.PASSWORD and USER to process.env.USER

const client = new pg.Client(connection_configuration);
client.connect();

//--Returned after most of actions
function done(res, err, result) {
  if (!process.env.PRODUCTION) {
    console.log("-------- Query Error -------".red);
    console.log(err ? err.stack : result)
  }

  if (err)
    return res.status(500).json({ success: false, data: err.error });
  else {
    console.log("-------- Query Success -------".green);
    console.log(result);
    return res.json({ success: true, data: result });
  }
}
//get all drawings table
function getAllDrawings(req, res, next) {
  //console.log("req", req)
  client.query('SELECT *  FROM drawings ', (err, query_res) => {
    done(res, err, query_res.rows);
  });
}

function createDrawing(req, res, next) {
  const results = [];

  const data = {
    qrcode: req.body.qrcode,
    points: req.body.points,
  };

  // SQL Query > Insert Data
  // ALTER TABLE users ADD UNIQUE (hash);
  client.query('INSERT INTO drawings(qrcode,points,datetime) values($1, $2, now())', [data.qrcode, data.points], function (err, result) {
    
    if (err) {
      console.log("-------- Query Error -------".red);
      console.log(err.detail);
      return res.status(500).json({ success: false, data: err.error });
    }

    else {
      console.log("-------- Create Drawing: Query Success -------".green);
      // SQL Query > Select Data
      const query = client.query("SELECT * FROM drawings WHERE qrcode=$1",[data.qrcode]);
      // Stream results back one row at a time
      query.on('row', (row) => {
        results.push(row);
      });
      // After all data is returned, close connection and return results
      query.on('end', () => {
        console.log(results);
        return res.json({ success: true, data: results });
      });
    }

  });

}

function readDrawing(req, res, next) {
  const results = [];
  // Grab data from the URL parameters
  const qrcode = req.params.qrcode;
  console.log("--->req",req.params);
  client.query("SELECT * FROM drawings WHERE qrcode=$1", [qrcode], (err, query_res) => {
    done(res, err, query_res.rows);
  });
}

function updateDrawing(req, res, next) {
  const results = [];
  // Grab data from the URL parameters
  const id = req.params.id;

  const data = {
    points: req.body.points
  };
  console.log('data',JSON.stringify(data));
  // SQL Query > Insert Data
  client.query('UPDATE drawings SET points = jsonb_set(points,$1) WHERE id=$2', [data.points, id], function (err, result) {
    if (err) {
      console.log("-------- Query Error -------".red);
      console.log(err);
      //return res.status(500).json({success: false, data: err});
      return res.status(500).json({ success: false, data: err.error });
    }

    else {
      // SQL Query > Select Data
      const query = client.query('SELECT * FROM drawings WHERE id=' + id);

      // Stream results back one row at a time
      query.on('row', (row) => {
        results.push(row);
      });

      // After all data is returned, close connection and return results
      query.on('end', () => {
        if (!results.length) {
          console.log("-------- Query Error -------".red);
          console.log("Requested user.id does not exist");
          return res.status(500).json({ success: false, data: "Requested user.id does not exist" });
        }

        else {
          console.log("-------- Update User: Query Success -------".green);
          console.log(results);
          return res.json({ success: true, data: results });
        }
      });
    }
  });
}

function deleteDrawing(req, res, next) {
  // Grab data from the URL parameters
  const id = req.params.id;

  // SQL Query > Insert Data
  client.query('DELETE FROM users WHERE id=$1', [id], function (err, result) {
    done(res, err, result.rows);
  });
}

module.exports = {
  getAllDrawings: getAllDrawings,
  createDrawing: createDrawing,
  readDrawing: readDrawing,
  updateDrawing: updateDrawing,
  deleteDrawing: deleteDrawing
}
