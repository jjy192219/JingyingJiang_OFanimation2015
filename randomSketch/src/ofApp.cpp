#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    
    radius = radius + 0.9;


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float xorig = 500;
    float yorig = 300;
    float angle = ofGetElapsedTimef()*3.5;
    float x = xorig + radius * cos(angle);
    float y = yorig + radius * sin(angle);
    ofCircle(x, y, radius);
    
    
//    
//    float xPos = ofMap(sin((ofGetElapsedTimeMillis() % 6283) / 6283.0), -1, 1, 0, ofGetWidth());
//    
//    ofRect(xPos, ofGetHeight()/2, 10,10);
    

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
