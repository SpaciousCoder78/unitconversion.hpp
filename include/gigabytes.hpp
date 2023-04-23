#ifndef GIGABYTES_H
#define GIGABYTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double gigabytes_to_petabytes(double gigabytes);
double gigabytes_to_terabytes(double gigabytes);
double gigabytes_to_megabytes(double gigabytes);
double gigabytes_to_kilobytes(double gigabytes);
double gigabytes_to_bytes(double gigabytes);
double gigabytes_to_bits(double gigabytes);
// DEFINED FUNCTION FOR CONVERSION OF GIGABYTES TO PETABYTES
double gigabytes_to_petabytes(double gigabytes) {
    return gigabytes / 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGABYTES TO TERABYTES
double gigabytes_to_terabytes(double gigabytes) {
    return gigabytes / 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGABYTES TO MEGABYTES
double gigabytes_to_megabytes(double gigabytes) {
    return gigabytes * 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGABYTES TO KILOBYTES
double gigabytes_to_kilobytes(double gigabytes) {
    return gigabytes * 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGABYTES TO BYTES
double gigabytes_to_bytes(double gigabytes) {
    return gigabytes * 1073741824;
}
// DEFINED FUNCTION FOR CONVERSION OF GIGABYTES TO BITS
double gigabytes_to_bits(double gigabytes) {
    return gigabytes * 8589934592;
}
#endif
