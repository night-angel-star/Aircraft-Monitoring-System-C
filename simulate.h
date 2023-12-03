#include <math.h>

float simulateFuelLevel(float fuel)
{
    if (fuel < 0)
    {
        return 0;
    }
    else
    {
        return fuel - 0.001;
    }
}

void *simulateThreadExecute()
{
    float a;
    while (1)
    {
        systemStatus.dial.fuelLevel = simulateFuelLevel(systemStatus.dial.fuelLevel);
        systemStatus.dial.enginePressure = simulateFlags.simulateOverPressure == 1 ? MAX_ENGINE_PRESSURE + 1 : rand() / (double)RAND_MAX * MAX_ENGINE_PRESSURE;
        systemStatus.dial.engineTemperature = simulateFlags.simulateOverTemperature == 1 ? MAX_ENGINE_TEMPERATURE + 1 : rand() / (double)RAND_MAX * MAX_ENGINE_TEMPERATURE;
        systemStatus.lamp.smokeDetector1 = simulateFlags.simulateSmoke1;
        systemStatus.lamp.smokeDetector2 = simulateFlags.simulateSmoke2;

        sleep(0.3);
    }
}

_Bool simulateExecution(int msecs, int timeout_chance)
{
    int random_number = rand() % 100 + 1; // 1 to 100
    sleep(((float)msecs) / ((float)1000));
    return random_number > timeout_chance;
}