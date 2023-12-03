#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <pthread.h>

#include "aircraftmonitoringsystem.h"

Status systemStatus;

#include "displayHandler.h"
#include "enginePressure.h"
#include "engineTemperature.h"
#include "fuelSensor.h"
#include "keyboardHandler.h"
#include "simulateSensor.h"
#include "smokeDetector1.h"
#include "smokeDetector2.h"

int number = -1;

pthread_t fuelSensorThread,
    enginePressureThread,
    engineTemperatureThread,
    smokeDetector1,
    smokeDetector2,
    displayHandlerThread,
    keyboardHandlerThread;

int main(int argc, char *argv[])
{
    initSystemStatusValue(systemStatus);
    int i = 0;

    pthread_create(&fuelSensorThread, NULL, fuelSensorThreadExecute, (void *)&i);

    i = 1;
    pthread_create(&enginePressureThread, NULL, enginePressureThreadExecute, (void *)&i);

    i = 2;
    pthread_create(&engineTemperatureThread, NULL, engineTemperatureThreadExecute, (void *)&i);

    i = 3;
    pthread_create(&smokeDetector1, NULL, smokeDetector1Execute, (void *)&i);

    i = 4;
    pthread_create(&smokeDetector1, NULL, smokeDetector2Execute, (void *)&i);

    i = 5;
    pthread_create(&displayHandlerThread, NULL, displayHandlerThreadExecute, (void *)&i);

    i = 6;
    pthread_create(&keyboardHandlerThread, NULL, keyboardHandlerThreadExecute, (void *)&i);

    pthread_join(fuelSensorThread, NULL);
    pthread_join(enginePressureThread, NULL);
    pthread_join(engineTemperatureThread, NULL);
    pthread_join(smokeDetector1, NULL);
    pthread_join(smokeDetector2, NULL);
    pthread_join(displayHandlerThread, NULL);
    pthread_join(keyboardHandlerThread, NULL);

    return 0;
}
