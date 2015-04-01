//
//  Particle.cpp
//  w05_hw01_fireWorks
//
//  Created by Eric Jiang on 3/10/15.
//
//

#include "Particle.h"

Particle::Particle(ofVec2f _pos) {
    pos.set(_pos);
    float angle = ofRandom(0, 2*PI);
    float rad = ofRandom(0.05, 10);

    vel.x = rad*cos(angle);
    vel.y = rad*sin(angle);
    lifespan = 255;
}

void Particle::setup() {
    
}

void Particle::resetForces() {
    acc *= 0;
}

void Particle::applyForce(ofVec2f force) {
 
    acc += force;
}

void Particle::update() {
    vel += acc;
    pos += vel;
    
    tail.push_back(pos);

    
    if (tail.size()>60) {
        tail.erase(tail.end());
    }
    if (lifespan > 0) lifespan -= 3.0;
    
}

void Particle::draw() {
    ofSetLineWidth(5);

    ofNoFill();
    
    ofBeginShape();
    for (ofPoint fireTail:tail) {
        ofVertex(fireTail);
    }
    ofEndShape(false);
    
    ofSetColor(lifespan);
    ofCircle(pos, 5);
}

