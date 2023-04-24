#ifndef PPSI_H
#define PPSI_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/* TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS 
ARE WRITTEN IN SHORT FORMS 
PPSI = POUNDS PER SQUARE INCH*/
double ppsi_to_pascals(double ppsi);
double ppsi_to_kilopascals(double ppsi);
double ppsi_to_atm(double ppsi); // ATM = STANDARD ATMOSPHERE
double ppsi_to_torrs(double ppsi);
double ppsi_to_bars(double ppsi);
double ppsi_to_mmhg(double ppsi); // MMHG = MILLIMETERS OF MERCURY
double ppsi_to_inches_of_hg(double ppsi); 
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO PASCALS*/
double ppsi_to_pascals(double ppsi) {
    return ppsi * 6894.76;
}
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO KILOPASCALS*/
double ppsi_to_kilopascals(double ppsi) {
    return ppsi * 6.89476;
}
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO STANDARD ATMOSPHERE*/
double ppsi_to_atm(double ppsi) {
    return ppsi / 14.696;
}
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO TORRS*/
double ppsi_to_torrs(double ppsi) {
    return ppsi * 51.7149;
}
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO BARS*/
double ppsi_to_bars(double ppsi) {
    return ppsi / 14.504;
}
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO MILLIMETERS OF MERCURY*/
double ppsi_to_mmhg(double ppsi) {
    return ppsi * 51.7149;
}
/*DEFINED FUNCTION FOR CONVERSION OF POUNDS PER SQUARE INCH 
TO INCHES OF MERCURY*/ 
double ppsi_to_inches_of_hg(double ppsi) {
    return ppsi * 2.03602;
}
#endif
