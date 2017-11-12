//https://medium.com/@jeffandersen/building-a-node-js-rest-api-with-express-46b0901f29b6

const express = require('express');
const router = express.Router();
const bodyParser = require('body-parser');
const db = require('./queries.js');
const colors = require('colors');

var app = express();
// configure the app to use bodyParser()
app.use(bodyParser.urlencoded({
    extended: true
}));
app.use(bodyParser.json());


var api = express.Router();

//Users
// Create the express router object for Photos
var drawingRouter = express.Router();
// A GET to the root of a resource returns a list of that resource
drawingRouter.get('/', db.getAllDrawings);
// A POST to the root of a resource should create a new object
drawingRouter.put('/', db.createDrawing);
// We specify a param in our path for the GET of a specific object
drawingRouter.get('/:qrcode', db.readDrawing);
// Similar to the GET on an object, to update it we can PATCH
drawingRouter.put('/:id', db.updateDrawing); //or put
// Delete a specific object
drawingRouter.delete('/:id', db.deleteDrawing);
// Attach the routers for their respective paths
api.use('/drawing', drawingRouter);

//Error
var apiError = express.Router();
//databaseRouter.get('/', console.log());
api.use('/error:id', apiError);

/*
.get('/',db.getAll);
.post('/',db.create);
.get('/:id',db.read);
.put('/:id',db.update);
.delete('/:id',db.delete);
*/

app.use("/api", api);

module.exports = app;