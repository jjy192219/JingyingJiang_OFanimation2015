#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "ofxGui.h"
#include "ofxDelaunay.h"
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
        void drawPointCloud();


		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    
    ofxKinect kinect;
    
    ofParameter<float> ptSize;
    ofParameter<float> space;
    ofParameter<float> lineWeight;
    



    
    ofxPanel gui;
		
    ofEasyCam easyCam;
    
    ofxDelaunay del;
    
    bool pointMode = false;
    bool lineMode = false;
    

//    ofMesh mesh;


};
