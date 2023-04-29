#ifndef YARDS_H
#define YARDS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double yards_to_kilometers(double yards);
double yards_to_meters(double yards);
double yards_to_centimeters(double yards);
double yards_to_millimeters(double yards);
double yards_to_miles(double yards);
double yards_to_feet(double yards);
double yards_to_inches(double yards);
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO KILOMETERS
double yards_to_kilometers(double yards) {
    return yards / 1094;
}
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO METERS
double yards_to_meters(double yards) {
    return yards / 1.094;
}
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO CENTIMETERS
double yards_to_centimeters(double yards) {
    return yards * 91.44;
}
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO MILLIMETERS
double yards_to_millimeters(double yards) {
    return yards * 914.4;
}
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO MILES
double yards_to_miles(double yards) {
    return yards / 1760;
}
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO FEET
double yards_to_feet(double yards) {
    return yards * 3;
}
// DEFINED FUNCTION FOR CONVERSION OF YARDS TO INCHES
double yards_to_inches(double yards) {
    return yards * 36;
}
#endif
