#ifndef ACRES_H
#define ACRES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORM*/
double acres_to_sqkm(double acres); // SQKM = SQUARE KILOMETERS
double acres_to_sqm(double acres); // SQM = SQUARE METERS
double acres_to_sqmi(double acres); // SQMI = SQUARE MILES
double acres_to_sqy(double acres); // SQY = SQUARE YARDS
double acres_to_sqf(double acres); // SQF = SQUARE FEET
double acres_to_hectares(double acres);
/*DEFINED FUNCTION FOR CONVERSION OF ACRES TO 
SQUARE KILOMETERS*/
double acres_to_sqkm(double acres) {
    return acres / 247.1;    
}
/*DEFINED FUNCTION FOR CONVERSION OF ACRES TO 
SQUARE METERS*/
double acres_to_sqm(double acres) {
    return acres * 4047;
}
/*DEFINED FUNCTION FOR CONVERSION OF ACRES TO 
SQUARE MILES*/ 
double acres_to_sqmi(double acres) {
    return acres / 640;
}
/*DEFINED FUNCTION FOR CONVERSION OF ACRES TO 
SQUARE YARDS*/
double acres_to_sqy(double acres) {
    return acres * 4840;
}
/*DEFINED FUNCTION FOR CONVERSION OF ACRES TO 
SQUARE FEET*/
double acres_to_sqf(double acres) {
    return acres * 43560;
}
/*DEFINED FUNCTION FOR CONVERSION OF ACRES TO 
HECTARES*/
double acres_to_hectares(double acres) {
    return acres / 2.471;
}
#endif
