#pragma once

#include "ofMain.h"

#define DEGIT_SIZE 4

class PitchCalibration {
    
private:
    float pitch;
    float angle;
    float width;
    float height;
    int degitPos;
    ofShader shader;
    ofFbo fbo;
    
public:
    void setup();
    void update();
    void draw();
    void setAngle(float _angle);
    void reducePitch();
    void increasePitch();    
    void moveRightDegit();
    void moveLeftDegit();
    float getPitch();
};
