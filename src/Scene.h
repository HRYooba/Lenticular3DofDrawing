#pragma once

#include "ofMain.h"
#include "def.h"
#include "AngleCalibration.h"
#include "PitchCalibration.h"
#include "DrawingDisplay.h"

class Scene {
    
private:
    float width;
    float height;
    int phase;
    
    CalibrationData caliData;
    AngleCalibration angleCali;
    PitchCalibration pitchCali;
    DrawingDisplay display;
    
public:
    void setup();
    void update();
    void draw();
    void setPhase(int _phase);
    void setData();
    void changePitch(int inputKey);
    void changeDegit(int inputKey);
};
