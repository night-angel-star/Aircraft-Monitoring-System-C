
#define INITIAL_FUEL_LEVEL 100
#define INITIAL_ENGINE_PRESSURE 0
#define INITIAL_ENGINE_TEMPERATURE 0
#define MAX_ENGINE_PRESSURE 100
#define MAX_ENGINE_TEMPERATURE 100


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
    _Bool fuel;
    _Bool enginePressure;
    _Bool engineTemperature;
    _Bool smokeDetector1;
    _Bool smokeDetector2;
} Reading;

typedef struct
{
    Lamp lamp;
    Dial dial;
    int SmokeSensorErr;
    char dateTime[30];
    float enginePressureFlucture;
    _Bool warnFlag;
    int readingFlag; // 0 -> origin, 1->
} Status;


typedef struct
{
    _Bool simulateSmoke1;
    _Bool simulateSmoke2;   
    _Bool simulateOverPressure;
    _Bool simulateOverTemperature;
} SimulateFlags;

void initSystemStatusValue(Status s, SimulateFlags sf)
{
    s.lamp.fuel = 0;
    s.lamp.enginePressure = 0;
    s.lamp.engineTemperature = 0;
    s.lamp.smokeDetector1 = 0;
    s.lamp.smokeDetector2 = 0;

    s.dial.fuelLevel = INITIAL_FUEL_LEVEL;
    s.dial.enginePressure = INITIAL_ENGINE_PRESSURE;
    s.dial.engineTemperature = INITIAL_ENGINE_TEMPERATURE;

    sf.simulateSmoke1=0;
    sf.simulateSmoke2=0;
    sf.simulateOverPressure=0;
    sf.simulateOverTemperature=0;
}
