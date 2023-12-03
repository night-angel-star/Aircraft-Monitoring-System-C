#include <stdlib.h>

void *engineTemperatureThreadExecute(void *vargp)
{
    int failureCount = 0;
    _Bool success = 0;
    while (1)
    {
        float prevEngineTemperature = 0;
        success = simulateExecution(ENGINE_TEMPERATURE_SENSOR_EXECUTION, ENGINE_TEMPERATURE_FAILURE_CHANCE);
        if (!success)
        {
            if (failureCount > 2)
            {
                systemStatus.lamp.engineTemperature = 1;
            }
            else
            {
                failureCount++;
            }
        }
        else
        {
            failureCount = 0;
            engineTemperatureSpeed = systemStatus.dial.engineTemperature - prevEngineTemperature;
            if (systemStatus.dial.engineTemperature > MAX_ENGINE_TEMPERATURE)
            {
                systemStatus.lamp.engineTemperature = 1;
            }
            else
            {
                systemStatus.lamp.engineTemperature = 0;
            }
        }
        prevEngineTemperature = systemStatus.dial.engineTemperature;
        sleep(1);
    }
}