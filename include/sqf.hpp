#ifndef SQF_H
#define SQF_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS
SQF = SQUARE FEET*/
double sqf_to_sqkm(double sqf); // SQKM = SQUARE KILOMETERS
double sqf_to_sqm(double sqf); // SQM = SQUARE METERS
double sqf_to_sqmi(double sqf); // SQMI = SQUARE MILES
double sqf_to_sqy(double sqf); // SQY = SQUARE YARDS
double sqf_to_hectares(double sqf);
double sqf_to_acres(double sqf);
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE FEET 
TO SQUARE KILOMETERS*/
double sqf_to_sqkm(double sqf) {
    return sqf / 10763910.41671;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE FEET 
TO SQUARE METERS*/
double sqf_to_sqm(double sqf) {
    return sqf / 10.764;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE FEET 
TO SQUARE MILES*/
double sqf_to_sqmi(double sqf) {
    return sqf / 27878400;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE FEET 
TO SQUARE YARDS*/
double sqf_to_sqy(double sqf) {
    return sqf / 9;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE FEET 
TO HECTARES*/
double sqf_to_hectares(double sqf) {
    return sqf / 107600;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE FEET 
TO ACRES*/
double sqf_to_acres(double sqf) {
    return sqf / 43560;
}
#endif
