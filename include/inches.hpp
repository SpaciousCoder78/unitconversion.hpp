#ifndef INCHES_H
#define INCHES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double inches_to_kilometers(double inches);
double inches_to_meters(double inches);
double inches_to_centimeters(double inches);
double inches_to_millimeters(double inches);
double inches_to_miles(double inches);
double inches_to_yards(double inches);
double inches_to_feet(double inches);
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO KILOMETERS
double inches_to_kilometers(double inches) {
    return inches / 39370;
}
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO METERS
double inches_to_meters(double inches) {
    return inches / 39.37;
}
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO CENTIMETERS
double inches_to_centimemters(double inches) {
    return inches * 2.54;
}
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO MILLIMETERS
double inches_to_millimeters(double inches) {
    return inches * 25.4;
}
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO MILES
double inches_to_miles(double inches) {
    return inches / 63360;
}
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO YARDS
double inches_to_yards(double inches) {
    return inches / 36;
}
// DEFINED FUNCTION FOR CONVERSION OF INCHES TO FEET
double inches_to_feet(double inches) {
    return inches / 12;
}
#endif
