#include "Scene.h"

void Scene::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    phase = PHASE_ANGLE;
    caliData = {0, 0};
    angleCali.setup();
    pitchCali.setup();
    display.setup();
}

void Scene::update() {
    switch (phase) {
        case PHASE_ANGLE:
            angleCali.update();
            break;
        case PHASE_PITH:
            pitchCali.update();
            break;
        case PHASE_DISPLAY:
            display.update();
            break;
    }
}

void Scene::draw() {
    switch (phase) {
        case PHASE_ANGLE:
            angleCali.draw();
            break;
        case PHASE_PITH:
            pitchCali.draw();
            break;
        case PHASE_DISPLAY:
            display.draw();
            break;
    }
}

void Scene::setPhase(int _phase) {
    phase = _phase;
}

void Scene::setData() {
    caliData.angle = angleCali.getAngle();
    caliData.pitch = pitchCali.getPitch();
    switch (phase) {
        case PHASE_ANGLE:
            break;
        case PHASE_PITH:
            pitchCali.setAngle(caliData.angle);
            break;
        case PHASE_DISPLAY:
            display.setAngle(caliData.angle);
            display.setPitch(caliData.pitch);
            break;
    }
}

void Scene::changePitch(int inputKey) {
    if (phase != PHASE_PITH) {
        return;
    }
    inputKey == OF_KEY_UP ? pitchCali.increasePitch() : pitchCali.reducePitch();
}

void Scene::changeDegit(int inputKey) {
    if (phase != PHASE_PITH) {
        return;
    }
    inputKey == OF_KEY_RIGHT ? pitchCali.moveRightDegit() : pitchCali.moveLeftDegit();
}
