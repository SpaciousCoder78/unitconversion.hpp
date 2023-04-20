//including our header file
#include "millimetres.h"
#include <iostream>




int main(){
    //declare the unit that you want to convert into
    //use the respective function to call our millimeter to centimetre function from our header file
    double centimetres= millimetres_to_centimetres(100);//pass the millimetre or your respective unit value into the function parameter
    //print the output
    std::cout<<centimetres;
}
