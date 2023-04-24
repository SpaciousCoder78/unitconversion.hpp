#ifndef METRICTONS_H
#define METRICTONS_H
// DECLARATION OF FUNCTIONS FOR CONVERSION
double metric_tons_to_kilograms(double metric_tons);
double metric_tons_to_grams(double metric_tons);
double metric_tons_to_milligrams(double metric_tons);
double metric_tons_to_tons(double metric_tons);
double metric_tons_to_pounds(double metric_tons);
double metric_tons_to_ounces(double metric_tons);
// DEFINED FUNCTION FOR CONVERSION OF METRIC TONS TO KILOGRAMS
double metric_tons_to_kilograms(double metric_tons) {
    return metric_tons * 1000;
}
// DEFINED FUNCTION FOR CONVERSION OF METRIC TONS TO GRAMS
double metric_tons_to_grams(double metric_tons) {
    return metric_tons * 1000000;
}
// DEFINED FUNCTION FOR CONVERSION OF METRIC TONS TO MILLIGRAMS
double metric_tons_to_milligrams(double metric_tons) {
    return metric_tons * 1000000000;
}
// DEFINED FUNCTION FOR CONVERSION OF METRIC TONS TO TONS
double metric_tons_to_tons(double metric_tons) {
    return metric_tons * 1.102;
}
// DEFINED FUNCTION FOR CONVERSION OF METRIC TONS TO POUNDS
double metric_tons_to_pounds(double metric_tons) {
    return metric_tons * 2204.62;
}
// DEFINED FUNCTION FOR CONVERSION OF METRIC TONS TO OUNCES
double metric_tons_to_ounces(double metric_tons) {
    return metric_tons * 35274;
}
#endif
