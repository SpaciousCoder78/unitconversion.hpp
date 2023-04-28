#ifndef KILOPASCALS_H
#define KILOPASCALS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE LENGTH OF THE FUNCTION NAME, SOME OF THE UNITS
AEE WRITTEN IN SHORT FORMS*/
double kilopascals_to_pascals(double kilopascals);
double kilopascals_to_atm(double kilopascals); // ATM = STANDARD ATMOSPHERE
double kilopascals_to_torrs(double kilopascals);
double kilopascals_to_bars(double kilopascals);
double kilopascals_to_ppsi(double kilopascals); // PPSI = POUNDS PER SQUARE INCH
double kilopascals_to_mmhg(double kilopascals); // MMHG = MILLIMETERS OF MERCURY
double kilopascals_to_inches_of_hg(double kilopascals);
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO PASCALS
double kilopascals_to_pascals(double kilopascals) {
    return kilopascals * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO STANDARD ATMOSPHERE
double kilopascals_to_atm(double kilopascals) {
    return kilopascals / 101.3;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO TORRS
double kilopascals_to_torrs(double kilopascals) {
    return kilopascals * 7.501;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO BARS
double kilopascals_to_bars(double kilopascals) {
    return kilopascals / 100;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO POUNDS PER SQUARE INCH
double kilopascals_to_ppsi(double kilopascals) {
    return kilopascals / 6.895;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO MILLIMETERS OF MERCURY
double kilopascals_to_mmhg(double kilopascals) {
    return kilopascals * 7.501;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOPASCALS TO INCHES OF MERCURY
double kilopascals_to_inches_of_hg(double kilopascals) {
    return kilopascals / 3.386;
}
#endif
