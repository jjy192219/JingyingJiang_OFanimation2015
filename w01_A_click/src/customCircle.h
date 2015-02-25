//
//  customCircle.h
//  assignment1_click
//
//  Created by Eric Jiang on 2/9/15.
//
//

#pragma once

#include "ofMain.h"

class customCircle {
public:
    customCircle();
    void setup(ofVec2f _initPos, ofVec2f _finalPos);
    void update(float pct);
    void draw();
    void setNewSize(int circleSize);
    void setNewPosition(ofVec2f _newPos);
    
private:
    ofVec2f initPos, finalPos, currentPos;
    float pct;
    int circleSize=10;
    
};
