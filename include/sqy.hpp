#ifndef SQY_H
#define SQY_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS
SQY = SQUARE YARDS*/
double sqy_to_sqkm(double sqy); // SQKM = SQUARE KILOMETERS
double sqy_to_sqm(double sqy); // SQM = SQUARE METERS
double sqy_to_sqmi(double sqy); // SQMI = SQUARE MILES
double sqy_to_sqf(double sqy); // SQF = SQUARE FEET
double sqy_to_hectares(double sqy);
double sqy_to_acres(double sqy);
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE YARDS 
TO SQUARE KILOMETERS*/
double sqy_to_sqkm(double sqy) {
    return sqy / 1195990.0463;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE YARDS 
TO SQUARE METERS*/
double sqy_to_sqm(double sqy) {
    return sqy / 1.196;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE YARDS 
TO SQUARE MILES*/
double sqy_to_sqmi(double sqy) {
    return sqy / 3097602.26;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE YARDS 
TO SQUARE FEET*/
double sqy_to_sqf(double sqy) {
    return sqy * 9;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE YARDS 
TO HECTARES*/
double sqy_to_hectares(double sqy) {
    return sqy / 11960;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE YARDS 
TO ACRES*/
double sqy_to_acres(double sqy) {
    return sqy / 4840;
}
#endif
