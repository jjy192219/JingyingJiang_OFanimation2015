#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofShowCursor();

    
    
    ofBackground(0);

    
    gui.setup("panel");
    gui.setTextColor(ofColor::black);
    gui.setFillColor(ofColor::grey);
    gui.setBackgroundColor(ofColor::grey);
    gui.add(space.set("space", 5, 1, 10));
    gui.add(ptSize.set("point size", 3, 1, 30));
    gui.add(lineWeight.set("Line Width", 1.0, 0.0,50.0));
    

    
    
    kinect.setRegistration(true);
    
    kinect.init();
    
    kinect.open();
    
    kinect.setDepthClipping(0,500);
    
    
    kinect.setCameraTiltAngle(15);
    
    ofSetFrameRate(30);


}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofShowCursor();

    kinect.update();
    

}

void setPointMode(){

}
//--------------------------------------------------------------
void ofApp::draw(){
    
    ofShowCursor();

    gui.draw();
    ofSetColor(255, 255, 255);
    
    easyCam.begin();
    drawPointCloud();
    easyCam.end();
    
    ofCircle(ofGetMouseX(), ofGetMouseY(), 3);

}

void ofApp::drawPointCloud() {
    int w = 640;
    int h = 480;
    
    ofMesh mesh;


    if (pointMode == true) {
        mesh.setMode(OF_PRIMITIVE_POINTS);
    }
    else if (lineMode == true){
        mesh.setMode(OF_PRIMITIVE_LINES);

    }

    

    
    glLineWidth(int(lineWeight));

    int step = int(space);
    int total = 0;
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            
            float distance = kinect.getDistanceAt(x, y);

            if(distance >10 && distance <850) {
                
                ofVec3f tempVec = kinect.getWorldCoordinateAt(x, y);
    
                mesh.addColor(kinect.getColorAt(x,y));
                mesh.addVertex(tempVec);


                    
//                del.addPoint(tempVec);
//                del.triangulate();
//                
//                total++;
            }
        }
        
    }

    
    float connectionDistance = 15;
    int numVerts = mesh.getNumVertices();
//    if (numVerts%2 != 0) {
//        for (int a=0; a<numVerts; ++a) {
//            ofVec3f verta = mesh.getVertex(a);
//            for (int b=a+1; b<numVerts; ++b) {
//                ofVec3f vertb = mesh.getVertex(b);
//                float distance = verta.distance(vertb);
//                if (distance <= connectionDistance) {
//                    mesh.addIndex(a);
//                    mesh.addIndex(b);
//                }
//            }
//        }
//    }
    for (int a=0; a<numVerts; ++a) {
        ofVec3f verta = mesh.getVertex(a);
        for (int b=a+1; b<numVerts; ++b) {
            ofVec3f vertb = mesh.getVertex(b);
            float distance = verta.distance(vertb);
            if (distance <= connectionDistance) {
                mesh.addIndex(a);
                mesh.addIndex(b);
            }
        }
    }

    
    glPointSize(ptSize);
    ofPushMatrix();
    // the projected points are 'upside down' and 'backwards'
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000); // center the points a bit
    ofEnableDepthTest();
    mesh.draw();
    ofDisableDepthTest();
    ofPopMatrix();
    
    
 
    


}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    switch (key) {
        case 'p':
            pointMode = true;
            lineMode = false;
            break;
            
            
        case 'l':
            lineMode = true;
            pointMode =false;
            break;
            
            
        default:
            break;
    }

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
  
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
