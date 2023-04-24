#ifndef BITS_H
#define BITS_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double bits_to_petabytes(double bits);
double bits_to_terabytes(double bits);
double bits_to_gigabytes(double bits);
double bits_to_megabytes(double bits);
double bits_to_kilobytes(double bits);
double bits_to_bytes(double bits);
// DEFINED FUNCTION FOR CONVERSION OF BITS TO PETABYTES
double bits_to_petabytes(double bits) {
    return bits / 9007199254740640;
}
// DEFINED FUNCTION FOR CONVERSION OF BITS TO TERABYTES
double bits_to_terabytes(double bits) {
    return bits / 8796093022208;
}
// DEFINED FUNCTION FOR CONVERSION OF BITS TO GIGABYTES
double bits_to_gigabytes(double bits) {
    return bits / 8589934592;
}
// DEFINED FUNCTION FOR CONVERSION OF BITS TO MEGABYTES
double bits_to_megabytes(double bits) {
    return bits / 8388608;
}
// DEFINED FUNCTION FOR CONVERSION OF BITS TO KILOBYTES
double bits_to_kilobytes(double bits) {
    return bits / 8192;
}
// DEFINED FUNCTION FOR CONVERSION OF BITS TO BYTES
double bits_to_bytes(double bits) {
    return bits / 8;
}
#endif
