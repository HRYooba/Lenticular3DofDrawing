#pragma once

#include "ofMain.h"

#define VIEWPOINT_COUNT 15

class DrawingDisplay {
    
private:
    float pitch;
    float angle;
    float width;
    float height;
    ofShader shader;
    ofFbo fbo;
    ofTexture tex[VIEWPOINT_COUNT];
    
public:
    void setup();
    void update();
    void draw();
    void setAngle(float _angle);
    void setPitch(float _pitch);
};
