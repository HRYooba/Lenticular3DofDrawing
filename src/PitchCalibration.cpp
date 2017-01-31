#include "PitchCalibration.h"


void PitchCalibration::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
}

void PitchCalibration::update() {
    
}

void PitchCalibration::draw() {
    ofPushMatrix();
//    ofTranslate(width / 2.0, height / 2.0);
//    ofRotate(angle / PI * 180.0);
    for (int x = 0; x < width; x ++) {
        for (int y = 0; y < height; y ++) {
            
        }
    }
    ofPopMatrix();
}

int PitchCalibration::convertDiagonalPosX(int x, int y) {
    // X = (Y - b) / a
    int X;
    float a = tan(angle);
    float b = convertDiagonalPosY(0, y);
    X = int((y - b) / a);
    return X;
}

int PitchCalibration::convertDiagonalPosY(int x, int y) {
    // Y = aX + b
    int Y;
    float a = tan(angle);
    float b = y;
    Y = int(a * x + b);
    return Y;
}

void PitchCalibration::setAngle(float _angle) {
    angle = _angle;
}

float PitchCalibration::getPitch() {
    return pitch;
}
