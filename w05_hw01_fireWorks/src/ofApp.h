#pragma once

#include "ofMain.h"
#include "particleSystem.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    float circlrY = ofGetHeight();
    float circleX = 0;

    
    //Particle particle;
    
    vector<particleSystem> systems;;
    ofVec2f gravity;
    
};

