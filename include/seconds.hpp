#ifndef SECONDS_H
#define SECONDS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double seconds_to_years(double seconds);
double seconds_to_months(double seconds);
double seconds_to_weeks(double seconds);
double seconds_to_days(double seconds);
double seconds_to_hours(double seconds);
double seconds_to_minutes(double seconds);
double seconds_to_milliseconds(double seconds);
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO YEARS
double seconds_to_years(double seconds) {
    return seconds / 31536000;
}
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO MONTHS
double seconds_to_months(double seconds) {
    return seconds / 2628002.88;
}
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO WEEKS
double seconds_to_weeks(double seconds) {
    return seconds / 604800;
}
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO DAYS
double seconds_to_days(double seconds) {
    return seconds / 86400;
}
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO HOURS
double seconds_to_hours(double seconds) {
    return seconds / 3600;
}
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO MINUTES
double seconds_to_minutes(double seconds) {
    return seconds / 60;
}
// DEFINED FUNCTION FOR CONVERSION OF SECONDS TO MILLISECONDS
double seconds_to_minutes(double seconds) {
    return seconds * 1000;
}
#endif
