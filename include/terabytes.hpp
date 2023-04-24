#ifndef TERABYTES_H
#define TERABYTES_H
// DECLARATION OF FUNCTIONS FOR CONVERSIONS
double terabytes_to_petabytes(double terabytes);
double terabytes_to_gigabytes(double terabytes);
double terabytes_to_megabytes(double terabytes);
double terabytes_to_kilobytes(double terabytes);
double terabytes_to_bytes(double terabytes);
double terabytes_to_bits(double terabytes);
// DEFINED FUNCTION FOR CONVERSION OF TERABYTES TO PETABYTES
double terabytes_to_petabytes(double terabytes) {
    return terabytes / 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF TERABYTES TO GIGABYTES
double terabytes_to_gigabytes(double terabytes) {
    return terabytes * 1024;
}
// DEFINED FUNCTION FOR CONVERSION OF TERABYTES TO MEGABYTES
double terabytes_to_megabytes(double terabytes) {
    return terabytes * 1048576;
}
// DEFINED FUNCTION FOR CONVERSION OF TERABYTES TO KILOBYTES
double terabytes_to_kilobytes(double terabytes) {
    return terabytes * 1073741824;
}
// DEFINED FUNCTION FOR CONVERSION OF TERABYTES TO BYTES
double terabytes_to_bytes(double terabytes) {
    return terabytes * 1099511627776;
}
// DEFINED FUNCTION FOR CONVERSION OF TERABYTES TO BITS
double terabytes_to_bits(double terabytes) {
    return terabytes * 8796093022208;
}
#endif
