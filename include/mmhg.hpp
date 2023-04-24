#ifndef MMHG_H
#define MMHG_H
/*DECLARATION OF FUNCTIONS FOR CONVERSIONS
TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS 
ARE WRITTEN IN SHORT FORMS
MMHG = MILLIMETERS OF MERCURY*/
double mmhg_to_pascals(double mmhg);
double mmhg_to_kilopascals(double mmhg);
double mmhg_to_atm(double mmhg); // ATM = STANDARD ATMOSPHERE
double mmhg_to_torrs(double mmhg);
double mmhg_to_bars(double mmhg);
double mmhg_to_ppsi(double mmhg); // PPSI = POUNDS PER SQUARE INCH
double mmhg_to_inches_of_hg(double mmhg);
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO PASCALS*/
double mmhg_to_pascals(double mmhg) {
    return mmhg * 133.322;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO KILOPASCALS*/
double mmhg_to_kilopascals(double mmhg) {
    return mmhg / 7.501;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO STANDARD ATMOSPHERE*/
double mmhg_to_atm(double mmhg) {
    return mmhg / 760;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO TORRS*/
double mmhg_to_torrs(double mmhg) {
    return mmhg * 1;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO BARS*/
double mmhg_to_bars(double mmhg) {
    return mmhg / 750.1;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO POUNDS PER SQUARE INCH*/
double mmhg_to_ppsi(double mmhg) {
    return mmhg / 51.715;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS OF MERCURY 
TO INCHES OF MERCURY*/
double mmhg_to_inches_of_hg(double mmhg) {
    return mmhg / 25.4;
}
#endif
