#ifndef BARS_H
#define BARS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS*/
double bars_to_pascals(double bars);
double bars_to_kilopascals(double bars);
double bars_to_atm(double bars); // ATM = STANDARD ATMOSPHERE
double bars_to_torrs(double bars);
double bars_to_ppsi(double bars); // PPSI = POUNDS PER SQUARE INCH
double bars_to_mmhg(double bars); // MMHG = MILLIMETERS OF MERCURY
double bars_to_incesh_of_hg(double bars);
// DEFINED FUNCTION FOR CONVERSION OF BARS TO PASCALS
double bars_to_pascals(double bars) {
    return bars * 100000;
}
// DEFINED FUNCTION FOR CONVERSION OF BARS TO KILOPASCALS
double bars_to_kilopascals(double bars) {
    return bars * 100;
}
// DEFINED FUNCTION FOR CONVERSION OF BARS TO STANDARD ATMOSPHERE
double bars_to_atm(double bars) {
    return bars / 1.013;
}
// DEFINED FUNCTION FOR CONVERSION OF BARS TO TORRS
double bars_to_torrs(double bars) {
    return bars * 750.062;
}
// DEFINED FUNCTION FOR CONVERSION OF BARS TO POUNDS PER SQUARE INCH
double bars_to_ppsi(double bars) {
    return bars * 14.5038;
}
// DEFINED FUNCTION FOR CONVERSION OF BARS TO MILLIMETERS OF MERCURY
double bars_to_mmhg(double bars) {
    return bars * 750.062;
}
// DEFINED FUNCTION FOR CONVERSION OF BARS TO INCHES OF MERCURY
double bars_to_inches_of_hg(double bars) {
    return bars * 29.53;
}
#endif
