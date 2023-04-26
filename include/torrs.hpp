#ifndef TORRS_H
#define TORRS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORM*/
double torrs_to_pascals(double torrs);
double torrs_to_kilopascals(double torrs);
double torrs_to_atm(double torrs); // ATM = STANDARD ATMOSPHERE
double torrs_to_bars(double torrs);
double torrs_to_ppsi(double torrs); // PPSI = POUNDS PER SQUARE INCH
double torrs_to_mmhg(double torrs); // MMHG = MILLIMETERS OF MERCURY
double torrs_to_inches_of_hg(double torrs);
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO PASCALS
double torrs_to_pascals(double torrs) {
    return torrs * 133.322;
}
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO KILOPASCALS
double torrs_to_kilopascals(double torrs) {
    return torrs / 7.501;
}
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO STANDARD ATMOSPHERE
double torrs_to_atm(double torrs) {
    return torrs / 760;
}
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO BARS
double torrs_to_bars(double torrs) {
    return torrs / 750.1;
}
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO POUNDS PER SQUARE INCH
double torrs_to_ppsi(double torrs) {
    return torrs / 51.715;
}
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO MILLIMETERS OF MERCURY
double torrs_to_mmhg(double torrs) {
    return torrs * 1;
}
// DEFINED FUNCTION FOR CONVERSION OF TORRS TO INCHES OF MERCURY
double torrs_to_inches_of_hg(double torrs) {
    return torrs / 25.4;
}
#endif
