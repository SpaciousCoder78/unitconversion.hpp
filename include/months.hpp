#ifndef MONTHS_H
#define MONTHS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double months_to_years(double months);
double months_to_weeks(double months);
double months_to_days(double months);
double months_to_hours(double months);
double months_to_minutes(double months);
double months_to_seconds(double months);
double months_to_milliseconds(double months);
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO YEARS
double months_to_(double months) {
    return months / 12;
}
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO WEEKS
double months_to_(double months) {
    return months * 4.34524;
}
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO DAYS
double months_to_(double months) {
    return months * 30.4167;
}
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO HOURS
double months_to_(double months) {
    return months * 730.001;
}
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO MINUTES
double months_to_(double months) {
    return months * 43800;
}
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO SECONDS
double months_to_(double months) {
    return months * 2629800;
}
// DEFINED FUNCTION FOR CONVERSION OF MONTHS TO MILLISECONDS
double months_to_(double months) {
    return months * 2629800000;
}
#endif
