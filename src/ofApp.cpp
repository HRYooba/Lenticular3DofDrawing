#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    scene.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    scene.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(100);
    scene.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        scene.setPhase(PHASE_ANGLE);
    }
    if (key == 's') {
        scene.setPhase(PHASE_PITH);
    }
    if (key == 'd') {
        scene.setPhase(PHASE_DISPLAY);
    }
    if (key == OF_KEY_UP) {
        scene.changePitch(OF_KEY_UP);
    }
    if (key == OF_KEY_DOWN) {
        scene.changePitch(OF_KEY_DOWN);
    }
    if (key == OF_KEY_LEFT) {
        scene.changeDegit(OF_KEY_LEFT);
    }
    if (key == OF_KEY_RIGHT) {
        scene.changeDegit(OF_KEY_RIGHT);
    }
    scene.setData();
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
