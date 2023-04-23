#ifndef PETABYTES_H
#define PETABYTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double petabytes_to_terabytes(double petabytes);
double petabytes_to_gigabytes(double petabytes);
double petabytes_to_megabytes(double petabytes);
double petabytes_to_kilobytes(double petabytes);
double petabytes_to_bytes(double petabytes);
double petabytes_to_bits(double petabytes);
// DEFINED FUNCTION FOR CONVERSION OF PETABYTES TO TERABYTES
double petabytes_to_terabytes(double petabytes) {
    return petabytes * 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF PETABYTES TO GIGABYTES
double petabytes_to_gigabytes(double petabytes) {
    return petabytes * 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF PETABYTES TO MEGABYTES
double petabytes_to_megabytes(double petabytes) {
    return petabytes * 1073741824;
}
// DEFINED FUNCTION FOR CONVERSION OF PETABYTES TO KILOBYTES
double petabytes_to_kilobytes(double petabytes) {
    return petabytes * 1099511627776;
}
// DEFINED FUNCTION FOR CONVERSION OF PETABYTES TO BYTES
double petabytes_to_bytes(double petabytes) {
    return petabytes * 1125899906842580;;
}
// DEFINED FUNCTION FOR CONVERSION OF PETABYTES TO BITS
double petabytes_to_bits(double petabytes) {
    return petabytes * 9007199254740640;
}
#endif
