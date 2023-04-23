#ifndef BYTES_H
#define BYTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double bytes_to_petabytes(double bytes);
double bytes_to_terabytes(double bytes);
double bytes_to_gigabytes(double bytes);
double bytes_to_megabytes(double bytes);
double bytes_to_kilobytes(double bytes);
double bytes_to_bits(double bytes);
// DEFINED FUNCTION FOR CONVERSION OF BYTES TO PETABYTES
double bytes_to_petabytes(double bytes) {
    return bytes / 1125899906842580;
}
// DEFINED FUNCTION FOR CONVERSION OF BYTES TO TERABYTES
double bytes_to_terabytes(double bytes) {
    return bytes / 1099511627776;
}
// DEFINED FUNCTION FOR CONVERSION OF BYTES TO GIGABYTES
double bytes_to_gigabytes(double bytes) {
    return bytes / 1073741824;
}
// DEFINED FUNCTION FOR CONVERSION OF BYTES TO MEGABYTES
double bytes_to_megabytes(double bytes) {
    return bytes / 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF BYTES TO KILOBYTES
double bytes_to_kilobytes(double bytes) {
    return bytes / 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF BYTES TO BITS
double bytes_to_bits(double bytes) {
    return bytes * 8;
}
#endif
