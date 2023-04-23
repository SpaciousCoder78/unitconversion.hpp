#ifndef HOURS_H
#define HOURS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double hours_to_years(double hours);
double hours_to_months(double hours);
double hours_to_weeks(double hours);
double hours_to_days(double hours);
double hours_to_minutes(double hours);
double hours_to_seconds(double hours);
double hours_to_milliseconds(double hours);
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO YEARS
double hours_to_years(double hours) {
    return hours / 8760;
}
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO MONTHS
double hours_to_months(double hours) {
    return hours / 730;
}
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO WEEKS
double hours_to_weeks(double hours) {
    return hours / 168;
}
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO DAYS
double hours_to_days(double hours) {
    return hours / 24;
}
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO MINUTES
double hours_to_minutes(double hours) {
    return hours * 60;
}
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO SECONDS
double hours_to_seconds(double hours) {
    return hours * 3600;
}
// DEFINED FUNCTION FOR CONVERSION OF HOURS TO MILLISECONDS
double hours_to_milliseconds(double hours) {
    return hours * 3600000;
}
#endif
