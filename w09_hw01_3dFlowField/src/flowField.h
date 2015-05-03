//
//  flowField.h
//  w09_hw01_3dFlowField
//
//  Created by Eric Jiang on 4/28/15.
//
//

#pragma once

#include "ofMain.h"

class flowField {
public:
    
    flowField();
    
    void setup(float w, float h, float z, float res);
    
    //functions to set patterns on the flow field
    void setRandom(float scale);
    void setNoise();
    
    //to be called from the particle, so it knows the force of the flow where it stands on
    ofVec3f getForceAt(float x, float y, float z);
    
    //drawing the field
    void draw();
    
    //container for all the flows
    vector<ofVec3f> field;
    
    //The size of the field in pixels, e.g. 1024x768
    int screenWidth;
    int screenHeight;
    int screenDepth;

    
    //The size of the field in number of flows, e.g. 52 x 40
    int fieldWidth;
    int fieldHeight;
    int fieldDepth;

    
    //What is the area covered by each flow, e.g. 20x20 pixels
    float resolution;
    
    //Total number of flows in a field
    int totalFlows;
    
};
