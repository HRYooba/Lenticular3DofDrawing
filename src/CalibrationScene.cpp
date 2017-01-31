#include "CalibrationScene.h"

void CalibrationScene::setup() {
    width = ofGetWidth();
    height = ofGetHeight();
    phase = CALIBRATION_PHASE_ANGLE;
    caliData = {0, 0};
    angleCali.setup();
}

void CalibrationScene::update() {
    switch (phase) {
        case CALIBRATION_PHASE_ANGLE:
            angleCali.update();
            break;
        case CALIBRATION_PHASE_PITH:
            break;
    }
}

void CalibrationScene::draw() {
    switch (phase) {
        case CALIBRATION_PHASE_ANGLE:
            angleCali.draw();
            break;
        case CALIBRATION_PHASE_PITH:
            break;
    }
}

void CalibrationScene::setPhase(int _phase) {
    phase = _phase;
}
