#ifndef GRAMS_H
#define GRAMS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double grams_to_kilograms(double grams);
double grams_to_milligrams(double grams);
double grams_to_tons(double grams);
double grams_to_metric_tons(double grams);
double grams_to_pounds(double grams);
double grams_to_ounces(double grams);
// DEFINED FUNCTION FOR CONVERSION OF GRAMS TO KILOGRAMS
double grams_to_kilograms(double grams) {
    return grams / 1000;  
}
// DEFINED FUNCTION FOR CONVERSION OF GRAMS TO MILLIGRAMS
double grams_to_milligrams(double grams) {
    return grams * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF GRAMS TO TONS
double grams_to_tons(double grams) {
    return grams / 907200;
}
// DEFINED FUNCTION FOR CONVERSION OF GRAMS TO METRIC TONS
double grams_to_metric_tons(double grams) {
    return grams / 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF GRAMS TO POUNDS
double grams_to_pounds(double grams) {
    return grams / 453.6;
}
// DEFINED FUNCTION FOR CONVERSION OF GRAMS TO OUNCES
double grams_to_ounces(double grams) {
    return grams / 28.35;
}
#endif
