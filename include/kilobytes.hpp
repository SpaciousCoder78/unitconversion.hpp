#ifndef KILOBYTES_H
#define KILOBYTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double kilobytes_to_petabytes(double kilobytes);
double kilobytes_to_terabytes(double kilobytes);
double kilobytes_to_gigabytes(double kilobytes);
double kilobytes_to_megabytes(double kilobytes);
double kilobytes_to_bytes(double kilobytes);
double kilobytes_to_bits(double kilobytes);
// DEFINED FUNCTION FOR CONVERSION OF KILOBYTES TO PETABYTES
double kilobytes_to_petabytes(double kilobytes) {
    return kilobytes / 1099511627776;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOBYTES TO TERABYTES
double kilobytes_to_terabytes(double kilobytes) {
    return kilobytes / 1073741824;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOBYTES TO GIGABYTES
double kilobytes_to_gigabytes(double kilobytes) {
    return kilobytes / 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOBYTES TO MEGABYTES
double kilobytes_to_megabytes(double kilobytes) {
    return kilobytes / 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOBYTES TO BYTES
double kilobytes_to_bytes(double kilobytes) {
    return kilobytes * 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF KILOBYTES TO BITS
double kilobytes_to_bits(double kilobytes) {
    return kilobytes * 8192;
}
#endif
