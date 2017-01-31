#include "PitchCalibration.h"


void PitchCalibration::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    shader.load("", "shader/PitchDisplay.frag");
    fbo.allocate(width, height);
}

void PitchCalibration::update() {
    fbo.begin();
    shader.begin();
    shader.setUniform1f("u_angle", angle);
    ofDrawRectangle(0, 0, width, height);
    shader.end();
    fbo.end();
}

void PitchCalibration::draw() {
    fbo.draw(0, 0);
//    ofPushMatrix();
//    for (int x = 0; x < width; x ++) {
//        for (int y = 0; y < height; y ++) {
//            ofSetColor(calculateColor(x, y));
//            ofDrawEllipse(x, y, 1, 1);
//        }
//    }
//    ofPopMatrix();
}

ofColor PitchCalibration::calculateColor(int x, int y) {
    // b = y - a * x
    ofColor result;
    float a = tan(angle);
    int b = roundf(y - a * x);
    if (b % 2 == 0) {
        result = YELLOW;
    } else {
        result = PINK;
    }
    return result;
}

void PitchCalibration::setAngle(float _angle) {
    angle = _angle;
}

float PitchCalibration::getPitch() {
    return pitch;
}
