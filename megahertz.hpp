#ifndef MEGAHERTZ_H
#define MEGAHERTZ_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double megahertz_to_gigahertz(double megahertz);
double megahertz_to_kilohertz(double megahertz);
double megahertz_to_hertz(double megahertz);
// DEFINED FUNCTION FOR CONVERSION OF MEGAHERTZ TO GIGAHERTZ
double megahertz_to_gigahertz(double megahertz) {
    return megahertz / 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGAHERTZ TO KILOHERTZ
double megahertz_to_kilohertz(double megahertz) {
    return megahertz * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGAHERTZ TO HERTZ
double megahertz_to_hertz(double megahertz) {
    return megahertz * 1000000;
}
#endif
