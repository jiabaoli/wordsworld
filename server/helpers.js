/*
Function Helpers
*/
const settings = require('./settings.js');
var password = require('password-hash-and-salt');
var crypto = require('crypto'),
    crypto_algorithm = 'aes-256-ctr',
    crypto_password = '27qw9GU5';
var bcrypt = require('bcrypt');


function comparePassword(userPassword, databasePassword) {
    // Verifying a hash 
    return bcrypt.compareSync(userPassword, databasePassword);
}

function hashPassword(userPassword) {
    var salt = bcrypt.genSaltSync(10);
    var hash = bcrypt.hashSync(userPassword, salt);
    return hash;
}

function randomHash(size = 10) {
    console.log(size);
    // encryption of buffers
    var hash = crypto.randomBytes(16).toString('hex');
    return hash;
}

module.exports = {
    comparePassword,
    hashPassword,
    randomHash
};
