#include <stdio.h>

void *displayHandlerThreadExecute(void *vargp)
{
    while (1)
    {
        fflush(stdout);
        printf("=================== Welcome to CRT system ====================\n\n");
        // printf("\n");
        printf("=========================== LAMPS ============================\n");
        printf("Fuel -> %s", systemStatus->lamp.fuel == 0 ? "green" : "red");
        printf("Engine Pressure -> %s", systemStatus->lamp.enginePressure == 0 ? "green" : "red");
        printf("Engine Temperature -> %s", systemStatus->lamp.engineTemperature == 0 ? "green" : "red");
        printf("Smoke Detector 1 -> %s", systemStatus->lamp.smokeDetector1 == 0 ? "green" : "red");
        printf("Smoke Detector 2 -> %s", systemStatus->lamp.smokeDetector2 == 0 ? "green" : "red");
        sleep(0.5);
    }
}