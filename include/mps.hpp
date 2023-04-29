#ifdef MPS_H
#define MPS_H
/*FUNCTION DECLARATIONS FOR CONVERSIONS
TO REDUCE THE LENGTH OF FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORMS
MPS = METERS PER SECOND*/
double mps_to_kmph(double mps); // KMPH = KILOMETERS PER HOUR
double mps_to_mph(double mps); // MPH = MILES PER HOUR
double mps_to_knots(double mps);
double mps_to_fps(double mps); // FPS = FEET PER SECOND
/*DEFINED FUNCTION FOR CONVERSION OF METERS PER SECOND
TO KILOMETERS PER HOUR*/
double mps_to_kmph(double mps) {
    return mps * 3.6;
}
/*DEFINED FUNCTION FOR CONVERSION OF METERS PER SECOND
TO MILES PER HOUR*/
double mps_to_mph(double mps) {
    return mps * 2.23694;
}
/*DEFINED FUNCTION FOR CONVERSION OF METERS PER SECOND
TO KNOTS*/
double mps_to_knots(double mps) {
    return mps * 1.94384;
}
/*DEFINED FUNCTION FOR CONVERSION OF METERS PER SECOND
TO FEET PER SECOND*/
double mps_to_fps(double mps) {
    return mps * 3.28084;
}
#endif
