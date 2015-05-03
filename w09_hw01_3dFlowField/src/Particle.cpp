//
//  Particle.cpp
//  w09_hw01_3dFlowField
//
//  Created by Eric Jiang on 4/28/15.
//
//
#include "Particle.h"

void Particle::setup() {
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    pos.z = (ofRandomWidth()*ofRandomHeight())/2;

}

void Particle::resetForces() {
    acc *= 0;
}

void Particle::applyForce(ofVec3f force) {
    acc += force;
}

void Particle::applyDampingForce(float damping) {
    acc -= vel.getNormalized() * damping;
}

void Particle::update() {
    vel += acc;
    pos += vel;
    
}

void Particle::draw() {
    ofCircle(pos, 1);
}
