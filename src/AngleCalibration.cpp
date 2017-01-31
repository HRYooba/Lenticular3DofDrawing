#include "AngleCalibration.h"

void AngleCalibration::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
}

void AngleCalibration::update(){
    if (ofGetMousePressed()) {
        angle = atan2(ofGetMouseY() - height / 2.0, ofGetMouseX() - width / 2.0);
    }
}

void AngleCalibration::draw() {
    ofBackground(0);
    ofPushMatrix();
    ofTranslate(width / 2.0, height / 2.0);
    ofRotate(angle / PI * 180.0);
    ofSetColor(255);
    ofDrawLine(0, 0, width, 0);
    ofDrawLine(0, 0, -width, 0);
    ofPopMatrix();
}

float AngleCalibration::getAngle() {
    return angle;
}
