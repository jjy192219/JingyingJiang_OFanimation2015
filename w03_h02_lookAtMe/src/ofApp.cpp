#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    
    for(int i = 0; i<20; i ++){
        
        myArrow.setup();
        arrowList.push_back(myArrow);
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //    arrowList[0].update(ofGetMouseX(), ofGetMouseY());
    for(int i = 0; i<20; i++){
        ofPushMatrix();
        
        if(i ==0 ){
            
            arrowList[i].rotation(ofGetMouseX(), ofGetMouseY());
            
            
            arrowList[i].update(ofGetMouseX(), ofGetMouseY());
        }
        else{
            
            arrowList[i].update(arrowList[i-1].pos.x, arrowList[i-1].pos.y);
            
            arrowList[i].rotation(arrowList[i-1].pos.x, arrowList[i-1].pos.y);
            
        }
        
        ofPopMatrix();
        
    }
    //    myArrow.update(ofGetMouseX(), ofGetMouseY());
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i< 20; i++){
        
        ofSetColor(100, 100, ofRandom(0,255));
        
        ofPushMatrix();
        
        arrowList[i].draw();
        
        ofPopMatrix();
    }
    
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
