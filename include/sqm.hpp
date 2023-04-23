#ifndef SQM_H
#define SQM_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE 
UNITS ARE WRITTEN IN SHORT FORM
SQM = SQUARE METERS*/
double sqm_to_sqkm(double sqm); // SQKM = SQUARE KILOMETERS
double sqm_to_sqmi(double sqm); // SQMI = SQUARE MILES
double sqm_to_sqy(double sqm); // SQY = SQUARE YARDS
double sqm_to_sqf(double sqm); // SQF = SQUARE FEET
double sqm_to_hectares(double sqm); 
double sqm_to_acres(double sqm);
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE METERS
TO SQUARE KILOMETERS*/
double sqm_to_sqkm(double sqm) {
    return sqm / 1000000;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE METERS
TO SQUARE MILES*/
double sqm_to_sqmi(double sqm) {
    return sqm / 2589988.10;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE METERS
TO SQUARE YARDS*/
double sqm_to_sqy(double sqm) {
    return sqm * 1.196;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE METERS
TO SQUARE FEET*/
double sqm_to_sqf(double sqm) {
    return sqm * 10.7639;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE METERS
TO HECTARES*/
double sqm_to_hectares(double sqm) {
    return sqm / 10000;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE METERS
TO ACRES*/
double sqm_to_acres(double sqm) {
    return sqm / 4047;
}
#endif
