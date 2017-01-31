#pragma once

#include "ofMain.h"

class PitchCalibration {
    
private:
    float pitch;
    float angle;
    float width;
    float height;
    
    int convertDiagonalPosX(int x, int y);
    int convertDiagonalPosY(int x, int y);
    
public:
    void setup();
    void update();
    void draw();
    void setAngle(float _angle);
    float getPitch();
};
