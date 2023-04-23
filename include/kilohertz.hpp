#ifndef KILOHERTZ_H
#define KILOHERTZ_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double kilohertz_to_gigahertz(double kilohertz);
double kilohertz_to_megahertz(double kilohertz);
double kilohertz_to_hertz(double kilohertz);
// DEFINED FUNCTION FOR CONVERSION OF KILOHERTZ TO GIGAHERTZ
double kilohertz_to_gigahertz(double kilohertz) {
    return kilohertz / 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOHERTZ TO MEGAHERTZ
double kilohertz_to_megahertz(double kilohertz) {
    return kilohertz / 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOHERTZ TO HERTZ
double kilohertz_to_hertz(double kilohertz) {
    return kilohertz * 1000;
}
#endif
