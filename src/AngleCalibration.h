#pragma once

#include "ofMain.h"

class AngleCalibration {
    
private:
    float angle;
    float width;
    float height;
    
public:
    void setup();
    void update();
    void draw();
    float getAngle();
};
