#ifndef MILES_H
#define MILES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double miles_to_kilometers(double miles);
double miles_to_meters(double miles);
double miles_to_centimeters(double miles);
double miles_to_millimeters(double miles);
double miles_to_yards(double miles);
double miles_to_feet(double miles);
double miles_to_inches(double miles);
// DEFINED FUNCTION FOR CONVERSION OF MILES TO KILOMETERS
double miles_to_kilometers(double miles) {
    return miles * 1.609;
}
// DEFINED FUNCTION FOR CONVERSION OF MILES TO METERS
double miles_to_meters(double miles) {
    return miles * 1609.34;
}
// DEFINED FUNCTION FOR CONVERSION OF MILES TO CENTIMETERS
double miles_to_centimeters(double miles) {
    return miles * 160934;
}
// DEFINED FUNCTION FOR CONVERSION OF MILES TO MILLIMETERS
double miles_to_millimeters(double miles) {
    return miles * 1609344;
}
// DEFINED FUNCTION FOR CONVERSION OF MILES TO YARDS
double miles_to_yards(double miles) {
    return miles * 1760;
}
// DEFINED FUNCTION FOR CONVERSION OF MILES TO FEET
double miles_to_feet(double miles) {
    return miles * 5280;
}
// DEFINED FUNCTION FOR CONVERSION OF MILES TO INCHES
double miles_to_inches(double miles) {
    return miles * 63360;
}
#endif
