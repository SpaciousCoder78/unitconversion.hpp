#ifndef HECTARES_H
#define HECTARES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS 
ARE WRITTEN IN SHORT FORMS*/
double hectares_to_sqkm(double hectares); // SQKM = SQUARE KILOMETERS
double hectares_to_sqm(double hectares); // SQM = SQUARE METERS
double hectares_to_sqmi(double hectares); // SQUARE MILES
double hectares_to_sqy(double hectares); // SQY = SQUARE YARDS
double hectares_to_sqf(double hectares); // SQF = SQUARE FEET
double hectares_to_acres(double hectares);
/*DEFINED FUNCTION FOR CONVERSION OF HECTARES TO 
SQUARE KILOMETERS*/
double hectares_to_sqkm(double hectares) {
    return hectares / 100;
}
/*DEFINED FUNCTION FOR CONVERSION OF HECTARES TO 
SQUARE METERS*/
double hectares_to_sqm(double hectares) {
    return hectares * 10000;
}
/*DEFINED FUNCTION FOR CONVERSION OF HECTARES TO 
SQUARE MILES*/
double hectares_to_sqmi(double hectares) {
    return hectares / 259;
}
/*DEFINED FUNCTION FOR CONVERSION OF HECTARES TO 
SQUARE YARDS*/
double hectares_to_sqy(double hectares) {
    return hectares * 11960;
}
/*DEFINED FUNCTION FOR CONVERSION OF HECTARES TO 
SQUARE FEET*/
double hectares_to_sqf(double hectares) {
    return hectares * 107369;
}
/*DEFINED FUNCTION FOR CONVERSION OF HECTARES TO 
ACRES*/
double hectares_to_acres(double hectares) {
    return hectares * 2.471;
}
#endif
