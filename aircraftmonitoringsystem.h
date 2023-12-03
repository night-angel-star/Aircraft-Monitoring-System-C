
#define INITIAL_FUEL_LEVEL 100
#define INITIAL_ENGINE_PRESSURE 50
#define INITIAL_ENGINE_TEMPERATURE 5000

typedef struct
{
    float fuelLevel;
    float enginePressure;
    float engineTemperature;
} Dial;

typedef struct
{
    int fuel;
    int enginePressure;
    int engineTemperature;
    int smokeDetector1;
    int smokeDetector2;

} Lamp;

typedef struct
{
    Lamp lamp;
    Dial dial;

} Status;

void initSystemStatusValue(Status s)
{
    s.lamp.fuel = 0;
    s.lamp.enginePressure = 0;
    s.lamp.engineTemperature = 0;
    s.lamp.smokeDetector1 = 0;
    s.lamp.smokeDetector2 = 0;

    s.dial.fuelLevel = INITIAL_FUEL_LEVEL;
    s.dial.enginePressure = INITIAL_ENGINE_PRESSURE;
    s.dial.engineTemperature = INITIAL_ENGINE_TEMPERATURE;
}

void updateValue(Status s)
{
}