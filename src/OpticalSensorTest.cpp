#include <OpticalSensorTest.h>

bool isSensorTriggered(int sensorpin) {
    const int threshold = 50;
    int opticalReading = analogRead(sensorpin);

    return (opticalReading >= threshold);
};

