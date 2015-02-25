//
//  customCircle.h
//  w02_A_drawingTool
//
//  Created by Eric Jiang on 2/17/15.
//
//
#pragma once

#include "ofMain.h"

class customCircle {
public:
    customCircle();
    void setup(ofVec2f _initPos);
    void update(ofVec2f _mouse, float pct);
    void draw();
    
private:
    ofVec2f currentPos;
    float pct;
    
    int colorCode;
    
};