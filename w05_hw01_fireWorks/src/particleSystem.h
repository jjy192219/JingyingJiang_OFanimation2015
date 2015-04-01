//
//  particleSystem.h
//  w05_hw01_fireWorks
//
//  Created by Eric Jiang on 3/10/15.
//
//

#pragma once

#include "ofMain.h"
#include "Particle.h"

class particleSystem {
public:
    
    particleSystem(ofVec2f _pos);
    void update(ofVec2f _force);
    void draw();
    
    vector<Particle> particleList;
    ofVec2f pos;
    
};

