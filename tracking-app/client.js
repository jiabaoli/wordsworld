var PORT = 33333;
var HOST = '127.0.0.1';

var dgram = require('dgram');
var message = new Buffer('My KungFu is Good!');

var client = dgram.createSocket('udp4');

client.on('message', function (message, remote) {
    console.log(remote.address + ':' + remote.port +' - ' + message);
});


