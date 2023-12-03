#include <stdio.h>
#include <stdlib.h>

void *displayHandlerThreadExecute(void *vargp)
{
    while (1)
    {
        system("clear");
        // system("cls");
        printf("=================== Welcome to CRT system ====================\n\n");
        // printf("\n");
        printf("=========================== LAMPS ============================\n");
        printf("Fuel -> \e[0;%dm%s\e[0m\n", systemStatus.lamp.fuel == 0 ? 32 : 31, systemStatus.lamp.fuel == 0 ? "green" : "red");
        printf("Engine Pressure -> \e[0;%dm%s\e[0m\n", systemStatus.lamp.enginePressure == 0 ? 32 : 31, systemStatus.lamp.enginePressure == 0 ? "green" : "red");
        printf("Engine Temperature -> \e[0;%dm%s\e[0m\n", systemStatus.lamp.engineTemperature == 0 ? 32 : 31, systemStatus.lamp.engineTemperature == 0 ? "green" : "red");
        printf("Smoke Detector 1 -> \e[0;%dm%s\e[0m\n", systemStatus.lamp.smokeDetector1 == 0 ? 32 : 31, systemStatus.lamp.smokeDetector1 == 0 ? "green" : "red");
        printf("Smoke Detector 2 -> \e[0;%dm%s\e[0m\n", systemStatus.lamp.smokeDetector2 == 0 ? 32 : 31, systemStatus.lamp.smokeDetector2 == 0 ? "green" : "red");
        printf("=========================== DIALS ============================\n");
        printf("Fuel -> %f %s\n", systemStatus.dial.fuelLevel, FUEL_UNITS);
        printf("Engine Pressure -> %f %s\n", systemStatus.dial.enginePressure, ENGINE_PRESSURE_UNITS);
        printf("Engine Temperature -> %f %s\n", systemStatus.dial.engineTemperature, ENGINE_TEMPERATURE_UNITS);
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

        sleep(1);
    }
}