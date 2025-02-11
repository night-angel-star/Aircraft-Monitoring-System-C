

//============================================
// Simulation Specifications
//============================================
#define SIMULATION_RATE 250 // milliseconds
#define VARIATION_PERCENTAGE 0.0005
#define MAGNETIC_MEDIUM_RESPONSE_TIME 200 // milliseconds
#define POLLING_PERIOD 1				  // milliseconds
#define DISPLAY_REFRESH_RATE 1			  // milliseconds
#define NUM_OF_READINGS 10
// #define FREQUENT_FAILURES //1% chance to set danger values
#define INTERRUPT_EXECUTION_TIME 5000 // milliseconds

//============================================
// Fuel Specifications
//============================================
#define FUEL_UNITS "Percentage"
#define FUEL_INITIAL_VALUE 100 // Starting fuel: 100%
#define FUEL_LOWER_LIMIT 25
#define FUEL_UPPER_LIMIT 50
#define FUEL_DANGER_LIMIT 10
#define FUEL_FAILURE_CHANCE 10
#define FUEL_SENSOR_EXECUTION 300 // milliseconds
#define FUEL_CONSUMPTION_RATE 0.001
#define FUEL_TIME_MULTIPLIER 3600
#define FUEL_TIME_UNIT "hr"

//============================================
// Engine Pressure Specifications
//============================================
#define ENGINE_PRESSURE_UNITS "Percentage (EPR)"
#define ENGINE_PRESSURE_INITIAL_VALUE 50 // Operating EPR: 50%
#define ENGINE_PRESSURE_UPPER_LIMIT 95
#define ENGINE_PRESSURE_LOWER_LIMIT 25
#define ENGINE_PRESSURE_DANGER_LIMIT 10
#define ENGINE_PRESSURE_FAILURE_CHANCE 10
#define ENGINE_PRESSURE_SENSOR_EXECUTION 200 // milliseconds
#define ENGINE_PRESSURE_TIME_MULTIPLIER 1
#define ENGINE_PRESSURE_TIME_UNIT "sec"

//============================================
// Engine Temperature Specifications
//============================================
#define ENGINE_TEMPERATURE_UNITS "Celsius"
#define ENGINE_TEMPERATURE_INITIAL_VALUE 900 // Operating temp: 900.0 Celsius
#define ENGINE_TEMPERATURE_UPPER_LIMIT 1150
#define ENGINE_TEMPERATURE_LOWER_LIMIT 650
#define ENGINE_TEMPERATURE_DANGER_LIMIT 1500
#define ENGINE_TEMPERATURE_FAILURE_CHANCE 10
#define ENGINE_TEMPERATURE_SENSOR_EXECUTION 100
#define ENGINE_TEMPERATURE_TIME_MULTIPLIER 60
#define ENGINE_TEMPERATURE_TIME_UNIT "min"

//============================================
// Smoke Specifications
//============================================
#define SMOKE_INITIAL_VALUE 0.0
#define SMOKE_UPPER_LIMIT 1.0 // Boolean
#define SMOKE_LOWER_LIMIT NOT_DEFINED
#define SMOKE_DANGER_LIMIT SMOKE_UPPER_LIMIT
#define SMOKE_FAILURE_CHANCE 5
#define SMOKE_SENSOR_EXECUTION 100