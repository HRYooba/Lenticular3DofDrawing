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
    switch (degitPos) {
        case 0:
            pitch ++;
            break;
        case 1:
            pitch += 0.1;
            break;
        case 2:
            pitch += 0.01;
            break;
        case 3:
            pitch += 0.001;
            break;
        case 4:
            pitch += 0.0001;
            break;
    }
}

void PitchCalibration::reducePitch() {
    switch (degitPos) {
        case 0:
            pitch --;
            break;
        case 1:
            pitch -= 0.1;
            break;
        case 2:
            pitch -= 0.01;
            break;
        case 3:
            pitch -= 0.001;
            break;
        case 4:
            pitch -= 0.0001;
            break;
    }
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
