
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

typedef struct Reading
{
    _Bool fuel;
    _Bool enginePressure;
    _Bool engineTemperature;
    _Bool smokeDetector1;
    _Bool smokeDetector2;
};

typedef struct
{
    Lamp lamp;
    Dial dial;
    int SmokeSensorErr;
    char dateTime[30];
    float enginePresureFluct;
    _Bool warnFlag;
    int readingFlag; // 0 -> origin, 1->
    _Bool simulSmoke1;
    _Bool simulSmoke2;
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
