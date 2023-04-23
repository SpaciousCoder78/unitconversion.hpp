#ifndef DAYS_H
#define DAYS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double days_to_years(double days);
double days_to_months(double days);
double days_to_weeks(double days);
double days_to_hours(double days);
double days_to_minutes(double days);
double days_to_seconds(double days);
double days_to_milliseconds(double days);
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO YEARS
double days_to_years(double days) {
    return days / 365;
}
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO MONTHS
double days_to_months(double days) {
    return days / 30.417;
}
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO WEEKS
double days_to_weeks(double days) {
    return days / 7;
}
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO HOURS
double days_to_hours(double days) {
    return days * 24;
}
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO MINUTES
double days_to_minutes(double days) {
    return days * 1440;
}
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO SECONDS
double days_to_seconds(double days) {
    return days * 86400;
}
// DEFINED FUNCTION FOR CONVERSION OF DAYS TO MILLISECONDS
double days_to_milliseconds(double days) {
    return days * 86400000;
}
#endif
