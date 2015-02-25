#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    


}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetBackgroundAuto(false);
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){

//    ofBackground(255);
    
    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofRotate(ofGetFrameNum());
    
    float n = ofNoise(time)* ofGetWidth()/2;
    time += increment;
    
    ofColor red(ofRandom(0, 128), 0, 0);
    ofSetColor(red);
    
    ofLine(0, 0, n, n);
    ofCircle(n, n, 1);
    
    
    cout << ofGetFrameNum() <<endl;
    
    ofPopMatrix();

    

    
        
    

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
