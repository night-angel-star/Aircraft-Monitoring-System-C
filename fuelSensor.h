#include <stdlib.h>

void *fuelSensorThreadExecute(void *vargp)
{
    int failureCount = 0;
    _Bool success = 0;
    while (1)
    {
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
            if (systemStatus.dial.fuelLevel < MIN_FUEL_LEVEL)
            {
                systemStatus.lamp.fuel = 1;
            }
            else
            {
                systemStatus.lamp.fuel = 0;
            }
        }
        sleep(1);
    }
}