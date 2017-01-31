#pragma once

#include "ofMain.h"
#include "def.h"
#include "AngleCalibration.h"

class CalibrationScene {
    
private:
    float width;
    float height;
    int phase;
    
    CalibrationData caliData;
    AngleCalibration angleCali;
    
public:
    void setup();
    void update();
    void draw();
};
