#pragma once

#include "ofMain.h"

class PitchCalibration {
    
private:
    float pitch;
    float width;
    float height;
    
public:
    void setup();
    void update();
    void draw();
    float getPitch();
};
