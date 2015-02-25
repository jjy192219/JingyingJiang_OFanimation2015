#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    myCircle1.setup(ofVec2f(0, 500), ofVec2f(ofGetWindowWidth(), 500));
    pct = 0;
    
    myCircle2.setup(ofVec2f(0, 150), ofVec2f(ofGetWindowWidth(), 150));
}

//--------------------------------------------------------------
void ofApp::update(){
    
    pct += 0.001;
    //pct = ofMap (ofGetMouseY(), 0, ofGetHeight(), 0, 1);
    
    myCircle1.update(pct);
    myCircle2.update(pct);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myCircle1.draw();
    myCircle2.draw();
    
    
    
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
    
    pct = 0.0;
    
    if(move1 == 1){
        myCircle1.setNewPosition(ofVec2f(x, y));
        move1=0;
        myCircle1.setNewSize(25);
    }
    else{
        myCircle1.setNewSize(10);
        
        move1=1;
    }
    
    if(move2 ==1){
        myCircle2.setNewPosition(ofVec2f(x, y));
        move2=0;
        
        myCircle2.setNewSize(25);
    }
    else{
        move2 = 1;
        
        myCircle2.setNewSize(10);
        
    }
    
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