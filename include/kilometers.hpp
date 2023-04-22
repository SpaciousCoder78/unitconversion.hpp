#ifndef KILOMETERS_H
#define KILOMETERS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double kilometers_to_meters(double kilometers);
double kilometers_to_centimeters(double kilometers);
double kilometers_to_millimeters(double kilometers);
double kilometers_to_miles(double kilometers);
double kilometers_to_yards(double kilometers);
double kilometers_to_feet(double kilometers);
double kilometers_to_inches(double kilometers);
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO METERS
double kilometers_to_meters(double kilometers) { 
    return kilometers * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO CENTIMETERS
double kilometers_to_centimeters(double kilometers) { 
    return kilometers * 100000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO MILLIMETERS
double kilometers_to_millimeters(double kilometers) {
    return kilometers * 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO MILES
double kilometers_to_miles(double kilometers) {
    return kilometers / 1.609;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO YARDS
double kilometers_to_yards(double kilometers) {
    return kilometers * 1093.61;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO FEET
double kilometers_to_feet(double kilometers) {
    return kilometers * 3280.84;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOMETERS TO INCHES
double kilometers_to_inches(double kilometers) {
    return kilometers * 39370.1;
}
#endif
