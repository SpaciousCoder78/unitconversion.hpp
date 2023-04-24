#ifndef HERTZ_H
#define HERTZ_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double hertz_to_gigahertz(double hertz);
double hertz_to_megahertz(double hertz);
double hertz_to_kilohertz(double hertz);
// DEFINED FUNCTION FOR CONVERSION OF HERTZ TO GIGAHERTZ
double hertz_to_gigahertz(double hertz) {
    return hertz / 1000000000;
}
// DEFINED FUNCTION FOR CONVERSION OF HERTZ TO MEGAHERTZ
double hertz_to_megahertz(double hertz) {
    return hertz / 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF HERTZ TO KILOHERTZ
double hertz_to_kilohertz(double hertz) {
    return hertz / 1000;
}
#endif
