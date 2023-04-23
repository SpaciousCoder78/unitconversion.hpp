#ifndef MILLISECONDS_H
#define MILLISECONDS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double milliseconds_to_years(double milliseconds);
double milliseconds_to_months(double milliseconds);
double milliseconds_to_weeks(double milliseconds);
double milliseconds_to_days(double milliseconds);
double milliseconds_to_hours(double milliseconds);
double milliseconds_to_minutes(double milliseconds);
double milliseconds_to_seconds(double milliseconds);
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO YEARS
double milliseconds_to_years(double milliseconds) {
    return milliseconds / 31556926000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO MONTHS
double milliseconds_to_months(double milliseconds) {
    return milliseconds / 2629800000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO WEEKS
double milliseconds_to_weeks(double milliseconds) {
    return milliseconds / 604800000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO DAYS
double milliseconds_to_days(double milliseconds) {
    return milliseconds / 86400000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO HOURS
double milliseconds_to_hours(double milliseconds) {
    return milliseconds / 3600000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO MINUTES
double milliseconds_to_minutes(double milliseconds) {
    return milliseconds / 60000;
}
// DEFINED FUNCTION FOR CONVERSION OF MILLISECONDS TO SECONDS
double milliseconds_to_seconds(double milliseconds) {
    return milliseconds / 1000;
}
#endif
