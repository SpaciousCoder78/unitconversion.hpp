#ifdef MPH_H
#define MPH_H
/*FUNCTION DECLARATIONS FOR CONVERSIONS
TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS
MPH = MILES PER HOUR*/
double mph_to_kmph(double mph); // KMPH = KILOMETERS PER HOUR
double mph_to_mps(double mph); // MPS = METERS PER SECOND
double mph_to_knots(double mph); 
double mph_to_fps(double mph); // FPS = FEET PER SECOND
/*DEFINED FUNCTION FOR CONVERSION OF MILES PER HOUR
TO KILOMETERS PER HOUR*/
double mph_to_kmph(double mph) {
    return mph * 1.60934;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILES PER HOUR
TO METERS PER SECOND*/
double mph_to_mps(double mph) {
    return mph / 2.237;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILES PER HOUR
TO KNOTS*/
double mph_to_knots(double mph) {
    return mph / 1.151;
}
/*DEFINED FUNCTION FOR CONVERSION OF MILES PER HOUR
TO FEET PER SECOND*/
double mph_to_fps(double mph) {
    return mph * 1.46667;
}
#endif
