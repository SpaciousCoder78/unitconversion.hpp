#ifndef METRES_H
#define METRES_H


//Function declaration
double metres_to_millimetres();
double metres_to_centimetres();
double metres_to_kilometres();
double metres_to_inches();
double metres_to_feet();
double metres_to_yards();
double metres_to_miles();

//metre to millimetre
double metres_to_millimetres(double metres){
    return metres*1000;
}

//metres to centimetres
double metres_to_centimetres(double metres){
    return metres*100;
}

//metres to kilometres
double metres_to_kilometres(double metres){
    return metres/1000;
}

//metre to inch
double metres_to_inches(double metres){
    return metres*39.37;
}

//metre to foot
double metres_to_feet(double metres){
    return metres* 3.281;
}

//metre to yard
double metres_to_yards(double metres){
    return metres*1.094;
}

//metre to mile
double metres_to_miles(double metres){
    return metres/160934.4;
}


#endif // METRES_H
