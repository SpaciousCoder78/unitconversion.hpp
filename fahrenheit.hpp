#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double fahrenheit_to_celsius(double fahrenheit);
double fahrenheit_to_kelvin(double fahrenheit);
// DEFINED FUNCTION FOR CONVERSION OF FAHRENHEIT TO CELSIUS
double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 0.556;
}
// DEFINED FUNCTION FOR CONVERSION OF FAHRENHEIT TO KELVIN
double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32) * 0.556 + 273.15;
}
#endif
