#ifndef METERS_H
#define METERS_h
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double meters_to_kilometers(double meters);
double meters_to_centimeters(double meters);
double meters_to_millimeters(double meters);
double meters_to_miles(double meters);
double meters_to_yards(double meters);
double meters_to_feet(double meters);
double meters_to_inches(double meters);
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO KILOMETERS
double meters_to_kilometers(double meters) {
    return meters / 1000;
}
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO CENTIMETERS
double meters_to_centimeters(double meters) {
    return meters * 100;
}
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO MILLIMETERS
double meters_to_millimeters(double meters) {
    return meters * 1000;
}
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO MILES
double meters_to_miles(double meters) {
    return meters / 1609;
}
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO YARDS
double meters_to_yards(double meters) {
    return meters * 1.09361;
}
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO FEET
double meters_to_feet(double meters) {
    return meters * 3.28084;
}
// DECLARATION OF FUNCTION FOR CONVERSION OF METERS TO INCHES
double meters_to_inches(double meters) {
    return meters * 39.3701;
}
#endif
