





int simulateFuelLevel(int fuel)
{
    return fuel==0?0:fuel-1;
}





void *simulateThreadExecute()
{

    while (1)
    {
        systemStatus.dial.fuelLevel=simulateFuelLevel(systemStatus.dial.fuelLevel);

        systemStatus.dial.enginePressure=simulateFlags.simulateOverPressure==1 ? MAX_ENGINE_PRESSURE + 1:rand() * MAX_ENGINE_PRESSURE;
        systemStatus.dial.engineTemperature=simulateFlags.simulateOverTemperature==1 ? MAX_ENGINE_TEMPERATURE +1 : rand() * MAX_ENGINE_TEMPERATURE;
        systemStatus.lamp.smokeDetector1=simulateFlags.simulateSmoke1;
        systemStatus.lamp.smokeDetector2=simulateFlags.simulateSmoke2;

        sleep(0.3);
    }
    

}