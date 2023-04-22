#ifndef CELSIUS_H
#define CELSIUS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double celsius_to_fahrenheit(double celsius);
double celsius_to_kelvin(double celsius);
// DEFINED FUNCTION FOR CONVERSION OF CELSIUS TO FAHRENHEIT
double celsius_to_fahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}
// DEFINED FUNCTION FOR CONVERSION OF CELSIUS TO KELVIN
double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}
#endif
