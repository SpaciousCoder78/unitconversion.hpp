#ifndef WEEKS_H
#define WEEKS_H
// DECLARATION OF FUNCTIONS FOR CONVERSION
double weeks_to_years(double weeks);
double weeks_to_months(double weeks);
double weeks_to_days(double weeks);
double weeks_to_hours(double weeks);
double weeks_to_minutes(double weeks);
double weeks_to_seconds(double weeks);
double weeks_to_milliseconds(double weeks);
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO YEARS
double weeks_to_years(double weeks) {
    return weeks / 52.143;
}
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO MONTHS
double weeks_to_months(double weeks) {
    return weeks / 4.345;
}
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO DAYS
double weeks_to_days(double weeks) {
    return weeks * 7;
}
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO HOURS
double weeks_to_hours(double weeks) {
    return weeks * 168;
}
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO MINUTES
double weeks_to_minutes(double weeks) {
    return weeks * 10080;
}
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO SECONDS
double weeks_to_seconds(double weeks) {
    return weeks * 604800;
}
// DEFINED FUNCTION FOR CONVERSION OF WEEKS TO MILLISECONDS
double weeks_to_milliseconds(double weeks) {
    return weeks * 604800000;
}
#endif
