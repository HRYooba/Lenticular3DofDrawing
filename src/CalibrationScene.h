#pragma once

#include "ofMain.h"
#include "def.h"
#include "AngleCalibration.h"
#include "PitchCalibration.h"

class CalibrationScene {
    
private:
    float width;
    float height;
    int phase;
    
    CalibrationData caliData;
    AngleCalibration angleCali;
    PitchCalibration pitchCali;
    
public:
    void setup();
    void update();
    void draw();
    void setPhase(int _phase);
    void setData();
    void changePitch(int inputKey);
    void changeDegit(int inputKey);
};
