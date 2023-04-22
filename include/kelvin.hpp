#ifndef KELVIN_H
#define KELVIN_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double kelvin_to_celsius(double kelvin);
double kelvin_to_fahrenheit(double kelvin);
// DEFINED FUNCTION FOR CONVERSION OF KELVIN TO CELSIUS
double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}
// DEFINED FUNCTION FOR CONVERSION OF KELVIN TO FAHRENHEIT
double kelvin_to_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 1.8 + 32;
}
#endif
