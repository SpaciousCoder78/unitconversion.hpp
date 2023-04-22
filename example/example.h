//This is an example of how a header file in this repository needs to be written
//the file should start with these 2 ifndef and define statements and end with endif statements
//file should be saved as unitname.h. Unit name needs to be plural
#ifndef EXAMPLE_H
#define EXAMPLE_H

//your code goes within these define and end if statements
//change the function name based on the following declarations. The function names must be in the format of unitname_to_unitname
//Function declaration
double metres_to_millimetres();
double metres_to_centimetres();
double metres_to_kilometres();
double metres_to_inches();
double metres_to_feet();
double metres_to_yards();
double metres_to_miles();


//update the comments accordingly
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
