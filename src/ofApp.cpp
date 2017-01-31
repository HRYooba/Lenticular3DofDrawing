#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    caliScene.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    caliScene.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(100);
    caliScene.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        caliScene.setPhase(CALIBRATION_PHASE_ANGLE);
    }
    if (key == 's') {
        caliScene.setPhase(CALIBRATION_PHASE_PITH);
    }
    caliScene.setData();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
