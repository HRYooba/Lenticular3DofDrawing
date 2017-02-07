#include "DrawingDisplay.h"

void DrawingDisplay::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    shader.load("", "shader/DrawingDisplay.frag");
    fbo.allocate(width, height);
    for (int i = 0; i < VIEWPOINT_COUNT; i ++) {
        ofLoadImage(tex[i], "image/image" + ofToString(i) + ".png");
    }
}

void DrawingDisplay::update() {
    fbo.begin();
    shader.begin();
    shader.setUniform1f("u_angle", angle + PI / 2.0);
    shader.setUniform1f("u_pitch", pitch);
    shader.setUniform2f("u_resolution", width, height);
    for (int i = 0; i < VIEWPOINT_COUNT; i ++) {
        shader.setUniformTexture("u_tex" + ofToString(i), tex[i], i + 1);
    }
    ofDrawRectangle(0, 0, width, height);
    shader.end();
    fbo.end();
}

void DrawingDisplay::draw() {
    ofSetColor(255);
    fbo.draw(0, 0);
}

void DrawingDisplay::setAngle(float _angle) {
    angle = _angle;
}

void DrawingDisplay::setPitch(float _pitch) {
    pitch = _pitch;
}
