#ifndef MILLIGRAMS_H
#define MILLIGRAMS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double milligrams_to_kilograms(double milligrams);
double milligrams_to_grams(double milligrams);
double milligrams_to_tons(double milligrams);
double milligrams_to_metric_tons(double milligrams);
double milligrams_to_pounds(double milligrams);
double milligrams_to_ounces(double milligrams);
// DEFINED FUNCTION FOR CONVERSION OF MILLIGRAMS TO KILOGRAMS
double milligrams_to_kilograms(double milligrams) {
    return milligrams / 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLIGRAMS TO GRAMS
double milligrams_to_grams(double milligrams) {
    return milligrams / 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLIGRAMS TO TONS
double milligrams_to_tons(double milligrams) {
    return milligrams / 907184740;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLIGRAMS TO METRIC TONS
double milligrams_to_metric_tons(double milligrams) {
    return milligrams / 1000000000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLIGRAMS TO POUNDS
double milligrams_to_pounds(double milligrams) {
    return milligrams / 4536000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLIGRAMS TO OUNCES
double milligrams_to_ounces(double milligrams) {
    return milligrams / 28350;
}
#endif
