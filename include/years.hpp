#ifndef YEARS_H
#define YEARS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double years_to_months(double years);
double years_to_weeks(double years);
double years_to_days(double years);
double years_to_hours(double years);
double years_to_minutes(double years);
double years_to_seconds(double years);
double years_to_milliseconds(double years);
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO MONTHS 
double years_to_(double years) {
    return years * 12;
}
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO WEEKS
double years_to_(double years) {
    return years * 52.1429;
}
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO DAYS
double years_to_(double years) {
    return years * 365;
}
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO HOURS
double years_to_(double years) {
    return years * 8760;
}
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO MINUTES
double years_to_(double years) {
    return years * 525600;
}
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO SECONDS
double years_to_(double years) {
    return years * 31556952;
}
// DEFINED FUNCTIONS FOR CONVERSION OF YEARS TO MILLISECONDS
double years_to_(double years) {
    return years * 31556926000;
}
#endif
