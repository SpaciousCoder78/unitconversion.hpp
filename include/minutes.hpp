#ifndef MINUTES_H
#define MINUTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double minutes_to_years(double minutes);
double minutes_to_months(double minutes);
double minutes_to_weeks(double minutes);
double minutes_to_days(double minutes);
double minutes_to_hours(double minutes);
double minutes_to_seconds(double minutes);
double minutes_to_milliseconds(double minutes);
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO YEARS
double minutes_to_years(double minutes) {
    return minutes / 525600;
}
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO MONTHS
double minutes_to_months(double minutes) {
    return minutes / 43800;
}
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO WEEKS
double minutes_to_weeks(double minutes) {
    return minutes / 10080;
}
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO DAYS
double minutes_to_days(double minutes) {
    return minutes / 1440;
}
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO HOURS
double minutes_to_hours(double minutes) {
    return minutes / 60;
}
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO SECONDS
double minutes_to_seconds(double minutes) {
    return minutes * 60;
}
// DEFINED FUNCTION FOR CONVERSION OF MINUTES TO MILLISECONDS
double minutes_to_milliseconds(double minutes) {
    return minutes * 60000;
}
#endif
