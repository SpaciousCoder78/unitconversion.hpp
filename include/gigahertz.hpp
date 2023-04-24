#ifndef GIGAHERTZ_H
#define GIGAHERTZ_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double gigahertz_to_megahertz(double gigahertz);
double gigahertz_to_kilohertz(double gigahertz);
double gigahertz_to_hertz(double gigahertz);
// DEFINED FUNCTION FOR CONVERSION OF GIGAHERTZ TO MEGAHERTZ
double gigahertz_to_megahertz(double gigahertz) {
    return gigahertz * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGAHERTZ TO KILOHERTZ
double gigahertz_to_kilohertz(double gigahertz) {
    return gigahertz * 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGAHERTZ TO HERTZ
double gigahertz_to_hertz(double gigahertz) {
    return gigahertz * 1000000000;
}
#endif
