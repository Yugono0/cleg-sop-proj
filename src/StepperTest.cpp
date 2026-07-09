#include <StepperTest.h>

bool stepperOneR(bool stepTestState, Stepper &braunMotor) {
    if (!stepTestState) {
        return false;
    }

    const int stepsPerRevolution = 200;
    const int loops = 60;

    braunMotor.setSpeed(60);

    for (int i = 0; i < loops; i++) {
        braunMotor.step(stepsPerRevolution);
        delay(500);
        braunMotor.step(-stepsPerRevolution);
        delay(500);
    }

    return true;
}
