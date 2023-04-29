#ifndef KNOTS_H
#define KNOTS_H
/*FUNCTION DECLARATIONS FOR CONVERSIONS
TO REDUCE THE LENGTH OF THE FUNCTION NAMES, SOME OF THE UNITS
ARE WRITTEN IN SHORT FORM*/
double knots_to_kmph(double knots); // KMPH = KILOMETERS PER HOUR
double knots_to_mps(double knots); // MPS = METERS PER SECOND
double knots_to_mph(double knots); // MPH = MILES PER HOUR
double knots_to_fps(double knots); // FPS = FEET PER SECOND
/*DEFINED FUNCTION TO CONVERT KNOTS TO 
KILOMETERS PER HOUR*/
double knots_to_kmph(double knots) {
    return knots * 1.852;
}
/*DEFINED FUNCTION TO CONVERT KNOTS TO
METERS PER SECOND*/
double knots_to_mps(double knots) {
    return knots / 1.944;
}
/*DEFINED FUNCTION FOR CONVERSION OF KNOTS TO 
MILES PER HOUR*/
double knots_to_mph(double knots) {
    return knots * 1.15078;
}
/*DEFINED FUNCTION FOR CONVERSION OF KNOTS TO
FEET PER SECOND*/
double knots_to_fps(double knots) {
    return knots * 1.68781;
}
#endif
