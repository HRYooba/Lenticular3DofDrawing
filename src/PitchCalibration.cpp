#include "PitchCalibration.h"


void PitchCalibration::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    shader.load("", "shader/PitchDisplay.frag");
    fbo.allocate(width, height);
    pitch = 1.0;
}

void PitchCalibration::update() {
    fbo.begin();
    shader.begin();
    shader.setUniform1f("u_angle", angle + PI / 2.0);
    shader.setUniform1f("u_pitch", pitch);
    shader.setUniform2f("u_resolution", width, height);
    ofDrawRectangle(0, 0, width, height);
    shader.end();
    fbo.end();
}

void PitchCalibration::draw() {
    ofSetColor(255);
    fbo.draw(0, 0);
    ofSetColor(0);
    ofDrawBitmapString(ofToString(pitch), 10, 20);
}

void PitchCalibration::setAngle(float _angle) {
    angle = _angle;
}

void PitchCalibration::increasePitch() {
    pitch += 0.1;
}

void PitchCalibration::reducePitch() {
    pitch -= 0.1;
    if (pitch < 0) {
        pitch = 0;
    }
}

void PitchCalibration::moveLeftDegit() {
    degitPos --;
    if (degitPos < 0) {
        degitPos = 0;
    }
}

void PitchCalibration::moveRightDegit() {
    degitPos ++;
    if (degitPos > DEGIT_SIZE) {
        degitPos = DEGIT_SIZE;
    }
}

float PitchCalibration::getPitch() {
    return pitch;
}
