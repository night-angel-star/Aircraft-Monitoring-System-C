#include <stdio.h>
#include <stdlib.h>

void *displayHandlerThreadExecute(void *vargp)
{
    while (1)
    {
        printf("\033[2J\033[H");
        printf("=================== Welcome to CRT system ====================\n\n");
        // printf("\n");
        printf("=========================== LAMPS ============================\n");
        printf("Fuel -> %s\n", systemStatus.lamp.fuel == 0 ? "green" : "red");
        printf("Engine Pressure -> %s\n", systemStatus.lamp.enginePressure == 0 ? "green" : "red");
        printf("Engine Temperature -> %s\n", systemStatus.lamp.engineTemperature == 0 ? "green" : "red");
        printf("Smoke Detector 1 -> %s\n", systemStatus.lamp.smokeDetector1 == 0 ? "green" : "red");
        printf("Smoke Detector 2 -> %s\n", systemStatus.lamp.smokeDetector2 == 0 ? "green" : "red");
        printf("=========================== WARNINGS =========================\n");
        // TODO: print warnings

        printf("=========================== READINGS ==========================\n");
        // TODO: print readings
        printf("=============================================================\n");
        printf("Select OPTION : ACK Warning (Y) , IGNORE Warning  (N) ,  REQUEST Reading  (R) ,\n");
        printf("Quit (K) , SIMULATE Smoke1  (Z) , SIMULATE Smoke2  (X) , CLEAR Readings (C)\n");
        printf("============================================================\n\n\n");
        printf("============================================================\n");
        printf("Select READING: Fuel (F) , Pressure  (P) , Temperature (T), Smoke1 (1), Smoke2 (2)\n");
        printf("============================================================\n");

        fflush(stdout);

        sleep(2);
    }
}