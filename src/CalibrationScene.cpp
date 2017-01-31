#include "CalibrationScene.h"

void CalibrationScene::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    phase = CALIBRATION_PHASE_ANGLE;
    caliData = {0, 0};
    angleCali.setup();
    pitchCali.setup();
}

void CalibrationScene::update() {
    switch (phase) {
        case CALIBRATION_PHASE_ANGLE:
            angleCali.update();
            break;
        case CALIBRATION_PHASE_PITH:
            pitchCali.update();
            break;
    }
}

void CalibrationScene::draw() {
    switch (phase) {
        case CALIBRATION_PHASE_ANGLE:
            angleCali.draw();
            break;
        case CALIBRATION_PHASE_PITH:
            pitchCali.draw();
            break;
    }
}

void CalibrationScene::setPhase(int _phase) {
    phase = _phase;
}

void CalibrationScene::setData() {
    caliData.angle = angleCali.getAngle();
    caliData.pitch = pitchCali.getPitch();
    pitchCali.setAngle(angleCali.getAngle());
}
