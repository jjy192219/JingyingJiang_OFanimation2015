#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    mover.setup(ofGetWidth()/2, ofGetHeight()/2);
    gravity.set(0, 0.6);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    mover.applyForce(gravity);
    mover.applyForce(diffr);
    mover.applyDampingForce(0.05);
    mover.update();
    mover.resetForces();

}

//--------------------------------------------------------------
void ofApp::draw(){
    mover.draw();
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
//    mover.setup(x, y);
    mouse.set(x, y);
    preMouse.set(ofGetPreviousMouseX(), ofGetPreviousMouseY());
    diffr.set((mouse.x-preMouse.x)*0.3, (mouse.y-preMouse.y)*0.3);
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
