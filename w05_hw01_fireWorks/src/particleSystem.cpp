//
//  particleSystem.cpp
//  w05_hw01_fireWorks
//
//  Created by Eric Jiang on 3/10/15.
//
//

#include "particleSystem.h"

particleSystem::particleSystem(ofVec2f _pos){
    pos = _pos;
}

//--------------------------------------------------------------
void particleSystem::update(ofVec2f _force){
    
    for (int i = 0; i < 10; i++) {
        Particle particle(pos);
        particleList.push_back(particle);
        
    }
    
    for (int i = 0; i < particleList.size(); i++) {
        particleList[i].resetForces();
        particleList[i].applyForce(_force);
        particleList[i].update();
    }
    
    while (particleList.size() > 100) {
        particleList.erase(particleList.end());
    }
    
}

//--------------------------------------------------------------
void particleSystem::draw(){
    for (int i = 0; i < particleList.size(); i++) {
        particleList[i].draw();
    }
    
}