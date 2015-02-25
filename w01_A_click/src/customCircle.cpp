//
//  customCircle.cpp
//  assignment1_click
//
//  Created by Eric Jiang on 2/9/15.
//
//

#include "customCircle.h"

customCircle::customCircle() {
    
}

void customCircle::setup(ofVec2f _initPos, ofVec2f _finalPos) {
    initPos = _initPos;
    finalPos = _finalPos;
}

void customCircle::update(float _pct) {
    
    pct = _pct;
    currentPos = initPos * (1 - pct) + finalPos * pct;
    
}

void customCircle::draw() {
    
    ofLine (initPos, finalPos);
    ofCircle(currentPos, circleSize);
    
    //all of this is just writing to the screen
    ofDrawBitmapString("Click anywhere!", 30, 30);
    ofDrawBitmapString("Init Pos", initPos);
    ofDrawBitmapString("Final Pos", finalPos);
    ofDrawBitmapString("pct = " + ofToString(pct), currentPos.x, currentPos.y - 20);
    
}

void customCircle::setNewSize(int _circleSize){

    circleSize = _circleSize;
}

void customCircle::setNewPosition(ofVec2f _newPos) {
    initPos = currentPos;
    finalPos = _newPos;
}