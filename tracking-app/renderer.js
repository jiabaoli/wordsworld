// This file is required by the index.html file and will
// be executed in the renderer process for that window.
// All of the Node.js APIs are available in this process.
//192.168.0.52 -> Hong hao
var dgram = require('dgram');
var ip = require("ip");
require('tracking');
var mqtt = require('mqtt')
var THREE = require("three");
var OrbitControls = require('three-orbit-controls')(THREE)


var PORT = 33333;
//var HOST = '192.168.0.52';
var HOST = '127.0.0.1';
//var LPF = require('lpf');
var PROTOCOL = 'MQTT'; //'UDP'

var clientMQTT = mqtt.connect('mqtt://test.mosquitto.org')
var client = dgram.createSocket('udp4');
var server = dgram.createSocket('udp4');

var video = document.getElementById('video');
var canvas = document.getElementById('canvas');
var context = canvas.getContext('2d');


if (PROTOCOL == 'MQTT') {
    //start MQTT connection
    clientMQTT.on('connect', function () {
        clientMQTT.subscribe('vrhack');
    });

    clientMQTT.on('message', function (topic, message) {
        // message is Buffer
        console.log(message.toString())
        //client.end()
    });
}



//etupServer();

document.getElementById('host').innerText = "Verify if Unity is running on server: " + HOST;

if (PROTOCOL == 'MQTT') {
    document.getElementById('host').innerText = "MQTT subscribed @-> vrhack";

}
window.onload = function () {
    var video = document.getElementById('video');
    var canvas = document.getElementById('canvas');
    var context = canvas.getContext('2d');
    var tracker = new window.tracking.ColorTracker(['magenta']);
    /* CUSTOM COLOR
    tracking.ColorTracker.registerColor('green', function(r, g, b) {
    if (r < 50 && g > 200 && b < 50) {
        return true;
    }
    return false;
    });

    */


    //const colors = new window.tracking.ColorTracker([]);
    tracking.track('#video', tracker, { camera: true });
    tracker.on('track', function (event) {
        context.clearRect(0, 0, canvas.width, canvas.height);
        event.data.forEach(function (rect) {
            rect.color = '#FFF';
            context.strokeStyle = rect.color;
            context.strokeRect(rect.x, rect.y, rect.width, rect.height);
            context.font = '11px Helvetica';
            context.fillStyle = "#fff";
            context.fillText('x: ' + rect.x + 'px', rect.x + rect.width + 5, rect.y + 11);
            context.fillText('y: ' + rect.y + 'px', rect.x + rect.width + 5, rect.y + 22);

            //parsing poinnter
            var px = (rect.x / window.innerWidth) * 2 - 1;
            var py = - (rect.y / window.innerHeight) * 2 + 1;

            pointer = new THREE.Vector2(px, py);

            var string = JSON.stringify({ x: padL(rect.x, 4), y: padL(rect.y, 4), width: padL(rect.width, 4), height: padL(rect.height, 4) });
            if (PROTOCOL == 'MQTT')
                SendPositionMQTT(string);
            else
                SendPosition(string);

            document.getElementById('console').innerText = string;
        });
    });
};

function SendPosition(string) {
    var message = new Buffer(string);
    client.send(message, 0, message.length, PORT, HOST, function (err, bytes) {
        if (err) throw err;
        console.log('UDP message sent to ' + HOST + ':' + PORT);
        //client.close();
    });
}

function SendPositionMQTT(string) {
    clientMQTT.publish('vrhack', string);
    console.log('MQTT message sent to vrhack');
}


function setupServer() {
    server.on('listening', function () {
        var address = server.address();
        console.log('UDP Server listening on ' + address.address + ":" + address.port);
    });

    server.on('message', function (message, remote) {
        console.log(remote.address + ':' + remote.port + ' - ' + message);
    });

    server.bind(PORT, HOST);
}

function _sendPosition(x, y, width, height) {
    //sending msg
    var string = JSON.stringify({ x: x, y: y, width: width, height: height });
    var package = new Buffer(string);

    server.send(package, PORT, HOST, function (error) {
        if (error) {
            client.close();
        } else {
            console.log('Data sent to:' + HOST + ":" + PORT + " >" + string);
        }

    });
}

/*
//Low pass butterworth filter order=2 alpha1=0.01 
class  FilterBuLp2
{
	public:
		FilterBuLp2()
		{
			v[0]=0.0;
			v[1]=0.0;
		}
	private:
		float v[3];
	public:
		float step(float x) //class II 
		{
			v[0] = v[1];
			v[1] = v[2];
			v[2] = (9.446918438401618072e-4 * x)
				 + (-0.91497583480143362955 * v[0])
				 + (1.91119706742607298189 * v[1]);
			return 
				 (v[0] + v[2])
				+2 * v[1];
		}
};

*/

var v0x = 0;
var v1x = 0;
var v2x = 0;

function smoothX(x) {
    return smooth(v0x, v1x, v2x, x);
}

var v0y = 0;
var v1y = 0;
var v2y = 0;

function smoothY(y) {
    return smooth(v0y, v1y, v2y, y);
}
function smooth(v0, v1, v2, x) {
    v0 = v1;
    v1 = v2;
    v2 = (9.446918438401618072e-4 * x)
        + (-0.91497583480143362955 * v0)
        + (1.91119706742607298189 * v1);
    return (v0 + v2) + 2 * v1;
}
class LowPassFilter {

    constructor() {
        this.v0 = 0;
        this.v1 = 0;
    }

    step(x) {
        this.v0 = this.v1;
        this.v1 = this.v2;
        this.v2 = (9.446918438401618072e-4 * x)
            + (-0.91497583480143362955 * this.v0)
            + (1.91119706742607298189 * this.v1);
        return (this.v0 + this.v2) + 2 * this.v1;
    }
}

/*Three JS*/

var scene = new THREE.Scene();
//var camera = new THREE.PerspectiveCamera(75, 800 / 600, 0.1, 1000);
var camera = new THREE.PerspectiveCamera(60, 800 / 600, 1, 1000);
camera.position.z = 500;

/*line

*/


var line;
var MAX_POINTS = 5000;
var drawCount;
var splineArray = [];
CreateBufferGeometry();
//helper
var axisHelper = new THREE.AxisHelper(2);
scene.add(axisHelper);

var lineColor = 0x000000;

var raycaster = new THREE.Raycaster();

var mouse = new THREE.Vector2();
var pointer = new THREE.Vector2();

var renderer = new THREE.WebGLRenderer({ alpha: true, antialias: true });
renderer.setSize(800, 600);
renderer.shadowMap.enabled = true;
renderer.shadowMap.type = THREE.PCFShadowMap;
document.body.appendChild(renderer.domElement);

/*Lights*/
scene.add(new THREE.AmbientLight(0xa0a0a0));
var light = new THREE.SpotLight(0xffffff, 1.5);
light.position.set(0, 1500, 200);
light.castShadow = true;
//light.shadow = new THREE.LightShadow( new THREE.PerspectiveCamera( 70, 1, 200, 2000 ) );
//light.shadow.bias = -0.000222;
//light.shadow.mapSize.width = 1024;
//light.shadow.mapSize.height = 1024;

scene.add(light);
//light.castShadow=true;
spotlight = light;


var size = 10;
var divisions = 10;

var gridHelper = new THREE.GridHelper(size, divisions, new THREE.Color(0xa0a0a0), new THREE.Color(0xffffff));
gridHelper.material.transparent = true;
gridHelper.material.opacity = 0.5;
//gridHelper.opacity = 0.5;
scene.add(gridHelper);

var geometry = new THREE.BoxGeometry(1, 1, 1);
var material = new THREE.MeshPhongMaterial({ color: 0x00ff00 });
var cube = new THREE.Mesh(geometry, material);
cube.castShadow = true;
cube.receiveShadow = true;
scene.add(cube);

//window.addEventListener( 'mousemove', onMouseMove, false );

var planeZ = new THREE.Plane(new THREE.Vector3(0, 0, 1), 0);

var geometryPlane = new THREE.PlaneGeometry(5, 5, 5);
var materialPlane = new THREE.MeshPhongMaterial({ color: 0xFFFFFF, side: THREE.DoubleSide, transparent: true, opacity: 0.2 });
var plane = new THREE.Mesh(geometryPlane, materialPlane);
plane.rotation.x = -Math.PI * 0.5;
plane.position = new THREE.Vector3(0, -2, 0);
plane.receiveShadow = true;
scene.add(plane);


camera.position.z = 5;

var controls = new OrbitControls(camera);

var animate = function () {
    requestAnimationFrame(animate);

    //cube.rotation.x += 0.1;
    //cube.rotation.y += 0.1;

    //renderer.render(scene, camera);
    controls.update();
    render();
};

function onMouseMove(event) {

    // calculate mouse position in normalized device coordinates
    // (-1 to +1) for both components

    mouse.x = (event.clientX / window.innerWidth) * 2 - 1;
    mouse.y = - (event.clientY / window.innerHeight) * 2 + 1;

}

//var previousPoint = new Vector3(0,0,0);

function render() {

    raycaster.setFromCamera(pointer, camera)

    var pos = raycaster.ray.intersectPlane(planeZ);

    if (pos) {
        console.log("pos x: " + pos.x + ", y: " + pos.y);
        cube.position.x = pos.x;
        cube.position.y = pos.y;
        createLine(pos.x, pos.y, 0);
    }


    //Updating lines
    drawCount = splineArray.length;

    line.geometry.setDrawRange(0, drawCount);
    line.material.color = 0xFFFFFF;
    updatePositions();

    line.geometry.attributes.position.needsUpdate = true;


    renderer.render(scene, camera);

}


function CreateBufferGeometry() {

    // geometry
    var geometry = new THREE.BufferGeometry();

    // attributes
    var positions = new Float32Array(MAX_POINTS * 3); // 3 vertices per point
    geometry.addAttribute('position', new THREE.BufferAttribute(positions, 3));

    // draw range
    var drawCount = 2; // draw the first 2 points, only
    geometry.setDrawRange(0, drawCount);

    // material
    var materialLine = new THREE.LineBasicMaterial({ color: lineColor, linewidth: 20, transparent: false, opacity: 0.95 });

    // line
    line = new THREE.Line(geometry, materialLine);

    scene.add(line);

    splineArray.push(new THREE.Vector3(0, 0.5, 0));
    //splineArray.push(new THREE.Vector3(0, 5, 0));

}

// update positions
function updatePositions() {

    var positions = line.geometry.attributes.position.array;

    var index = 0;

    for (var i = 0; i < splineArray.length; i++) {

        positions[index++] = splineArray[i].x;
        positions[index++] = splineArray[i].y;
        positions[index++] = splineArray[i].z;


    }
}

function createLine(x, y, z) {

    splineArray.push(new THREE.Vector3(x, y, z));

}

animate();



//fix
function padL(a, b, c) {//string/number,length=2,char=0
    return (new Array(b || 2).join(c || 0) + a).slice(-b)
}


