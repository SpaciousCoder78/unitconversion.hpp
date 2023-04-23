#ifndef SQKM_H
#define SQKM_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF THE FUNCTION NAME, SOME OF THE UNITS ARE 
WRITTEN IN SHORT FORM*/
// SQKM = SQUARE KILOMETERS
double sqkm_to_sqm(double sqkm); // SQM = SQUARE METERS
double sqkm_to_sqmi(double sqkm); // SQMI = SQUARE MILES
double sqkm_to_sqy(double sqkm); // SQY = SQUARE YARDS
double sqkm_to_sqf(double sqkm); // SQF = SQUARE FEET
double sqkm_to_hectares(double sqkm); 
double sqkm_to_acres(double sqkm);
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE KILOMETERS
TO SQUARE METERS*/
double sqkm_to_sqm(double sqkm) {
    return sqkm * 1000000;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE KILOMETERS
TO SQUARE MILES*/
double sqkm_to_sqmi(double sqkm) {
    return sqkm / 2.59;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE KILOMETERS
TO SQUARE YARDS*/
double sqkm_to_sqy(double sqkm) {
    return sqkm * 1195990.046301;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE KILOMETERS
TO SQUARE FEET*/
double sqkm_to_sqf(double sqkm) {
    return sqkm * 10763910.41671;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE KILOMETERS
TO HECTARES*/
double sqkm_to_hectares(double sqkm) {
    return sqkm * 100;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE KILOMETERS
TO ACRES*/
double sqkm_to_acres(double sqkm) {
    return sqkm * 247.105;
}
#endif
