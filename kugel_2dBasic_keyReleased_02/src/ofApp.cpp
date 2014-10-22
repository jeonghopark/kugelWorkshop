#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(10);
    
    numPoint = 100;

    point2dSetting();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate( ofGetWidth()*0.5, ofGetHeight()*0.5 );
    
    for (int i=0; i<numPoint; i++) {
        
        float _x_temp = point2D[i].x;
        float _y_temp = point2D[i].y;
        
        ofCircle( _x_temp, _y_temp, 2);
        
    }
    
}


//--------------------------------------------------------------
void ofApp::point2dSetting(){
    
    point2D.clear();
    
    for (int i=0; i<numPoint; i++) {
        
        float _theta = ofRandom(0, TWO_PI);
        float _radius = 100;
        
        float _x = cos(_theta) * _radius;
        float _y = sin(_theta) * _radius;
        
        ofVec2f _point2D_temp = ofVec2f( _x, _y );
        
        point2D.push_back( _point2D_temp );
        
    }
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    point2dSetting();
    
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
