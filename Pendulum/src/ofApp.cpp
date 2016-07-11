#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//set screen frame rate
	ofSetFrameRate(60);

	//set initial values
	pos0 = ofPoint(512, 300);
	pos = ofPoint(600, 200);
	vel = ofPoint(100, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
	//constants
	float dt = 1.0f / 60.0f;
	float mass = 0.1f;
	float rubberLen = 200.0f;
	float k = 0.5f;
	ofPoint g(0.0f, 9.0f);

	//computing Hooke's force
	ofPoint delta = pos - pos0;
	float len = delta.length();
	float hookeValue = k * (len - rubberLen);
	delta.normalize();
	ofPoint hookeForce = delta * (-hookeValue);

	//Update velocity and pos
	ofPoint force = hookeForce + g;
	ofPoint a = force / mass;
	vel += a*dt;
	pos += vel * dt;

}

//--------------------------------------------------------------
void ofApp::draw(){
	//Set white background
	ofBackground(255, 255, 255);

	//draw rubber as a blue line
	ofSetColor(0, 0, 255);
	ofLine(pos0.x, pos0.y, pos.x, pos.y);

	//Draw ball as a real circle
	ofSetColor(255, 0, 0);
	ofFill();
	ofCircle(pos.x, pos.y, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
