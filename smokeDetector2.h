
void *smokeDetector2Execute(void *vargp)
{

    int failureCount = 0;
    _Bool success = 0;
    while (1)
    {
        success = simulateExecution(SMOKE_SENSOR_EXECUTION, SMOKE_FAILURE_CHANCE);
        if (!success)
        {
            if (failureCount > 2)
            {
                systemStatus.lamp.smokeDetector2 = 1;
            }
            else
            {
                failureCount++;
            }
        }
        else
        {
            failureCount = 0;
            if (systemStatus.smoking2 == 1)
            {
                systemStatus.lamp.smokeDetector2 = 1;
            }
            else
            {
                systemStatus.lamp.smokeDetector2 = 0;
            }
        }
        sleep(1);
    }
}