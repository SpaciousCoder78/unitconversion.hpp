#ifndef ATM_H
#define ATM_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS 
ARE WRITTEN IN SHORT FORMS
ATM = STANDARD ATMOSPHERE*/
double atm_to_pascals(double atm);
double atm_to_kilopascals(double atm);
double atm_to_torrs(double atm);
double atm_to_bars(double atm);
double atm_to_ppsi(double atm); // PPSI = POUNDS PER SQUARE INCH
double atm_to_mmhg(double atm); // MMHG = MILLIMETERS OF MERCURY
double atm_to_inches_of_hg(double atm);
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO PASCALS
double atm_to_pascals(double atm) {
    return atm * 101300;
}
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO KILOPASCALS
double atm_to_kilopascals(double atm) {
    return atm * 101.3;
}
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO TORRS
double atm_to_torrs(double atm) {
    return atm * 760;
}
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO BARS
double atm_to_bars(double atm) {
    return atm * 1.013;
}
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO POUNDS PER SQUARE INCH
double atm_to_ppsi(double atm) {
    return atm * 14.6959;
}
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO MILLIMETERS OF MERCURY
double atm_to_mmhg(double atm) {
    return atm * 760;
}
// DEFINED FUNCTION FOR CONVERSION OF STANDARD ATMOSPHERE TO INCHES OF MERCURY
double atm_to_inches_of_hg(double atm) {
    return atm * 29.9213;
}
#endif
