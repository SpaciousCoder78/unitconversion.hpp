#ifndef KILOGRAMS_H
#define KILOGRAMS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double kilograms_to_grams(double kilograms);
double kilograms_to_milligrams(double kilograms);
double kilograms_to_tons(double kilograms);
double kilograms_to_metric_tons(double kilograms);
double kilograms_to_pounds(double kilograms);
double kilograms_to_ounces(double kilograms);
// DEFINED FUNCTION FOR CONVERSION OF KILOGRAMS TO GRAMS
double kilograms_to_grams(double kilograms) {
    return kilograms * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOGRAMS TO MILLIGRAMS
double kilograms_to_milligrams(double kilograms) {
    return kilograms * 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOGRAMS TO TONS
double kilograms_to_tons(double kilograms) {
    return kilograms / 907.2;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOGRAMS TO METRIC TONS
double kilograms_to_metric_tons(double kilograms) {
    return kilograms / 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOGRAMS TO POUNDS
double kilograms_to_pounds(double kilograms) {
    return kilograms * 2.205;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOGRAMS TO OUNCES
double kilograms_to_ounces(double kilograms) {
    return kilograms * 35.274;
}
#endif
