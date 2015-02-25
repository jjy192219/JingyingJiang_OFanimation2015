//
//  customCircle.cpp
//  w02_A_drawingTool
//
//  Created by Eric Jiang on 2/17/15.
//
//

#include "customCircle.h"

customCircle::customCircle() {
    
}

void customCircle::setup(ofVec2f _initPos) {
    currentPos = _initPos;
}

void customCircle::update(ofVec2f _mouse, float _pct) {
    
    pct = _pct;
    currentPos = currentPos * (1 - pct) + _mouse * pct;
    
}

void customCircle::draw() {
    
    ofCircle(currentPos, ofRandom(1,10));
    ofDrawBitmapString("Move your mouse around.", 30, 30);
}
