#ifndef KILOGRAMS_H
#define KILOGRAMS_H
//DECLARATION OF FUNCTIONS FOR CONVERSIONS
double kilograms_to_grams(double kilograms);
double kilograms_to_tonne(double kilograms);
double kilograms_to_milligrams(double kilograms);
double kilograms_to_micrograms(double kilograms);
double kilograms_to_imperial_ton(double kilograms);
double kilograms_to_us_ton(double kilograms);
double kilograms_to_stone(double kilograms);
double kilograms_to_pound(double kilograms);
double kilograms_to_ounce(double kilograms);
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO GRAMS
double kilograms_to_grams(double kilograms) {
    return kilograms * 1000;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO TONNE
double kilograms_to_tonne(double kilograms) {
    return kilograms * 0.001;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO MILLIGRAMS
double kilograms_to_milligrams(double kilograms) {
    return kilograms_to_grams(kilograms) * 1000;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO MICROGRAMS
double kilograms_to_micrograms(double kilograms) {
    return kilograms_to_milligrams(kilograms) * 1000;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO IMPERIAL TON
double kilograms_to_imperial_ton(double kilograms) {
    return kilograms_to_tonne(kilograms) * 0.984207;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO US TON
double kilograms_to_us_ton(double kilograms) {
    return kilograms_to_tonne(kilograms) * 1.10231;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO STONE
double kilograms_to_stone(double kilograms) {
    return kilograms_to_tonne(kilograms) * 157.473;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO POUND
double kilograms_to_pound(double kilograms) {
    return kilograms * 2.20462;
}
// DEFINED FUNCTION FOR CCONVERSION OF KILOGRAMS TO OUNCE
double kilograms_to_ounce(double kilograms) {
    return kilograms * 35.274;  
}
#endif