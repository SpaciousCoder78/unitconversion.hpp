#ifndef INCHESOFHG_H
#define INCHESOFHG_H
/*DECLARATION OF FUNCTIONS FOR CONVERSIONS
TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS*/
double inches_of_hg_to_pascals(double hg);
double inches_of_hg_to_kilopascals(double hg);
double inches_of_hg_to_atm(double hg); // ATM = STANDARD ATMOSPHERE
double inches_of_hg_to_torrs(double hg);
double inches_of_hg_to_bars(double hg);
double inches_of_hg_to_ppsi(double hg); // PPSI = POUNDS PER SQUARE INCH
double inches_of_hg_to_mmhg(double hg); // MMHG = MILLIMETERS OF MERCURY
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
PASCALS*/
double inches_of_hg_to_pascals(double hg) {
    return hg * 3386.39;
}
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
KILOPASCALS*/
double inches_of_hg_to_kilopascals(double hg) {
    return hg * 3.38639;
}
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
STANDARD ATMOSPHERE*/
double inches_of_hg_to_atm(double hg) {
    return hg / 29.921;
}
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
TORRS*/
double inches_of_hg_to_torrs(double hg) {
    return hg * 25.4;
}
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
BARS*/
double inches_of_hg_to_bars(double hg) {
    return hg / 29.53;
}
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
POUNDS PER SQUARE INCH*/
double inches_of_hg_to_ppsi(double hg) {
    return hg / 2.036;
}
/*DEFINED FUNCTION FOR CONVERSION OF INCHES OF MERCURY TO 
MILLIMETERS OF MERCURY*/
double inches_of_hg_to_mmhg(double hg) {
    return hg * 25.4;
}
#endif
