#include <stdlib.h>

void *enginePressureThreadExecute(void *vargp)
{
    int failureCount = 0;
    _Bool success = 0;
    while (1)
    {
        float prevEnginePressure = 0;
        success = simulateExecution(ENGINE_PRESSURE_SENSOR_EXECUTION, ENGINE_PRESSURE_FAILURE_CHANCE);

        if (!success)
        {
            if (failureCount > 2)
            {
                systemStatus.lamp.enginePressure = 1;
            }
            else
            {
                failureCount++;
            }
        }
        else
        {
            failureCount = 0;
            enginePressureSpeed = systemStatus.dial.enginePressure - prevEnginePressure;
            if (systemStatus.dial.enginePressure > MAX_ENGINE_PRESSURE)
            {
                systemStatus.lamp.enginePressure = 1;
            }
            else
            {
                systemStatus.lamp.enginePressure = 0;
            }
        }
        prevEnginePressure = systemStatus.dial.enginePressure;
        sleep(1);
    }
}