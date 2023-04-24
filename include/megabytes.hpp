#ifndef MEGABYTES_H
#define MEGABYTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double megabytes_to_petabytes(double megabytes);
double megabytes_to_terabytes(double megabytes);
double megabytes_to_gigabytes(double megabytes);
double megabytes_to_kilobytes(double megabytes);
double megabytes_to_bytes(double megabytes);
double megabytes_to_bits(double megabytes);
// DEFINED FUNCTION FOR CONVERSION OF MEGABYTES TO PETABYTES
double megabytes_to_petabytes(double megabytes) {
    return megabytes / 1073741824;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGABYTES TO TERABYTES
double megabytes_to_terabytes(double megabytes) {
    return megabytes / 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGABYTES TO GIGABYTES
double megabytes_to_gigabytes(double megabytes) {
    return megabytes / 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGABYTES TO KILOBYTES
double megabytes_to_kilobytes(double megabytes) {
    return megabytes * 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGABYTES TO BYTES
double megabytes_to_bytes(double megabytes) {
    return megabytes * 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF MEGABYTES TO BITS
double megabytes_to_bits(double megabytes) {
    return megabytes * 8388608;
}
#endif
