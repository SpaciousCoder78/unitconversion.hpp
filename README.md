# unitconversion.hpp
A C++ library containing predefined unit conversion formulas to make your life easier.

The library is compatible  C++

For any sort of help or discussions, use the discussions tab of this repository

Work in progress

This library is licensed under MIT License.

Contributions are welcome.

# Supported Units
- Metres
- Kilometres
- Centimetres

# How to use
- Download the source code from this repository.
- Copy the include folder and paste it in a folder containing your C++ source file.
- Include the header file that you want in the beginning of your program.
For example: If you want to include metres.h, you can do it like this:
![image](https://user-images.githubusercontent.com/88923986/233766447-13e749cf-07ab-472a-9d77-0c9b0fc029d3.png)
- Call the required function you need (eg. centimetres_to_millimetres()) and pass the parameters (in this case, centimetres) into the function parameters to use the function

Example: ![image](https://user-images.githubusercontent.com/88923986/233766776-078dc861-30e4-448a-bb8e-d0d747f768da.png)


# Contribution Guidelines
- The header file name must start with the unit name in plural and end with .hpp extension (eg. metres.hpp)
- The header file must contain ifndef, define and endif statements. The functions should be written between the define and endif statements.
- Function name should be in the format of unitname_to_unitname.
 

