#ifndef TONS_H
#define TONS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double tons_to_kilograms(double tons);
double tons_to_grams(double tons);
double tons_to_milligrams(double tons);
double tons_to_metric_tons(double tons);
double tons_to_pounds(double tons);
double tons_to_ounces(double tons);
// DEFINED FUNCTION FOR CONVERSION OF TONS TO KILOGRAMS
double tons_to_kilograms(double tons) {
    return tons * 907.2;
}
// DEFINED FUNCTION FOR CONVERSION OF TONS TO GRAMS
double tons_to_grams(double tons) {
    return tons * 907200;
}
// DEFINED FUNCTION FOR CONVERSION OF TONS TO MILLIGRAMS
double tons_to_milligrams(double tons) {
    return tons * 907184740;
}
// DEFINED FUNCTION FOR CONVERSION OF TONS TO METRIC TONS
double tons_to_metric_tons(double tons) {
    return tons / 1.102;
}
// DEFINED FUNCTION FOR CONVERSION OF TONS TO POUNDS
double tons_to_pounds(double tons) {
    return tons * 2000;
}
// DEFINED FUNCTION FOR CONVERSION OF TONS TO OUNCES
double tons_to_ounces(double tons) {
    return tons * 32000;
}
#endif
