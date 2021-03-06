#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(10);
    
    numPoint = 200;

    ofSetSphereResolution(4);
    sphere.setRadius(4);
    
    point3dSetting();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    for (int i=0; i<numPoint; i++) {
        
        ofSetColor( 255, 80 );
        sphere.setPosition( point3D[i] );
        sphere.drawWireframe();
        
        // Linien
        ofVec3f _origin = ofVec3f( 0, 0, 0 );
        ofSetColor( 255, 40 );
        ofLine( _origin, point3D[i] );
        
    }
    
    cam.end();
    
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
        float _z = cos(_pi) * _radius;
        
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
