#ifndef CENTIMETRES_H
#define CENTIMETRES_H


//Function declaration
double centimetres_to_millimetres();
double centimetres_to_metres();
double centimetres_to_kilometres();
double centimetres_to_inches();
double centimetres_to_feet();
double centimetres_to_yards();
double centimetres_to_miles();

//centimetre to millimetre
double centimetres_to_millimetres(double centimetres){
    return centimetres*10;
}

//centimetres to metres
double centimetres_to_metres(double centimetres){
    return centimetres/100;
}

//centimetres to kilometres
double centimetres_to_kilometres(double centimetres){
    return centimetres/100000;
}

//centimetre to inch
double centimetres_to_inches(double centimetres){
    return centimetres*0.39370;
}

//centimetre to foot
double centimetres_to_feet(double centimetres){
    return centimetres*0.0328084;
}

//centimetre to yard
double centimetres_to_yards(double centimetres){
    return centimetres*0.010936;
}

//centimetre to mile
double millimetres_to_miles(double centimetres){
    return centimetres/160934.4;
}

#endif // CENTIMETRES_H
