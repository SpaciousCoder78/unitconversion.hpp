#ifndef FPS_H
#define FPS_H
/*FUNCTION DECLARATIONS FOR CONVERSIONS
TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORM
FPS = FEET PER SECOND*/
double fps_to_kmph(double fps); // KMPH = KILOMETERS PER HOUR
double fps_to_mps(double fps); // MPS = METERS PER SECOND
double fps_to_mph(double fps); // MPH = MILES PER HOUR
double fps_to_knots(double fps);
/*DEFINED FUNCTION FOR CONVERSION OF FEET PER SECOND
TO KILOMETERS PER HOUR*/
double fps_to_kmph(double fps) {
    return fps * 1.09728;
}
/*DEFINED FUNCTION FOR CONVERSION OF FEET PER SECOND 
TO METERS PER SECOND*/
double fps_to_mps(double fps) {
    return fps / 3.281;
}
/*DEFINED FUNCTION FOR CONVERSION OF FEET PER SECOND 
TO MILES PER HOUR*/
double fps_to_mph(double fps) {
    return fps / 1.467;
}
/*DEFINED FUNCTION FOR CONVERSION OF FEET PER SECOND
TO KNOTS*/
double fps_to_knots(double fps) {
    return fps / 1.688;
}
#endif
