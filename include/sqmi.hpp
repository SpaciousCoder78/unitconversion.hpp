#ifndef SQMI_H
#define SQMI_H
// DECLARATION OF FUNCTIONS FOR CONVERSION
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS 
SQMI = SQUARE MILES*/
double sqmi_to_sqkm(double sqmi); // SQKM = SQUARE KILOMETERS
double sqmi_to_sqm(double sqmi); // SQM = SQUARE KILOMETERS
double sqmi_to_sqy(double sqmi); // SQY - SQUARE YARDS
double sqmi_to_sqf(double sqmi); // SQF = SQUARE FEET
double sqmi_to_hectares(double sqmi);
double sqmi_to_acres(double sqmi);
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE MILES
TO SQUARE KILOMETERS*/
double sqmi_to_sqkm(double sqmi) {
    return sqmi * 2.59;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE MILES
TO SQUARE METERS*/
double sqmi_to_sqm(double sqmi) {
    return sqmi * 2589988.10;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE MILES
TO SQUARE YARDS*/
double sqmi_to_sqy(double sqmi) {
    return sqmi * 3097599.999598;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE MILES
TO SQUARE FEET*/
double sqmi_to_sqf(double sqmi) {
    return sqmi * 27878400;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE MILES
TO HECTARES*/
double sqmi_to_hectares(double sqmi) {
    return sqmi * 259;
}
/*DEFINED FUNCTION FOR CONVERSION OF SQUARE MILES
TO ACRES*/
double sqmi_to_acres(double sqmi) {
    return sqmi * 640;
} 
#endif
