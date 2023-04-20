#ifndef MILLIMETRES_H
#define MILLIMETRES_H

//Function declaration
double millimetres_to_centimetres();
double millimetres_to_metres();
double millimetres_to_kilometres();
double millimetres_to_inches();
double millimetres_to_feet();
double millimetres_to_yards();
double millimetres_to_miles();

//millimetre to centimetres
double millimetres_to_centimetres(double millimetres){
    return millimetres/10;
}

//millimetre to metres
double millimetres_to_metres(double millimetres){
    return millimetres/1000;
}

//millimetre to kilometres
double millimetres_to_kilometres(double millimetres){
    return millimetres/1000000;
}

//millimetre to inch
double millimetres_to_inches(double millimetres){
    return millimetres/25.4;
}

//millimetre to foot
double millimetres_to_feet(double millimetres){
    return millimetres/304.8;
}

//millimetre to yard
double millimetres_to_yards(double millimetres){
    return millimetres/914.4;
}

//millimetre to mile
double millimetres_to_miles(double millimetres){
    return millimetres/1609344;
}


#endif // MILLIMETRES_H
