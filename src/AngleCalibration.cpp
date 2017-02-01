#include "AngleCalibration.h"

void AngleCalibration::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    shader.load("", "shader/AngleDisplay.frag");
    fbo.allocate(width, height);
}

void AngleCalibration::update(){
    if (ofGetMousePressed()) {
        angle = atan2(ofGetMouseY(), ofGetMouseX());
    }
    fbo.begin();
    shader.begin();
    shader.setUniform1f("u_angle", angle + PI / 2.0);
    shader.setUniform2f("u_resolution", width, height);
    ofDrawRectangle(0, 0, width, height);
    shader.end();
    fbo.end();
}

void AngleCalibration::draw() {
//    ofBackground(0);
//    ofPushMatrix();
//    ofTranslate(width / 2.0, height / 2.0);
//    ofRotate(angle / PI * 180.0);
//    ofSetColor(255);
//    ofDrawLine(0, 0, width, 0);
//    ofDrawLine(0, 0, -width, 0);
//    ofPopMatrix();
    ofSetColor(255);
    fbo.draw(0, 0);
}

float AngleCalibration::getAngle() {
    return angle;
}
