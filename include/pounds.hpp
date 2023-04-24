#ifndef POUNDS_H
#define POUNDS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double pounds_to_kilograms(double pounds);
double pounds_to_grams(double pounds);
double pounds_to_milligrams(double pounds);
double pounds_to_tons(double pounds);
double pounds_to_metric_tons(double pounds);
double pounds_to_ounces(double pounds);
// DEFINED FUNCTION FOR CONVERSION OF POUNDS TO KILOGRAMS
double pounds_to_kilograms(double pounds) {
    return pounds / 2.205;
}
// DEFINED FUNCTION FOR CONVERSION OF POUNDS TO GRAMS
double pounds_to_grams(double pounds) {
    return pounds * 453.6;
}
// DEFINED FUNCTION FOR CONVERSION OF POUNDS TO MILLIGRAMS
double pounds_to_milligrams(double pounds) {
    return pounds * 453592;
}
// DEFINED FUNCTION FOR CONVERSION OF POUNDS TO TONS
double pounds_to_tons(double pounds) {
    return pounds / 2000;
}
// DEFINED FUNCTION FOR CONVERSION OF POUNDS TO METRIC TONS
double pounds_to_metric_tons(double pounds) {
    return pounds / 2205;
}
// DEFINED FUNCTION FOR CONVERSION OF POUNDS TO OUNCES
double pounds_to_ounces(double pounds) {
    return pounds * 16;
}
#endif
