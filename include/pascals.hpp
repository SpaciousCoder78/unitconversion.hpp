#ifndef PASCALS_H
#define PASCALS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
/*TO REDUCE LENGTH OF THE FUNCTION NAME, SOME OF THE UNITS 
ARE WRITTEN IN SHORT FORMS*/
double pascals_to_kilopascals(double pascals); 
double pascals_to_atm(double pascals); // ATM = STANDARD ATMOSPHERE
double pascals_to_torrs(double pascals);
double pascals_to_bars(double pascals);
double pascals_to_ppsi(double pascals); // PPSI = POUNDS PER SQUARE INCH
double pascals_to_mmhg(double pascals); // MMHG = MILLIMETERS OF MERCURY
double pascals_to_inches_of_hg(double pascals);
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO KILOPASCALS
double pascals_to_kilopascals(double pascals) {
    return pascals / 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO STANDARD ATMOSPHERE
double pascals_to_atm(double pascals) {
    return pascals / 101300;
}
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO TORRS
double pascals_to_torrs(double pascals) {
    return pascals / 133.3;
}
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO BARS
double pascals_to_bars(double pascals) {
    return pascals / 100000;
}
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO POUNDS PER SQUARE INCH
double pascals_to_ppsi(double pascals) {
    return pascals / 6895;
}
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO MILLIMETERS OF MERCURY
double pascals_to_mmhg(double pascals) {
    return pascals / 133.3;
}
// DEFINED FUNCTION FOR CONVERSION OF PASCALS TO INCHES OF MERCURY
double pascals_to_inches_of_hg(double pascals) {
    return pascals / 3386;
}
#endif
