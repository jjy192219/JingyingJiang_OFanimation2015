#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(0);
    
    myCircle1.setup(ofVec2f(0, 500));
    myCircle2.setup(ofVec2f(0, 300));
    myCircle3.setup(ofVec2f(0, 100));

    pct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    myCircle1.update(ofVec2f(ofGetMouseX(), ofGetMouseY()),0.02);
    myCircle2.update(ofVec2f(ofGetMouseX(), ofGetMouseY()),0.05);
    myCircle3.update(ofVec2f(ofGetMouseX(), ofGetMouseY()),0.06);

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myCircle1.draw();
    myCircle2.draw();
    myCircle3.draw();

    
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
