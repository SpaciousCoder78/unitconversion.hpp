#ifndef KMPH_H
#define KMPH_H
// FUNCTION DECLARATIONS FOR CONVERSIONS
/*TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS
KMPH = KILOMETERS PER HOUR*/
double kmph_to_mps(double kmph); // MPS = METERS PER SECOND
double kmph_to_mph(double kmph); // MPH = MILES PER HOUR
double kmph_to_knots(double kmph); 
double kmph_to_fps(double kmph); // FPS = FEET PER SECOND
/*DEFINED FUNCTION FOR CONVERSION OF KILOMETERS PER HOUR
TO METERS PER SECOND*/
double kmph_to_mps(double kmph) {
    return kmph / 3.6;
}
/*DEFINED FUNCTION FOR CONVERSION OF KILOMETERS PER HOUR 
TO MILES PER HOUR*/
double kmph_to_mph(double kmph) {
    return kmph / 1.609;
}
/*DEFINED FUNCTION FOR CONVERSION OF KILOMETERS PER HOUR
TO KNOTS*/
double kmph_to_knots(double kmph) {
    return kmph / 1.852;
}
/*DEFINED FUNCTION FOR CONVERSION OF KILOMETERS PER HOUR 
TO FEET PER SECOND*/
double kmph_to_fps(double kmph) {
    return kmph / 1.097;
}
#endif
