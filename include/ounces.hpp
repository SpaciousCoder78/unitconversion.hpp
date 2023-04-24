#ifndef OUNCES_H
#define OUNCES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double ounces_to_kilograms(double ounces);
double ounces_to_grams(double ounces);
double ounces_to_milligrams(double ounces);
double ounces_to_tons(double ounces);
double ounces_to_metric_tons(double ounces);
double ounces_to_pounds(double ounces);
// DEFINED FUNCTION FOR CONVERSION OF OUNCES TO KILOGRAMS
double ounces_to_kilograms(double ounces) {
    return ounces / 35.274;
}
// DEFINED FUNCTION FOR CONVERSION OF OUNCES TO GRAMS
double ounces_to_grams(double ounces) {
    return ounces * 28.3495;
}
// DEFINED FUNCTION FOR CONVERSION OF OUNCES TO MILLIGRAMS
double ounces_to_milligrams(double ounces) {
    return ounces * 28349.5;
}
// DEFINED FUNCTION FOR CONVERSION OF OUNCES TO TONS
double ounces_to_tons(double ounces) {
    return ounces / 32000;
}
// DEFINED FUNCTION FOR CONVERSION OF OUNCES TO METRIC TONS
double ounces_to_metric_tons(double ounces) {
    return ounces / 35270;
}
// DEFINED FUNCTION FOR CONVERSION OF OUNCES TO POUNDS
double ounces_to_pounds(double ounces) {
    return ounces / 16;
}
#endif
