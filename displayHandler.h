#include <ncurses.h>
#include <stdio.h>

void *displayHandlerThreadExecute(void *vargp)
{
    initscr();
    while (1)
    {
        clear();
        printw("=================== Welcome to CRT system ====================\n\n");
        // printw("\n");
        printw("=========================== LAMPS ============================\n");
        printw("Fuel -> %s\n", systemStatus.lamp.fuel == 0 ? "green" : "red");
        printw("Engine Pressure -> %s\n", systemStatus.lamp.enginePressure == 0 ? "green" : "red");
        printw("Engine Temperature -> %s\n", systemStatus.lamp.engineTemperature == 0 ? "green" : "red");
        printw("Smoke Detector 1 -> %s\n", systemStatus.lamp.smokeDetector1 == 0 ? "green" : "red");
        printw("Smoke Detector 2 -> %s\n", systemStatus.lamp.smokeDetector2 == 0 ? "green" : "red");
        printw("=========================== WARNINGS =========================\n");
        // TODO: print warnings

        printw("=========================== READINGS ==========================\n");
        // TODO: print readings
        printw("=============================================================\n");
        printw("Select OPTION : ACK Warning (Y) , IGNORE Warning  (N) ,  REQUEST Reading  (R) ,\n");
        printw("Quit (K) , SIMULATE Smoke1  (Z) , SIMULATE Smoke2  (X) , CLEAR Readings (C)\n");
        printw("============================================================\n\n\n");
        printw("============================================================\n");
        printw("Select READING: Fuel (F) , Pressure  (P) , Temperature (T), Smoke1 (Z)\n");
        printw("============================================================\n");

        refresh();

        sleep(0.01);
    }
    refresh();
}