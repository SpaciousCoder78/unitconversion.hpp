#ifndef FEET_H
#define FEET_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double feet_to_kilometers(double feet);
double feet_to_meters(double feet);
double feet_to_centimeters(double feet);
double feet_to_millimeters(double feet);
double feet_to_miles(double feet);
double feet_to_yards(double feet);
double feet_to_inches(double feet);
// DEFINED FUNCTION FOR CONVERSION OF FEET TO KILOMETERS
double feet_to_kilometers(double feet) {
    return feet / 3281;
}
// DEFINED FUNCTION FOR CONVERSION OF FEET TO METERS
double feet_to_meters(double feet) {
    return feet / 3.281;
}
// DEFINED FUNCTION FOR CONVERSION OF FEET TO CENTIMETERS
double feet_to_centimeters(double feet) {
    return feet * 30.48;
}
// DEFINED FUNCTION FOR CONVERSION OF FEET TO MILLIMETERS
double feet_to_millimeters(double feet) {
    return feet * 304.8;
}
// DEFINED FUNCTION FOR CONVERSION OF FEET TO MILES
double feet_to_miles(double feet) {
    return feet / 5280;
}
// DEFINED FUNCTION FOR CONVERSION OF FEET TO YARDS
double feet_to_yards(double feet) {
    return feet / 3;
}
// DEFINED FUNCTION FOR CONVERSION OF FEET TO INCHES
double feet_to_inches(double feet) {
    return feet * 12;
}
#endif
