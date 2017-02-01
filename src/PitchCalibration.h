#pragma once

#include "ofMain.h"

class PitchCalibration {
    
private:
    float pitch;
    float angle;
    float width;
    float height;
    int degitPos;
    const int DEGIT_SIZE = 5;
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
