#include <stdlib.h>

void *fuelSensorThreadExecute(void *vargp)
{
    int failureCount = 0;
    _Bool success = 0;
    while (1)
    {
        float prevFuelLevel = 100;
        success = simulateExecution(FUEL_SENSOR_EXECUTION, FUEL_FAILURE_CHANCE);
        if (!success)
        {
            if (failureCount > 2)
            {
                systemStatus.lamp.fuel = 1;
            }
            else
            {
                failureCount++;
            }
        }
        else
        {
            failureCount = 0;
            fuelLevelSpeed = systemStatus.dial.fuelLevel - prevFuelLevel;
            if (systemStatus.dial.fuelLevel < MIN_FUEL_LEVEL)
            {
                systemStatus.lamp.fuel = 1;
            }
            else
            {
                systemStatus.lamp.fuel = 0;
            }
        }
        prevFuelLevel = systemStatus.dial.fuelLevel;
        sleep(1);
    }
}