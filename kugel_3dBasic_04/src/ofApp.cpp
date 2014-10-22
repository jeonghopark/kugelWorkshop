#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(10);
    
    numPoint = 200;

    point3dSetting();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate( ofGetWidth()*0.5, ofGetHeight()*0.5 );
    
    for (int i=0; i<numPoint; i++) {
        
        float _x_temp = point3D[i].x;
        float _y_temp = point3D[i].y;
        float _z_temp = point3D[i].z;
        
        ofCircle( _x_temp, _y_temp, _z_temp, 2);
        
    }
    
}


//--------------------------------------------------------------
void ofApp::point3dSetting(){
    
    point3D.clear();
    
    for (int i=0; i<numPoint; i++) {
        
        float _theta = ofRandom(0, TWO_PI);
        float _pi = ofRandom(0, PI);
        float _radius = 200;
        
        float _x = cos(_theta) * sin(_pi) * _radius;
        float _y = sin(_theta) * sin(_pi) * _radius;
        float _z = sin(_pi) * _radius;
        
        ofVec3f _point3D_temp = ofVec3f( _x, _y, _z );
        
        point3D.push_back( _point3D_temp );
        
    }
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    point3dSetting();
    
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
