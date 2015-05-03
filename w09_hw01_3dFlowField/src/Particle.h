//
//  Particle.h
//  w09_hw01_3dFlowField
//
//  Created by Eric Jiang on 4/28/15.
//
//

#pragma once
#include "ofMain.h"

class Particle {
public:
    
    void setup();
    
    void resetForces();
    void applyForce(ofVec3f force);
    void applyDampingForce(float damping);
    
    void update();
    void draw();
    
    ofVec3f pos, vel, acc;
    
};
