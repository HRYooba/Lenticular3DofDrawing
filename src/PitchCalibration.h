#pragma once

#include "ofMain.h"

class PitchCalibration {
    
private:
    float pitch;
    float angle;
    float width;
    float height;
    const ofColor PINK = ofColor(255, 0, 255);
    const ofColor YELLOW = ofColor(255, 255, 0);
    ofColor calculateColor(int x, int y);
    ofShader shader;
    ofFbo fbo;
    
public:
    void setup();
    void update();
    void draw();
    void setAngle(float _angle);
    float getPitch();
};
