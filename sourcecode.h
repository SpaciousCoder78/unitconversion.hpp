#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void welcome(); // DECLARATION OF THE FUNCTION FOR CHOOSING THE DESIRED CONVERSION
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF LENGTH CONVERTER
void kilometers();    
void meters();       
void centimeters();  
void millimeters();  
void miles();        
void yards();         
void feet();         
void inches();       
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF TIME CONVERTER
void years();
void months();
void weeks();
void days();
void hours();
void minutes();
void seconds();
void milliseconds();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF TEMPERATURE CONVERTER
void celsius();
void fahrenheit();
void kelvin();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF FREQUENCY CONVERTER
void gigahertz();
void megahertz();
void kilohertz();
void hertz();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF DATA STORAGE CONVERTER
void petabytes();
void terabytes();
void gigabytes();
void megabytes();
void kilobytes();
void bytes();
void bits();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF SPEED CONVERTER
void kilometers_per_hour();
void meters_per_second();
void miles_per_hour();
void knots();
void foot_per_second();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF WEIGHT CONVERTER
void kilograms();
void grams();
void milligrams();
void tons();
void metric_tons();
void pounds();
void ounces();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF AREA CONVERTER
void square_kilometers();
void square_meters();
void square_miles();
void square_yards();
void square_feet();
void hectares();
void acres();
// DECLARATION OF FUNCTIONS FOR CONVERSIONS OF PRESSURE CONVERTER
void pascal();
void kilopascal();
void standard_atmosphere();
void torrs();
void bars();
void pounds_per_square_inch();
void millimeters_of_mercury();
void inches_of_mercury();
void length() { // DEFINED FUNCTION OF LENGTH CONVERTER
    int choice;
    system("cls");
    printf("\nYOU HAVE CHOSEN LENGTH CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF KILOMETERS.\n");
        printf("2. CONVERSIONS OF METRES. \n");
        printf("3. CONVERSIONS OF CENTIMETERS. \n");
        printf("4. CONVERSIONS OF MILLIMETERS.\n");
        printf("5. CONVERSIONS OF MILES.\n");
        printf("6. CONVERSIONS OF YARDS.\n");
        printf("7. CONVERSIONS OF FEET.\n");
        printf("8. CONVERSIONS OF INCHES.\n");
        printf("9. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        if (choice == 1) {
           kilometers(); // FUNCTION CALL FOR CONVERTING KILOMETERS TO OTHER UNITS
           break;
        }
        else if (choice == 2) {
            meters(); // FUNCTION CALL FOR CONVERTING METERS TO OTHER UNITS
            break;
        }
        else if (choice == 3) {
            centimeters(); // FUNCTION CALL FOR CONVERTING CENTIMETERS TO OTHER UNITS
            break;
        }
        else if (choice == 4) {
            millimeters(); // FUNCTION CALL FOR CONVERTING MILLIMETERS TO OTHER UNITS
            break;
        }
        else if (choice == 5) {
            miles(); // FUNCTION CALL FOR CONVERTING MILES TO OTHER UNITS
            break;
        }
        else if (choice == 6) {
            yards(); // FUNCTION CALL FOR CONVERTING YARDS TO OTHER UNITS
            break;
        }
        else if (choice == 7) {
            feet(); // FUNCTION CALL FOR CONVERTING FEET TO OTHER UNITS
            break;
        }
        else if (choice == 8) {
            inches(); // FUNCTION CALL FOR CONVERTING INCHES TO OTHER UNITS
            break;
        }
        else if (choice == 9) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice != 9);
}
void millimeters() { // DEFINED FUNCTION FOR CONVERSION OF MILLIMETERS
    int pick33, selection33;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN MILLIMETERS TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MILLIMETERS TO KILOMETERS.\n");
        printf("2. CONVERT MILLIMETERS TO METERS.\n");
        printf("3. CONVERT MILLIMETERS TO CENTIMETERS.\n");
        printf("4. CONVERT MILLIMETERS TO MILES.\n");
        printf("5. CONVERT MILLIMETERS TO YARDS.\n");
        printf("6. CONVERT MILLIMETERS TO FEET.\n");
        printf("7. CONVERT MILLIMETERS TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick33);
        if (pick33 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 1000000;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick33 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO METERS.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nDISTANCE = %.15lf METERS\n", result);
            break;
        }
        else if (pick33 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 10;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick33 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 1609344;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick33 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 914.4;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick33 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 304.8;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick33 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILLIMETERS TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN MILLIMETERS = ");
            scanf("%lf", &number);
            result = number / 25.4;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick33 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick33 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection33);
        if (selection33 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection33 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection33 != 1 || selection33 != 0);
}
void kilometers() { // DEFINED FUNCTION FOR CONVERSION OF KILOMETERS
    int pick, selection;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN KILOMETERS TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT KILOMETERS TO METRES.\n");
        printf("2. CONVERT KILOMETERS TO CENTIMETERS.\n");
        printf("3. CONVERT KILOMETERS TO MILLIMETERS.\n");
        printf("4. CONVERT KILOMETERS TO MILES.\n");
        printf("5. CONVERT KILOMETERS TO YARDS.\n");
        printf("6. CONVERT KILOMETERS TO FEET.\n");
        printf("7. CONVERT KILOMETERS TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick);
        if (pick == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO METRES.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nDISTANCE = %.15lf METRES\n", result);
            break;
        }
        else if (pick == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 100000;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 1000000;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick == 4) { 
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number / 1.609;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 1093.61;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 3280.84;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM KILOMETERS TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 39370.1;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick != 8);
    do {
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER '0' TO EXIT.\n");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d", &selection);
    if (selection == 1) {
        welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
        break;
    }
    else if (selection == 0) {
        system("cls");
        printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
        exit(0);
    }
    else {
        system("cls");
        printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
        printf("PRESS ENTER TO CONTINUE!\n");
        getch();
    }
    } while (selection != 1 || selection != 0);
}
void meters() { // DEFINED FUNCTION FOR CONVERSION OF METERS
    int pick1, selection1;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN METERS TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USERS TO ENTER THEIR CHOICE
        printf("1. CONVERT METERS TO KILOMETERS.\n");
        printf("2. CONVERT METERS TO CENTIMETERS.\n");
        printf("3. CONVERT METERS TO MILLIMETERS.\n");
        printf("4. CONVERT METERS TO MILES.\n");
        printf("5. CONVERT METERS TO YARDS.\n");
        printf("6. CONVERT METERS TO FEET.\n");
        printf("7. CONVERT METERS TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick1);
        if (pick1 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick1 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number * 100;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick1 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick1 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number / 1609;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick1 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number * 1.09361;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick1 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number * 3.28084;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick1 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM METERS TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN METERS = ");
            scanf("%lf", &number);
            result = number * 39.3701;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick1 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick1 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection1);
        if (selection1 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection1 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection1 != 1 || selection1 != 0);
}
void centimeters() { // DEFINED FUNCTION FOR CONVERSIONS OF CENTIMETERS
    int pick2, selection2;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN CENTIMETERS TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT CENTIMETERS TO KILOMETERS.\n");
        printf("2. CONVERT CENTIMETERS TO METERS.\n");
        printf("3. CONVERT CENTIMETERS TO MILLIMETERS.\n");
        printf("4. CONVERT CENTIMETERS TO MILES.\n");
        printf("5. CONVERT CENTIMETERS TO YARDS.\n");
        printf("6. CONVERT CENTIMETERS TO FEET.\n");
        printf("7. CONVERT CENTIMETERS TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick2);
        if (pick2 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number / 100000;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick2 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO METERS.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number / 100;
            printf("\nDISTANCE = %.15lf METERS\n", result);
            break;
        }
        else if (pick2 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number * 10;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick2 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number / 160900;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick2 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number / 91.44;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick2 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number / 30.48;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick2 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM CENTIMETERS TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN CENTIMETERS = ");
            scanf("%lf", &number);
            result = number / 2.54;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick2 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick2 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection2);
        if (selection2 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection2 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection2 != 1 || selection2 != 0);
}
void miles() { // DEFINED FUNCTION FOR CONVERSIONS OF MILES
    int pick3, selection3;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN MILES TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MILES TO KILOMETERS.\n");
        printf("2. CONVERT MILES TO METERS.\n");
        printf("3. CONVERT MILES TO CENTIMETERS.\n");
        printf("4. CONVERT MILES TO MILLIMETERS.\n");
        printf("5. CONVERT MILES TO YARDS.\n");
        printf("6. CONVERT MILES TO FEET.\n");
        printf("7. CONVERT MILES TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick3);
        if (pick3 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 1.609;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick3 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO METERS.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 1609.34;
            printf("\nDISTANCE = %.15lf METERS\n", result);
            break;
        }
        else if (pick3 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 160934;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick3 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 1609344;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick3 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 1760;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick3 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 5280;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick3 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM MILES TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN MILES = ");
            scanf("%lf", &number);
            result = number * 63360;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick3 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick3 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection3);
        if (selection3 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection3 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection3 != 1 || selection3 != 0);
}
void yards() { // DEFINED FUNCTION FOR CONVERSIONS OF YARDS
    int pick4, selection4;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN YARDS TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT YARDS TO KILOMETERS.\n");
        printf("2. CONVERT YARDS TO METERS.\n");
        printf("3. CONVERT YARDS TO CENTIMETERS.\n");
        printf("4. CONVERT YARDS TO MILLIMETERS.\n");
        printf("5. CONVERT YARDS TO MILES.\n");
        printf("6. CONVERT YARDS TO FEET.\n");
        printf("7. CONVERT YARDS TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick4);
        if (pick4 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number / 1094;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick4 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO METERS.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number / 1.094;
            printf("\nDISTANCE = %.15lf METERS\n", result);
            break;
        }
        else if (pick4 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number * 91.44;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick4 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number * 914.4;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick4 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number / 1760;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick4 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number * 3;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick4 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM YARDS TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN YARDS = ");
            scanf("%lf", &number);
            result = number * 36;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick4 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick4 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection4);
        if (selection4 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection4 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection4 != 1 || selection4 != 0);
}
void feet() { // DEFINED FUNCTION FOR CONVERSIONS OF FEET
    int pick5, selection5;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN FEET TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT FEET TO KILOMETERS.\n");
        printf("2. CONVERT FEET TO METERS.\n");
        printf("3. CONVERT FEET TO CENTIMETERS.\n");
        printf("4. CONVERT FEET TO MILLIMETERS.\n");
        printf("5. CONVERT FEET TO MILES.\n");
        printf("6. CONVERT FEET TO YARDS.\n");
        printf("7. CONVERT FEET TO INCHES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick5);
        if (pick5 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number / 3281;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick5 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO METERS.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number / 3.281;
            printf("\nDISTANCE = %.15lf METERS\n", result);
            break;
        }
        else if (pick5 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number * 30.48;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick5 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number * 304.8;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick5 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number / 5280;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick5 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number / 3;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick5 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM FEET TO INCHES.\n\n");
            printf("ENTER THE DISTANCE IN FEET = ");
            scanf("%lf", &number);
            result = number * 12;
            printf("\nDISTANCE = %.15lf INCHES\n", result);
            break;
        }
        else if (pick5 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick5 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection5);
        if (selection5 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection5 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection5 != 1 || selection5 != 0);
}
void inches() { // DEFINED FUNCTION FOR CONVERSIONS OF INCHES
    int pick6, selection6;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT LENGTH IN INCHES TO OTHER QUANTITIES OF LENGTH!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT INCHES TO KILOMETERS.\n");
        printf("2. CONVERT INCHES TO METERS.\n");
        printf("3. CONVERT INCHES TO CENTIMETERS.\n");
        printf("4. CONVERT INCHES TO MILLIMETERS.\n");
        printf("5. CONVERT INCHES TO MILES.\n");
        printf("6. CONVERT INCHES TO YARDS.\n");
        printf("7. CONVERT INCHES TO FEET.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick6);
        if (pick6 == 1) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO KILOMETERS.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number / 39370;
            printf("\nDISTANCE = %.15lf KILOMETERS\n", result);
            break;
        }
        else if (pick6 == 2) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO METERS.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number / 39.37;
            printf("\nDISTANCE = %.15lf METERS\n", result);
            break;
        }
        else if (pick6 == 3) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO CENTIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number * 2.54;
            printf("\nDISTANCE = %.15lf CENTIMETERS\n", result);
            break;
        }
        else if (pick6 == 4) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO MILLIMETERS.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number * 25.4;
            printf("\nDISTANCE = %.15lf MILLIMETERS\n", result);
            break;
        }
        else if (pick6 == 5) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO MILES.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number / 63360;
            printf("\nDISTANCE = %.15lf MILES\n", result);
            break;
        }
        else if (pick6 == 6) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO YARDS.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number / 36;
            printf("\nDISTANCE = %.15lf YARDS\n", result);
            break;
        }
        else if (pick6 == 7) {
            system("cls");
            printf("\nCONVERSION OF LENGTH FROM INCHES TO FEET.\n\n");
            printf("ENTER THE DISTANCE IN INCHES = ");
            scanf("%lf", &number);
            result = number / 12;
            printf("\nDISTANCE = %.15lf FEET\n", result);
            break;
        }
        else if (pick6 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick6 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); //PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection6);
        if (selection6 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection6 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection6 != 1 || selection6 != 0);
}
void time() { // DEFINED FUNCTION FOR TIME CONVERTER
    int choice1;
    system("cls");
    printf("\nYOU HAVE CHOSEN TIME CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF YEARS.\n");
        printf("2. CONVERSIONS OF MONTHS.\n");
        printf("3. CONVERSIONS OF WEEKS.\n");
        printf("4. CONVERSIONS OF DAYS.\n");
        printf("5. CONVERSIONS OF HOURS.\n");
        printf("6. CONVERSIONS OF MINUTES.\n");
        printf("7. CONVERSIONS OF SECONDS.\n");
        printf("8. CONVERSIONS OF MILLISECONDS.\n");
        printf("9. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice1);
        if (choice1 == 1) {
            years(); // FUNCTION CALL FOR CONVERTING YEARS TO OTHER UNITS
            break;
        }
        else if (choice1 == 2) {
            months(); // FUNCTION CALL FOR CONVERTING MONTHS TO OTHER UNITS
            break;
        }
        else if (choice1 == 3) {
            weeks(); // FUNCTION CALL FOR CONVERTING WEEKS TO OTHER UNITS
            break;
        }
        else if (choice1 == 4) {
            days(); // FUNCTION CALL FOR CONVERTING DAYS TO OTHER UNITS
            break;
        }
        else if (choice1 == 5) {
            hours(); // FUNCTION CALL FOR CONVERTING HOURS TO OTHER UNITS
            break;
        }
        else if (choice1 == 6) {
            minutes(); // FUNCTION CALL FOR CONVERTING MINUTES TO OTHER UNITS
            break;
        }
        else if (choice1 == 7) {
            seconds(); // FUNCTION CALL FOR CONVERTING SECONDS TO OTHER UNITS
            break;
        }
        else if (choice1 == 8) {
            milliseconds(); // FUNCTION CALL FOR CONVERTING MILLISECONDS TO OTHER UNITS
            break;
        }
        else if (choice1 == 9) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice1 != 9);
}
void milliseconds() { // DEFINED FUNCTION FOR CONVERSIONS OF MILLISECONDS
    int pick34, selection34;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN MILLISECONDS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELLOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MILLISECONDS TO YEARS.\n"); 
        printf("2. CONVERT MILLISECONDS TO MONTHS.\n");
        printf("3. CONVERT MILLISECONDS TO WEEKS.\n");
        printf("4. CONVERT MILLISECONDS TO DAYS.\n");
        printf("5. CONVERT MILLISECONDS TO HOURS.\n");
        printf("6. CONVERT MILLISECONDS TO MINUTES.\n");
        printf("7. CONVERT MILLISECONDS TO SECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick34);
        if (pick34 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM TIME IN MILLISECONDS TO YEARS.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 31556926000;
            printf("\nTIME = %.15lf YEARS\n", result);
            break;
        }
        else if (pick34 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MILLISECONDS TO MONTHS.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 2629800000;
            printf("\nTIME = %.15lf MONTHS\n", result);
            break;
        }
        else if (pick34 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MILLISECONDS TO WEEKS.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 604800000;
            printf("\nTIME = %.15lf WEEKS\n", result);
            break;
        }
        else if (pick34 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MILLISECONDS TO DAYS.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 86400000;
            printf("\nTIME = %.15lf DAYS\n", result);
            break;
        }
        else if (pick34 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MILLISECONDS TO HOURS.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 3600000;
            printf("\nTIME = %.15lf HOURS\n", result);
            break;
        }
        else if (pick34 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MILLISECONDS TO MINUTES.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 60000;
            printf("\nTIME = %.15lf MINUTES\n", result);
            break;
        }
        else if (pick34 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MILLISECONDS TO SECONDS.\n\n");
            printf("ENTER THE TIME IN MILLISECONDS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nTIME = %.15lf SECONDS\n", result);
            break;
        }
        else if (pick34 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick34 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection34);
        if (selection34 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection34 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection34 != 1 || selection34 != 0);
}
void years() { // DEFINED FUNCTION FOR CONVERSIONS OF YEARS
    int pick7, selection7;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN YEARS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT YEARS TO MONTHS.\n");
        printf("2. CONVERT YEARS TO WEEKS.\n");
        printf("3. CONVERT YEARS TO DAYS.\n");
        printf("4. CONVERT YEARS TO HOURS.\n");
        printf("5. CONVERT YEARS TO MINUTES.\n");
        printf("6. CONVERT YEARS TO SECONDS.\n");
        printf("7. CONVERT YEARS TO MILLISECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick7);
        if (pick7 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO MONTHS.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 12;
            printf("\nTIME = %.10lf MONTHS\n", result);
            break;
        }
        else if(pick7 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO WEEKS.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 52.1429;
            printf("\nTIME = %.10lf WEEKS\n", result);
            break;
        }
        else if (pick7 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO DAYS.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 365;
            printf("\nTIME = %.10lf DAYS\n", result);
            break;
        }
        else if (pick7 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO HOURS.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 8760;
            printf("\nTIME = %.10lf HOURS\n", result);
            break;
        }
        else if (pick7 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO MINUTES.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 525600;
            printf("\nTIME = %.10lf MINUTES\n", result);
            break;
        }
        else if (pick7 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO SECONDS.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 31556952;
            printf("\nTIME = %.10lf SECONDS\n", result);
            break;
        }
        else if (pick7 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM YEARS TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN YEARS = ");
            scanf("%lf", &number);
            result = number * 31556926000;
            printf("\nTIME = %.10lf MILLISECONDS\n", result);
            break;
        }
        else if (pick7 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick7 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection7);
        if (selection7 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection7 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection7 != 1 || selection7 != 0);
}
void months() { // DEFINED FUNCTION FOR CONVERSIONS OF MONTHS
    int pick8, selection8;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN MONTHS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MONTHS TO YEARS.\n");
        printf("2. CONVERT MONTHS TO WEEKS.\n");
        printf("3. CONVERT MONTHS TO DAYS.\n");
        printf("4. CONVERT MONTHS TO HOURS.\n");
        printf("5. CONVERT MONTHS TO MINUTES.\n");
        printf("6. CONVERT MONTHS TO SECONDS.\n");
        printf("7. CONVERT MONTHS TO MILLISECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick8);
        if (pick8 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO YEARS.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number / 12;
            printf("\nTIME = %.10lf MONTHS\n", result);
            break;
        }
        else if(pick8 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO WEEKS.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number * 4.34524;
            printf("\nTIME = %.10lf WEEKS\n", result);
            break;
        }
        else if (pick8 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO DAYS.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number * 30.4167;
            printf("\nTIME = %.10lf DAYS\n", result);
            break;
        }
        else if (pick8 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO HOURS.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number * 730.001;
            printf("\nTIME = %.10lf HOURS\n", result);
            break;
        }
        else if (pick8 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO MINUTES.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number * 43800;
            printf("\nTIME = %.10lf MINUTES\n", result);
            break;
        }
        else if (pick8 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO SECONDS.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number * 2629800;
            printf("\nTIME = %.10lf SECONDS\n", result);
            break;
        }
        else if (pick8 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MONTHS TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN MONTHS = ");
            scanf("%lf", &number);
            result = number * 2629800000;
            printf("\nTIME = %.10lf MILLISECONDS\n", result);
            break;
        }
        else if (pick8 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick8 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection8);
        if (selection8 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection8 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection8 != 1 || selection8 != 0);
}
void weeks() { // DEFINED FUNCTION FOR CONVERSIONS OF WEEKS
    int pick9, selection9;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN WEEKS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT WEEKS TO YEARS.\n");
        printf("2. CONVERT WEEKS TO MONTHS.\n");
        printf("3. CONVERT WEEKS TO DAYS. \n");
        printf("4. CONVERT WEEKS TO HOURS. \n");
        printf("5. CONVERT WEEKS TO MINUTES. \n");
        printf("6. CONVERT WEEKS TO SECONDS. \n");
        printf("7. CONVERT WEEKS TO MILLISECONDS\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick9);
        if (pick9 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO YEARS.\n\n");
            printf("ENTER THE TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number / 52.143;
            printf("\nTIME = %.15lf YEARS\n", result);
            break;
        }
        else if (pick9 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO MONTHS.\n\n");
            printf("ENTER TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number / 4.345;
            printf("\nTIME = %.15lf MONTHS\n", result);
            break;
        }
        else if (pick9 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO DAYS.\n\n");
            printf("ENTER TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number * 7;
            printf("\nTIME = %.15lf DAYS\n", result);
            break;
        }
        else if (pick9 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO HOURS.\n\n");
            printf("ENTER TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number * 168;
            printf("\nTIME = %.15lf HOURS\n", result);
            break;
        }
        else if (pick9 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO MINUTES.\n\n");
            printf("ENTER TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number * 10080;
            printf("\nTIME = %.15lf MINUTES\n", result);
            break;
        }
        else if (pick9 == 6) {
            system("Cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO SECONDS.\n\n");
            printf("ENTER TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number * 604800;
            printf("\nTIME = %.15lf SECONDS\n", result);
            break;
        }
        else if (pick9 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM WEEKS TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN WEEKS = ");
            scanf("%lf", &number);
            result = number * 604800000;
            printf("\nTIME = %.15lf MILLISECONDS\n", result);
            break;
        }
        else if (pick9 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick9 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection9);
        if (selection9 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection9 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection9 != 1 || selection9 != 0);
}
void days() { // DEFINED FUNCTION FOR CONVERSIONS OF DAYS
    int pick10, selection10;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN DAYS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n");
        printf("1. CONVERT DAYS TO YEARS.\n");
        printf("2. CONVERT DAYS TO MONTHS.\n");
        printf("3. CONVERT DAYS TO WEEKS. \n");
        printf("4. CONVERT DAYS TO HOURS. \n");
        printf("5. CONVERT DAYS TO MINUTES. \n");
        printf("6. CONVERT DAYS TO SECONDS. \n");
        printf("7. CONVERT DAYS TO MILLISECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick10);
        if (pick10 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO YEARS.\n\n");
            printf("ENTER THE TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number / 365;
            printf("\nTIME = %.15lf YEARS\n", result);
            break;
        }
        else if (pick10 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO MONTHS.\n\n");
            printf("ENTER TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number / 30.417;
            printf("\nTIME = %.15lf MONTHS\n", result);
            break;
        }
        else if (pick10 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO WEEKS.\n\n");
            printf("ENTER TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number / 7;
            printf("\nTIME = %.15lf WEEKS\n", result);
            break;
        }
        else if (pick10 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO HOURS.\n\n");
            printf("ENTER TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number * 24;
            printf("\nTIME = %.15lf HOURS\n", result);
            break;
        }
        else if (pick10 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO MINUTES.\n\n");
            printf("ENTER TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number * 1440;
            printf("\nTIME = %.15lf MINUTES\n", result);
            break;
        }
        else if (pick10 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO SECONDS.\n\n");
            printf("ENTER TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number * 86400;
            printf("\nTIME = %.15lf SECONDS\n", result);
            break;
        }
        else if (pick10 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM DAYS TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN DAYS = ");
            scanf("%lf", &number);
            result = number * 86400000;
            printf("\nTIME = %.15lf MILLISECONDS\n", result);
            break;
        }
        else if (pick10 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick10 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection10);
        if (selection10 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection10 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection10 != 1 || selection10 != 0);
}
void hours() { // DEFINED FUNCTION FOR CONVERSIONS OF HOURS
    int pick11, selection11;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN HOURS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT HOURS TO YEARS.\n");
        printf("2. CONVERT HOURS TO MONTHS.\n");
        printf("3. CONVERT HOURS TO WEEKS. \n");
        printf("4. CONVERT HOURS TO DAYS. \n");
        printf("5. CONVERT HOURS TO MINUTES. \n");
        printf("6. CONVERT HOURS TO SECONDS. \n");
        printf("7. CONVERT HOURS TO MILLISECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick11);
        if (pick11 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO YEARS.\n\n");
            printf("ENTER THE TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number / 8760;
            printf("\nTIME = %.15lf YEARS\n", result);
            break;
        }
        else if (pick11 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO MONTHS.\n\n");
            printf("ENTER TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number / 730;
            printf("\nTIME = %.15lf MONTHS\n", result);
            break;
        }
        else if (pick11 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO WEEKS.\n\n");
            printf("ENTER TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number / 168;
            printf("\nTIME = %.15lf WEEKS\n", result);
            break;
        }
        else if (pick11 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO DAYS.\n\n");
            printf("ENTER TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number / 24;
            printf("\nTIME = %.15lf DAYS\n", result);
            break;
        }
        else if (pick11 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO MINUTES.\n\n");
            printf("ENTER TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number * 60;
            printf("\nTIME = %.15lf MINUTES\n", result);
            break;
        }
        else if (pick11 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO SECONDS.\n\n");
            printf("ENTER TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number * 3600;
            printf("\nTIME = %.15lf SECONDS\n", result);
            break;
        }
        else if (pick11 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM HOURS TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN HOURS = ");
            scanf("%lf", &number);
            result = number * 3600000;
            printf("\nTIME = %.15lf MILLISECONDS\n", result);
            break;
        }
        else if (pick11 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick11 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection11);
        if (selection11 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection11 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection11 != 1 || selection11 != 0);
}
void minutes() { // DEFINED FUNCTION FOR CONVERSIONS OF MINUTES
    int pick12, selection12;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN MINUTES TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MINUTES TO YEARS.\n");
        printf("2. CONVERT MINUTES TO MONTHS.\n");
        printf("3. CONVERT MINUTES TO WEEKS. \n");
        printf("4. CONVERT MINUTES TO DAYS. \n");
        printf("5. CONVERT MINUTES TO HOURS. \n");
        printf("6. CONVERT MINUTES TO SECONDS. \n");
        printf("7. CONVERT MINUTES TO MILLISECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick12);
        if (pick12 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO YEARS.\n\n");
            printf("ENTER TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number / 525600;
            printf("\nTIME = %.15lf YEARS\n", result);
            break;
        }
        else if (pick12 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO MONTHS.\n\n");
            printf("ENTER THE TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number / 43800;
            printf("\nTIME = %.15lf MONTHS\n", result);
            break;
        }
        else if (pick12 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO WEEKS.\n\n");
            printf("ENTER TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number / 10080;
            printf("\nTIME = %.15lf WEEKS\n", result);
            break;
        }
        else if (pick12 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO DAYS.\n\n");
            printf("ENTER TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number / 1440;
            printf("\nTIME = %.15lf DAYS\n", result);
            break;
        }
        else if (pick12 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO HOURS.\n\n");
            printf("ENTER TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number / 60;
            printf("\nTIME = %.15lf HOURS\n", result);
            break;
        }
        else if (pick12 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO SECONDS.\n\n");
            printf("ENTER TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number * 60;
            printf("\nTIME = %.15lf SECONDS\n", result);
            break;
        }
        else if (pick12 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME FROM MINUTES TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN MINUTES = ");
            scanf("%lf", &number);
            result = number * 60000;
            printf("\nTIME = %.15lf MILLISECONDS\n", result);
            break;
        }
        else if (pick12 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick12 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection12);
        if (selection12 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection12 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection12 != 1 || selection12 != 0);
}
void seconds() { // DEFINED FUNCTION FOR CONVERSIONS OF SECONDS
    int pick13, selection13;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT TIME IN SECONDS TO OTHER QUANTITIES OF TIME!\n\n");
    printf("PRESS ENTR TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT SECONDS TO YEARS.\n");
        printf("2. CONVERT SECONDS TO MONTHS.\n");
        printf("3. CONVERT SECONDS TO WEEKS. \n");
        printf("4. CONVERT SECONDS TO DAYS. \n");
        printf("5. CONVERT SECONDS TO HOURS. \n");
        printf("6. CONVERT SECONDS TO MINUTES. \n");
        printf("7. CONVERT SECONDS TO MILLISECONDS.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick13);
        if (pick13 == 1) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO YEARS.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number / 31536000;
            printf("\nTIME = %.15lf YEARS\n", result);
            break;
        }
        else if (pick13 == 2) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO MONTHS.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number / 2628002.88;
            printf("\nTIME = %.15lf MONTHS\n", result);
            break;
        }
        else if (pick13 == 3) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO WEEKS.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number / 604800;
            printf("\nTIME = %.15lf WEEKS\n", result);
            break;
        }
        else if (pick13 == 4) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO DAYS.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number / 86400;
            printf("\nTIME = %.15lf DAYS\n", result);
            break;
        }
        else if (pick13 == 5) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO HOURS.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number / 3600;
            printf("\nTIME = %.15lf HOURS\n", result);
            break;
        }
        else if (pick13 == 6) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO MINUTES.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number / 60;
            printf("\nTIME = %.15lf MINUTES\n", result);
            break;
        }
        else if (pick13 == 7) {
            system("cls");
            printf("\nCONVERSION OF TIME IN SECONDS TO MILLISECONDS.\n\n");
            printf("ENTER TIME IN SECONDS = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nTIME = %.15lf MILLISECONDS\n", result);
            break;
        }
        else if (pick13 == 8) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick13 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection13);
        if (selection13 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection13 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection13 != 1 || selection13 != 0);
}
void temperature() { // DEFINED FUNCTION FOR TEMPERATURE CONVERTER
    int choice2;
    system("cls");
    printf("\nYOU HAVE CHOSEN TEMPERATURE CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF DEGREE CELSIUS.\n");
        printf("2. CONVERSIONS OF DEGREE FAHRENHEIT. \n");
        printf("3. CONVERSIONS OF KELVIN. \n");
        printf("4. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice2);
        if (choice2 == 1) {
            celsius(); // FUNCTION CALL FOR CONVERTING DEGREE CELSIUS TO OTHER UNITS
            break;
        }
        else if (choice2 == 2) {
            fahrenheit(); // FUNCTION CALL FOR CONVERTING DEGREE FAHRENHEIT TO OTHER UNITS
            break;
        }
        else if (choice2 == 3) {
            kelvin(); // FUNCTION CALL FOR CONVERTING KELVIN TO OTHER UNITS
            break;
        }
        else if (choice2 == 4) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice2 != 4);
}
void celsius() { // DEFINED FUNCTION FOR CONVERSIONS OF DEGREE CELSIUS
    int pick14, selection14;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN CELSIUS CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); //PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT DEGREE CELSIUS TO DEGREE FAHRENHEIT.\n");
        printf("2. CONVERT DEGREE CELSIUS TO KELVIN.\n");
        printf("3. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick14);
        if (pick14 == 1) {
            system("cls");
            printf("\nCONVERSION OF TEMPERATURE FROM DEGREE CELSIUS TO DEGREE FAHRENHEIT.\n\n");
            printf("ENTER THE TEMPERATURE IN DEGREE CELSIUS = ");
            scanf("%lf", &number);
            result = (number * 1.8) + 32;
            printf("\nTEMPERATURE = %.15lf DEGREE FAHRENHEIT\n", result);
            break;
        }
        else if (pick14 == 2) {
            system("cls");
            printf("\nCONVERSION OF TEMPERATURE FROM DEGREE CELSIUS TO KELVIN.\n\n");
            printf("ENTER THE TEMPERATURE IN DEGREE CELSIUS = ");
            scanf("%lf", &number);
            result = number + 273.15;
            printf("\nTEMPERATURE = %.15lf KELVIN\n", result);
            break;
        }
        else if (pick14 == 3) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE PERSON WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick14 != 3);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection14);
        if (selection14 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection14 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection14 != 1 || selection14 != 0);
}
void fahrenheit() { // DEFINED FUNCTION FOR CONVERSIONS OF DEGREE FAHRENHEIT
    int pick15, selection15;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN FAHRENHEIT CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n");
        printf("1. CONVERT DEGREE FAHRENHEIT TO DEGREE CELSIUS  .\n");
        printf("2. CONVERT DEGREE FAHRENHEIT TO KELVIN.\n");
        printf("3. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick15);
        if (pick15 == 1) {
            system("cls");
            printf("\nCONVERSION OF TEMPERATURE FROM DEGREE FAHRENHEIT TO DEGREE CELSIUS.\n\n");
            printf("ENTER THE TEMPERATURE IN DEGREE FAHRENHEIT = ");
            scanf("%lf", &number);
            result = (number - 32) * 0.556;
            printf("\nTEMPERATURE = %.15lf DEGREE CELSIUS\n", result);
            break;
        }
        else if (pick15 == 2) {
            system("cls");
            printf("\nCONVERSION OF TEMPERATURE FROM DEGREE FAHRENHEIT TO KELVIN.\n\n");
            printf("ENTER THE TEMPERATURE IN DEGREE FAHRENHEIT = ");
            scanf("%lf", &number);
            result = (number - 32) * 0.556 + 273.15;
            printf("\nTEMPERATURE = %.15lf KELVIN\n", result);
            break;
        }
        else if (pick15 == 3) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick15 != 3);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection15);
        if (selection15 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection15 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection15 != 1 || selection15 != 0);
}
void kelvin() { // DEFINED FUNCTION FOR CONVERSIONS OF KELVIN
    int pick16, selection16;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN KELVIN CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************");
        printf("\nENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT KELVIN TO DEGREE CELSIUS.\n");
        printf("2. CONVERT KELVIN TO DEGREE FAHRENHEIT.\n");
        printf("3. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick16);
        if (pick16 == 1) {
            system("cls");
            printf("\nCONVERSION OF TEMPERATURE FROM KELVIN TO DEGREE CELSIUS.\n\n");
            printf("ENTER THE TEMPERATURE IN KELVIN = ");
            scanf("%lf", &number);
            result = number - 273.15;
            printf("\nTEMPERATURE = %.15lf DEGREE CELSIUS\n", result);
            break;
        }
        else if (pick16 == 2) {
            system("cls");
            printf("\nCONVERSION OF TEMPERATURE FROM KELVIN TO DEGREE FAHRENHEIT.\n\n");
            printf("ENTER THE TEMPERATURE IN KELVIN = ");
            scanf("%lf", &number);
            result = (number - 273.15) * 1.8 + 32;
            printf("\nTEMPERATURE = %.15lf DEGREE FAHRENHEIT\n", result);
            break;
        }
        else if (pick16 == 3) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick16 != 3);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection16);
        if (selection16 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection16 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection16 != 1 || selection16 != 0);
}
void frequency() { // DEFINED FUNCTION FOR FREQUENCY CONVERTER
    int choice3;
    system("cls");
    printf("\nYOU HAVE CHOSEN FREQUENCY CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF GIGAHERTZ.\n");
        printf("2. CONVERSIONS OF MEGAHERTZ.\n");
        printf("3. CONVERSIONS OF KILOHERTZ.\n");
        printf("4. CONVERSIONS OF HERTZ.\n");
        printf("5. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice3);
        if (choice3 == 1) {
            gigahertz(); // FUNCTION CALL FOR CONVERTING GIGAHERTZ TO OTHER UNITS
            break;
        }
        else if (choice3 == 2) {
            megahertz(); // FUNCTION CALL FOR CONVERTING MEGAHERTZ TO OTHER UNITS
            break;
        }
        else if (choice3 == 3) {
            kilohertz(); // FUNCTION CALL FOR CONVERTING KILOHERTZ TO OTHER UNITS
            break;
        }
        else if (choice3 == 4) {
            hertz(); // FUNCTION CALL FOR CONVERTING HERTZ TO OTHER UNITS
            break;
        }
        else if (choice3 == 5) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG NUMBER ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice3 != 5);
}
void gigahertz() { // DEFINED FUNCTION FOR CONVERSIONS OF GIGAHERTZ
    int pick17, selection17;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT FREQUENCY IN GIGAHERTZ TO OTHER QUANTITIES OF FREQUENCY!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT GIGAHERTZ TO MEGAHERTZ.\n");
        printf("2. CONVERT GIGAHERTZ TO KILOHERTZ.\n");
        printf("3. CONVERT GIGAHERTZ TO HERTZ.\n");
        printf("4. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick17);
        if (pick17 == 1) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM GIGAHERTZ TO MEGAHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN GIGAHERTZ = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nFREQUENCY = %.15lf MEGAHERTZ\n", result);
            break;
        }
        else if (pick17 == 2) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM GIGAHERTZ TO KILOHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN GIGAHERTZ = ");
            scanf("%lf", &number);
            result = number * 1000000;
            printf("\nFREQUENCY = %.15lf KILOHERTZ\n", result);
            break;
        }
        else if (pick17 == 3) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM GIGAHERTZ TO HERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN GIGAHERTZ = ");
            scanf("%lf", &number);
            result = number * 1000000000;
            printf("\nFREQUENCY = %.15lf HERTZ\n", result);
            break;
        }
        else if (pick17 == 4) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick17 != 4);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection17);
        if (selection17 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection17 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection17 != 1 || selection17 != 0);
}
void megahertz() { // DEFINED FUNCTION FOR CONVERSIONS OF MEGAHERTZ
    int pick18, selection18;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT FREQUENCY IN MEGAHERTZ TO \nOTHER QUANTITIES OF FREQUENCY!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MEGAHERTZ TO GIGAHERTZ.\n");
        printf("2. CONVERT MEGAHERTZ TO KILOHERTZ.\n");
        printf("3. CONVERT MEGAHERTZ TO HERTZ.\n");
        printf("4. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick18);
        if (pick18 == 1) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM MEGAHERTZ TO GIGAHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN MEGAHERTZ = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nFREQUENCY = %.15lf GIGAHERTZ\n", result);
            break;
        }
        else if (pick18 == 2) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM MEGAHERTZ TO KILOHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN MEGAHERTZ = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nFREQUENCY = %.15lf KILOHERTZ\n", result);
            break;
        }
        else if (pick18 == 3) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM MEGAHERTZ TO HERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN MEGAHERTZ = ");
            scanf("%lf", &number);
            result = number * 1000000;
            printf("\nFREQUENCY = %.15lf HERTZ\n", result);
            break;
        }
        else if (pick18 == 4) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick18 != 4);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection18);
        if (selection18 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection18 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection18 != 1 || selection18 != 0);
}
void kilohertz() { // DEFINED FUNCTION FOR CONVERSIONS OF KILOHERTZ
    int pick19, selection19;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT FREQUENCY IN KILOHERTZ TO\n OTHER QUANTITIES OF FREQUENCY!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n");
        printf("1. CONVERT KILOHERTZ TO GIGAHERTZ.\n");
        printf("2. CONVERT KILOHERTZ TO MEGAHERTZ.\n");
        printf("3. CONVERT KILOHERTZ TO HERTZ.\n");
        printf("4. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick19);
        if (pick19 == 1) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM KILOHERTZ TO GIGAHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN KILOHERTZ = ");
            scanf("%lf", &number);
            result = number / 1000000;
            printf("\nFREQUENCY = %.15lf GIGAHERTZ\n", result);
            break;
        }
        else if (pick19 == 2) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM KILOHERTZ TO MEGAHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN KILOHERTZ = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nFREQUENCY = %.15lf MEGAHERTZ\n", result);
            break;
        }
        else if (pick19 == 3) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM KILOHERTZ TO HERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN KILOHERTZ = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nFREQUENCY = %.15lf HERTZ\n", result);
            break;
        }
        else if (pick19 == 4) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE PERSON WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick19 != 4);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OT NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection19);
        if (selection19 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection19 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection19 != 1 || selection19 != 0);
}
void hertz() { // DEFINED FUNCTION FOR CONVERSIONS OF HERTZ
    int pick20, selection20;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT FREQUENCY IN HERTZ TO\n OTHER QUANTITIES OF FREQUENCY!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT HERTZ TO GIGAHERTZ.\n");
        printf("2. CONVERT HERTZ TO MEGAHERTZ.\n");
        printf("3. CONVERT HERTZ TO KILOHERTZ.\n");
        printf("4. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick20);
        if (pick20 == 1) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM HERTZ TO GIGAHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN HERTZ = ");
            scanf("%lf", &number);
            result = number / 1000000000;
            printf("\nFREQUENCY = %.15lf GIGAHERTZ\n", result);
            break;
        }
        else if (pick20 == 2) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM HERTZ TO MEGAHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN HERTZ = ");
            scanf("%lf", &number);
            result = number / 1000000;
            printf("\nFREQUENCY = %.15lf MEGAHERTZ\n", result);
            break;
        }
        else if (pick20 == 3) {
            system("cls");
            printf("\nCONVERSION OF FREQUENCY FROM HERTZ TO KILOHERTZ.\n\n");
            printf("ENTER THE FREQUENCY IN HERTZ = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nFREQUENCY = %.15lf KILOHERTZ\n", result);
            break;
        }
        else if (pick20 == 4) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick20 != 4);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection20);
        if (selection20 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection20 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection20 != 1 || selection20 != 0);
}
void speed() { // DEFINED FUNCTION FOR SPEED CONVERTER
    int choice4;
    system("cls");
    printf("\nYOU HAVE CHOSEN SPEED CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF KILOMETERS PER HOUR.\n");
        printf("2. CONVERSIONS OF METERS PER SECOND.\n");
        printf("3. CONVERSIONS OF MILES PER HOUR.\n");
        printf("4. CONVERSIONS OF KNOTS.\n");
        printf("5. CONVERSIONS OF FEET PER SECOND.\n");
        printf("6. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice4);
        if (choice4 == 1) {
            kilometers_per_hour(); // FUNCTION CALL FOR CONVERTING KILOMETERS PER HOUR TO OTHER UNITS
            break;
        }
        else if (choice4 == 2) {
            meters_per_second(); // FUNCTION CALL FOR CONVERTING METERS PER SECOND TO OTHER UNITS
            break;
        }
        else if (choice4 == 3) {
            miles_per_hour(); // FUNCTION CALL FOR CONVERTING MILES PER HOUR TO OTHER UNITS
            break;
        }
        else if (choice4 == 4) {
            knots(); // FUNCTION CALL FOR CONVERTING KNOTS TO OTHER UNITS
            break;
        }
        else if (choice4 == 5) {
            foot_per_second(); // FUNCTION CALL FOR CONVERTING FOOT PER SECOND TO OTHER UNITS
            break;
        }
        else if (choice4 == 6) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice4 != 6);
}
void kilometers_per_hour() { // DEFINED FUNCTION FOR CONVERSIONS OF KILOMETERS PER HOUR
    int pick21, selection21;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE SPEED IN KILOMETERS PER HOUR TO\n OTHER QUANTITIES OF SPEED!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE OPTIONS GIVEN BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT THE SPEED IN KILOMETERS PER HOUR TO METERS PER SECOND.\n");
        printf("2. CONVERT THE SPEED IN KILOMETERS PER HOUR TO MILES PER HOUR.\n");
        printf("3. CONVERT THE SPEED IN KILOMETERS PER HOUR TO KNOTS.\n");
        printf("4. CONVERT THE SPEED IN KILOMETERS PER HOUR TO FOOT PER SECOND.\n");
        printf("5. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick21);
        if (pick21 == 1) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KILOMETERS PER HOUR TO METERS PER SECOND.\n\n");
            printf("ENTER THE SPEED IN KILOMETERS PER HOUR = ");
            scanf("%lf", &number);
            result = number / 3.6;
            printf("\nSPEED = %.15lf METERS PER SECOND\n", result);
            break;
        }
        else if (pick21 == 2) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KILOMETERS PER HOUR TO MILES PER HOUR.\n\n");
            printf("ENTER THE SPEED IN KILOMETERS PER HOUR = ");
            scanf("%lf", &number);
            result = number / 1.609;
            printf("\nSPEED = %.15lf MILES PER HOUR\n", result);
            break;
        }
        else if (pick21 == 3) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KILOMETERS PER HOUR TO KNOTS.\n\n");
            printf("ENTER THE SPEED IN KILOMETERS PER HOUR = ");
            scanf("%lf", &number);
            result = number / 1.852;
            printf("\nSPEED = %.15lf KNOTS\n", result);
            break;
        }
        else if (pick21 == 4) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KILOMETERS PER HOUR TO FEET PER SECOND.\n\n");
            printf("ENTER THE SPEED IN KILOMETERS PER HOUR = ");
            scanf("%lf", &number);
            result = number / 1.097;
            printf("\nSPEED = %.15lf FEET PER SECOND\n", result);
            break;
        }
        else if (pick21 == 5) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick21 != 5);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection21);
        if (selection21 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection21 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection21 != 1 || selection21 != 0);
}
void meters_per_second() { // DEFINED FUNCTION FOR CONVERSIONS OF METERS PER SECOND
    int pick22, selection22;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE SPEED IN METERS PER SECOND TO\n OTHER QUANTITIES OF SPEED!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE OPTIONS GIVEN BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT THE SPEED IN METERS PER SECOND TO KILOMETERS PER HOUR.\n");
        printf("2. CONVERT THE SPEED IN METERS PER SECOND TO MILES PER HOUR.\n");
        printf("3. CONVERT THE SPEED IN METERS PER SECOND TO KNOTS.\n");
        printf("4. CONVERT THE SPEED IN METERS PER SECOND TO FEET PER SECOND.\n");
        printf("5. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick22);
        if (pick22 == 1) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM METERS PER SECOND TO KILOMETERS PER HOUR.\n\n");
            printf("ENTER THE SPEED IN METERS PER SECOND = ");
            scanf("%lf", &number);
            result = number * 3.6;
            printf("\nSPEED = %.15lf KILOMETERS PER HOUR\n", result);
            break;
        }
        else if (pick22 == 2) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM METERS PER SECOND TO MILES PER HOUR.\n\n");
            printf("ENTER THE SPEED IN METERS PER SECOND = ");
            scanf("%lf", &number);
            result = number * 2.23694;
            printf("\nSPEED = %.15lf MILES PER HOUR\n", result);
            break;
        }
        else if (pick22 == 3) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM METERS PER SECOND TO KNOTS.\n\n");
            printf("ENTER THE SPEED IN METERS PER SECOND = ");
            scanf("%lf", &number);
            result = number * 1.94384;
            printf("\nSPEED = %.15lf KNOTS\n", result);
            break;
        }
        else if (pick22 == 4) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM METERS PER SECOND TO FEET PER SECOND.\n\n");
            printf("ENTER THE SPEED IN METERS PER SECOND = ");
            scanf("%lf", &number);
            result = number * 3.28084;
            printf("\nSPEED = %.15lf FEET PER SECOND\n", result);
            break;
        }
        else if (pick22 == 5) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick22 != 5);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection22);
        if (selection22 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection22 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection22 != 1 || selection22 != 0);
}
void miles_per_hour() { // DEFINED FUNCTION FOR CONVERSIONS OF MILES PER HOUR
    int pick23, selection23;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE SPEED IN MILES PER HOUR TO \nOTHER QUANTITIES OF SPEED!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR DESIRED CONVERSION FROM THE OPTIONS GIVEN BELOW!\n\n"); 
        printf("1. CONVERT THE SPEED IN MILES PER HOUR TO KILOMETERS PER HOUR.\n");
        printf("2. CONVERT THE SPEED IN MILES PER HOUR TO METERS PER SECOND.\n");
        printf("3. CONVERT THE SPEED IN MILES PER HOUR TO KNOTS.\n");
        printf("4. CONVERT THE SPEED IN MILES PER HOUR TO FEET PER SECOND.\n");;
        printf("5. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick23);
        if (pick23 == 1) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM MILES PER HOUR TO KILOMETERS PER HOUR.\n\n");
            printf("ENTER THE SPEED IN MILES PER HOUR = ");
            scanf("%lf", &number);
            result = number * 1.60934;
            printf("\nSPEED = %.15lf KILOMETERS PER HOUR\n", result);
            break;
        }
        else if (pick23 == 2) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM MILES PER HOUR TO METERS PER SECOND.\n\n");
            printf("ENTER THE SPEED IN MILES PER HOUR = ");
            scanf("%lf", &number);
            result = number / 2.237;
            printf("\nSPEED = %.15lf METERS PER SECOND\n", result);
            break;
        }
        else if (pick23 == 3) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM MILES PER HOUR TO KNOTS.\n\n");
            printf("ENTER THE SPEED IN MILES PER HOUR = ");
            scanf("%lf", &number);
            result = number / 1.151;
            printf("\nSPEED = %.15lf KNOTS\n", result);
            break;
        }
        else if (pick23 == 4) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM MILES PER HOUR TO FEET PER SECOND.\n\n");
            printf("ENTER THE SPEED IN MILES PER HOUR = ");
            scanf("%lf", &number);
            result = number * 1.46667;
            printf("\nSPEED = %.15lf FEET PER SECOND\n", result);
            break;
        }
        else if (pick23 == 5) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick23 != 5);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection23);
        if (selection23 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection23 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection23 != 1 || selection23 != 0);
}
void knots() { // DEFINED FUNCTION FOR CONVERSIONS OF KNOTS
    int pick24, selection24;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE SPEED IN KNOTS TO \nOTHER QUANTITIES OF SPEED!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR DESIRED CONVERSION FROM THE OPTIONS GIVEN BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT THE SPEED IN KNOTS TO KILOMETERS PER HOUR.\n");
        printf("2. CONVERT THE SPEED IN KNOTS TO METERS PER SECOND.\n");
        printf("3. CONVERT THE SPEED IN KNOTS TO MILES PER HOUR.\n");
        printf("4. CONVERT THE SPEED IN KNOTS TO FEET PER SECOND.\n");
        printf("5. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick24);
        if (pick24 == 1) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KNOTS TO KILOMETERS PER HOUR.\n\n");
            printf("ENTER THE SPEED IN KNOTS = ");
            scanf("%lf", &number);
            result = number * 1.852;
            printf("\nSPEED = %.15lf KILOMETERS PER HOUR\n", result);
            break;
        }
        else if (pick24 == 2) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KNOTS TO METERS PER SECOND.\n\n");
            printf("ENTER THE SPEED IN KNOTS = ");
            scanf("%lf", &number);
            result = number / 1.944;
            printf("\nSPEED = %.15lf METERS PER SECOND\n", result);
            break;
        }
        else if (pick24 == 3) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KNOTS TO MILES PER HOUR.\n\n");
            printf("ENTER THE SPEED IN KNOTS = ");
            scanf("%lf", &number);
            result = number * 1.15078;
            printf("\nSPEED = %.15lf MILES PER HOUR\n", result);
            break;
        }
        else if (pick24 == 4) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM KNOTS TO FEET PER SECOND.\n\n");
            printf("ENTER THE SPEED IN KNOTS = ");
            scanf("%lf", &number);
            result = number * 1.68781;
            printf("\nSPEED = %.15lf FEET PER SECOND\n", result);
            break;
        }
        else if (pick24 == 5) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick24 != 5);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection24);
        if (selection24 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection24 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection24 != 1 || selection24 != 0);
}
void foot_per_second() { // DEFINED FUNCTION FOR CONVERSIONS OF FOOT PER SECOND
    int pick25, selection25;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE FEET PER SECOND TO \nOTHER QUANTITIES OF SPEED!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR DESIRED CONVERSION FROM THE OPTIONS GIVEN BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT THE SPEED IN FEET PER SECOND TO KILOMETERS PER HOUR.\n");
        printf("2. CONVERT THE SPEED IN FEET PER SECOND TO METERS PER SECOND.\n");
        printf("3. CONVERT THE SPEED IN FEET PER SECOND TO MILES PER HOUR.\n");
        printf("4. CONVERT THE SPEED IN FEET PER SECOND TO KNOTS.\n");
        printf("5. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick25);
        if (pick25 == 1) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM FEET PER SECOND TO KILOMETERS PER HOUR.\n\n");
            printf("ENTER THE SPEED IN FOOT PER SECOND = ");
            scanf("%lf", &number);
            result = number * 1.09728;
            printf("\nSPEED = %.15lf KILOMETERS PER HOUR\n", result);
            break;
        }
        else if (pick25 == 2) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM FEET PER SECOND TO METERS PER SECOND.\n\n");
            printf("ENTER THE SPEED IN FOOT PER SECOND = ");
            scanf("%lf", &number);
            result = number / 3.281;
            printf("\nSPEED = %.15lf METERS PER SECOND\n", result);
            break;
        }
        else if (pick25 == 3) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM FEET PER SECOND TO MILES PER HOUR.\n\n");
            printf("ENTER THE SPEED IN FOOT PER SECOND = ");
            scanf("%lf", &number);
            result = number / 1.467;
            printf("\nSPEED = %.15lf MILES PER HOUR\n", result);
            break;
        }
        else if (pick25 == 4) {
            system("cls");
            printf("\nCONVERSION OF SPEED FROM FEET PER SECOND TO KNOTS.\n\n");
            printf("ENTER THE SPEED IN FOOT PER SECOND = ");
            scanf("%lf", &number);
            result = number / 1.688;
            printf("\nSPEED = %.15lf KNOTS\n", result);
            break;
        }
        else if (pick25 == 5) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick25 != 5);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection25);
        if (selection25 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection25 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection25 != 1 || selection25 != 0);
}
void data_storage() { // DEFINED STORAGE FOR DATA STORAGE CONVERTER
    int choice5;
    system("cls");
    printf("\nYOU HAVE CHOSEN DATA STORAGE CONVERTER!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR DESIRED CONVERSION FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF PETABYTE.\n");
        printf("2. CONVERSIONS OF TERABYTE.\n");
        printf("3. CONVERSIONS OF GIGABYTE.\n");
        printf("4. CONVERSIONS OF MEGABYTE.\n");
        printf("5. CONVERSIONS OF KILOBYTE.\n");
        printf("6. CONVERSIONS BYTE.\n");
        printf("7. CONVERSIONS BIT.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice5);
        if (choice5 == 1) {
            petabytes(); // FUNCTION CALL FOR CONVERTING PETABYTES TO OTHER UNITS
            break;
        }
        else if (choice5 == 2) {
            terabytes(); // FUNCTION CALL FOR CONVERTING TERABYTES TO OTHER UNITS
            break;
        }
        else if (choice5 == 3) {
            gigabytes(); // FUNCTION CALL FOR CONVERTING GIGABYTES TO OTHER UNITS
            break;
        }
        else if (choice5 == 4) {
            megabytes(); // FUNCTION CALL FOR CONVERTING MEGABYTES TO OTHER UNITS
            break;
        }
        else if (choice5 == 5) {
            kilobytes(); // FUNCTION CALL FOR CONVERTING KILOBYTES TO OTHER UNITS
            break;
        }
        else if (choice5 == 6) {
            bytes(); // FUNCTION CALL FOR CONVERTING BYTES TO OTHER UNITS
            break;
        }
        else if (choice5 = 7) {
            bits(); // FUNCTION CALL FOR CONVERTING BITS TO OTHER UNITS
            break;
        }
        else if (choice5 == 8) {system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice5 != 8);
}
void petabytes() { // DEFINED FUNCTION FOR CONVERSIONS OF PETABYTES
    int pick26, selection26;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN PETABYTES TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT PETABYTES TO TERABYTES.\n");
        printf("2. CONVERT PETABYTES TO GIGABYTES.\n");
        printf("3. CONVERT PETABYTES TO MEGABYTES.\n");
        printf("4. CONVERT PETABYTES TO KILOBYTES.\n");
        printf("5. CONVERT PETABYTES TO BYTES.\n");
        printf("6. CONVERT PETABYTES TO BITS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick26);
        if (pick26 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM PETABYTES TO TERABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN PETABYTES = ");
            scanf("%lf", &number);
            result = number * 1024;
            printf("\nSIZE = %.15lf TERABYTES\n", result);
            break;
        }
        else if (pick26 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM PETABYTES TO GIGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN PETABYTES = ");
            scanf("%lf", &number);
            result = number * 1048576;
            printf("\nSIZE = %.15lf GIGABYTES\n", result);
            break;
        }
        else if (pick26 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM PETABYTES TO MEGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN PETABYTES = ");
            scanf("%lf", &number);
            result = number * 1073741824;
            printf("\nSIZE = %.15lf MEGABYTES\n", result);
            break;
        }
        else if (pick26 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM PETABYTES TO KILOBYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN PETABYTES = ");
            scanf("%lf", &number);
            result = number * 1099511627776;
            printf("\nSIZE = %.15lf KILOBYTES\n", result);
            break;
        }
        else if (pick26 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM PETABYTES TO BYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN PETABYTES = ");
            scanf("%lf", &number);
            result = number * 1125899906842580;
            printf("\nSIZE = %.15lf BYTES\n", result);
            break;
        }
        else if (pick26 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM PETABYTES TO BITS.\n\n");
            printf("ENTER THE SIZE OF DATA IN PETABYTES = ");
            scanf("%lf", &number);
            result = number * 9007199254740640;
            printf("\nSIZE = %.15lf BITS\n", result);
            break;
        }
        else if (pick26 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick26 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection26);
        if (selection26 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection26 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection26 != 1 || selection26 != 0);
}
void terabytes() { // DEFINED FUNCTION FOR CONVERSIONS OF TERABYTES
    int pick27, selection27;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN TERABYTES TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT TERABYTES TO PETABYTES.\n");
        printf("2. CONVERT TERABYTES TO GIGABYTES.\n");
        printf("3. CONVERT TERABYTES TO MEGABYTES.\n");
        printf("4. CONVERT TERABYTES TO KILOBYTES.\n");
        printf("5. CONVERT TERABYTES TO BYTES.\n");
        printf("6. CONVERT TERABYTES TO BITS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick27);
        if (pick27 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM TERABYTES TO PETABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN TERABYTES = ");
            scanf("%lf", &number);
            result = number / 1024;
            printf("\nSIZE = %.15lf PETABYTES\n", result);
            break;
        }
        else if (pick27 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM TERABYTES TO GIGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN TERABYTES = ");
            scanf("%lf", &number);
            result = number * 1024;
            printf("\nSIZE = %.15lf GIGABYTES\n", result);
            break;
        }
        else if (pick27 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM TERABYTES TO MEGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN TERABYTES = ");
            scanf("%lf", &number);
            result = number * 1048576;
            printf("\nSIZE = %.15lf MEGABYTES\n", result);
            break;
        }
        else if (pick27 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM TERABYTES TO KILOBYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN TERABYTES = ");
            scanf("%lf", &number);
            result = number * 1073741824;
            printf("\nSIZE = %.15lf KILOBYTES\n", result);
            break;
        }
        else if (pick27 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM TERABYTES TO BYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN TERABYTES = ");
            scanf("%lf", &number);
            result = number * 1099511627776;
            printf("\nSIZE = %.15lf BYTES\n", result);
            break;
        }
        else if (pick27 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM TERABYTES TO BITS.\n\n");
            printf("ENTER THE SIZE OF DATA IN TERABYTES = ");
            scanf("%lf", &number);
            result = number * 8796093022208;
            printf("\nSIZE = %.15lf BITS\n", result);
            break;
        }
        else if (pick27 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick27 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection27);
        if (selection27 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection27 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection27 != 1 || selection27 != 0);
}
void gigabytes() { // DEFINED FUNCTION FOR CONVERSIONS OF GIGABYTES
    int pick28, selection28;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN GIGABYTES TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT GIGABYTES TO PETABYTES.\n");
        printf("2. CONVERT GIGABYTES TO TERABYTES.\n");
        printf("3. CONVERT GIGABYTES TO MEGABYTES.\n");
        printf("4. CONVERT GIGABYTES TO KILOBYTES.\n");
        printf("5. CONVERT GIGABYTES TO BYTES.\n");
        printf("6. CONVERT GIGABYTES TO BITS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick28);
        if (pick28 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM GIGABYTES TO PETABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN GIGABYTES = ");
            scanf("%lf", &number);
            result = number / 1048576;
            printf("\nSIZE = %.15lf PETABYTES\n", result);
            break;
        }
        else if (pick28 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM GIGABYTES TO TERABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN GIGABYTES = ");
            scanf("%lf", &number);
            result = number / 1024;
            printf("\nSIZE = %.15lf TERABYTES\n", result);
            break;
        }
        else if (pick28 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM GIGABYTES TO MEGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN GIGABYTES = ");
            scanf("%lf", &number);
            result = number * 1024;
            printf("\nSIZE = %.15lf MEGABYTES\n", result);
            break;
        }
        else if (pick28 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM GIGABYTES TO KILOBYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN GIGABYTES = ");
            scanf("%lf", &number);
            result = number * 1048576;
            printf("\nSIZE = %.15lf KILOBYTES\n", result);
            break;
        }
        else if (pick28 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM GIGABYTES TO BYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN GIGABYTES = ");
            scanf("%lf", &number);
            result = number * 1073741824;
            printf("\nSIZE = %.15lf BYTES\n", result);
            break;
        }
        else if (pick28 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM GIGABYTES TO BITS.\n\n");
            printf("ENTER THE SIZE OF DATA IN GIGABYTES = ");
            scanf("%lf", &number);
            result = number * 8589934592;
            printf("\nSIZE = %.15lf BITS\n", result);
            break;
        }
        else if (pick28 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick28 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection28);
        if (selection28 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection28 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection28 != 1 || selection28 != 0);
}
void megabytes() { // DEFINED FUNCTION FOR CONVERSIONS OF MEGABYTES
    int pick29, selection29;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN MEGABYTES TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MEGABYTES TO PETABYTES.\n");
        printf("2. CONVERT MEGABYTES TO TERABYTES.\n");
        printf("3. CONVERT MEGABYTES TO GIGABYTES.\n");
        printf("4. CONVERT MEGABYTES TO KILOBYTES.\n");
        printf("5. CONVERT MEGABYTES TO BYTES.\n");
        printf("6. CONVERT MEGABYTES TO BITS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick29);
        if (pick29 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM MEGABYTES TO PETABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN MEGABYTES = ");
            scanf("%lf", &number);
            result = number / 1073741824;
            printf("\nSIZE = %.20lf PETABYTES\n", result);
            break;
        }
        else if (pick29 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM MEGABYTES TO TERABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN MEGABYTES = ");
            scanf("%lf", &number);
            result = number / 1048576;
            printf("\nSIZE = %.20lf TERABYTES\n", result);
            break;
        }
        else if (pick29 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM MEGABYTES TO GIGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN MEGABYTES = ");
            scanf("%lf", &number);
            result = number / 1024;
            printf("\nSIZE = %.20lf GIGABYTES\n", result);
            break;
        }
        else if (pick29 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM MEGABYTES TO KILOBYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN MEGABYTES = ");
            scanf("%lf", &number);
            result = number * 1024;
            printf("\nSIZE = %.15lf KILOBYTES\n", result);
            break;
        }
        else if (pick29 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM MEGABYTES TO BYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN MEGABYTES = ");
            scanf("%lf", &number);
            result = number * 1048576;
            printf("\nSIZE = %.15lf BYTES\n", result);
            break;
        }
        else if (pick29 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM MEGABYTES TO BITS.\n\n");
            printf("ENTER THE SIZE OF DATA IN MEGABYTES = ");
            scanf("%lf", &number);
            result = number * 8388608;
            printf("\nSIZE = %.15lf BITS\n", result);
            break;
        }
        else if (pick29 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick29 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection29);
        if (selection29 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection29 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection29 != 1 || selection29 != 0);
}
void kilobytes() { // DEFINED FUNCTION FOR CONVERSIONS OF KILOBYTES
    int pick30, selection30;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN KILOBYTES TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT KILOBYTES TO PETABYTES.\n");
        printf("2. CONVERT KILOBYTES TO TERABYTES.\n");
        printf("3. CONVERT KILOBYTES TO GIGABYTES.\n");
        printf("4. CONVERT KILOBYTES TO MEGABYTES.\n");
        printf("5. CONVERT KILOBYTES TO BYTES.\n");
        printf("6. CONVERT KILOBYTES TO BITS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick30);
        if (pick30 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM KILOBYTES TO PETABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN KILOBYTES = ");
            scanf("%lf", &number);
            result = number / 1099511627776;
            printf("\nSIZE = %.25lf PETABYTES\n", result);
            break;
        }
        else if (pick30 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM KILOBYTES TO TERABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN KILOBYTES = ");
            scanf("%lf", &number);
            result = number / 1073741824;
            printf("\nSIZE = %.25lf TERABYTES\n", result);
            break;
        }
        else if (pick30 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM KILOBYTES TO GIGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN KILOBYTES = ");
            scanf("%lf", &number);
            result = number / 1048576;
            printf("\nSIZE = %.20lf GIGABYTES\n", result);
            break;
        }
        else if (pick30 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM KILOBYTES TO MEGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN KILOBYTES = ");
            scanf("%lf", &number);
            result = number / 1024;
            printf("\nSIZE = %.15lf MEGABYTES\n", result);
            break;
        }
        else if (pick30 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM KILOBYTES TO BYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN KILOBYTES = ");
            scanf("%lf", &number);
            result = number * 1024;
            printf("\nSIZE = %.15lf BYTES\n", result);
            break;
        }
        else if (pick30 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM KILOBYTES TO BITS.\n\n");
            printf("ENTER THE SIZE OF DATA IN KILOBYTES = ");
            scanf("%lf", &number);
            result = number * 8192;
            printf("\nSIZE = %.15lf BITS\n", result);
            break;
        }
        else if (pick30 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick30 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection30);
        if (selection30 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection30 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection30 != 1 || selection30 != 0);
}
void bytes() { // DEFINED FUNCTION FOR CONVERSIONS OF BYTES
    int pick31, selection31;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN BYTES TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT BYTES TO PETABYTES.\n");
        printf("2. CONVERT BYTES TO TERABYTES.\n");
        printf("3. CONVERT BYTES TO GIGABYTES.\n");
        printf("4. CONVERT BYTES TO MEGABYTES.\n");
        printf("5. CONVERT BYTES TO KILOBYTES.\n");
        printf("6. CONVERT BYTES TO BITS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick31);
        if (pick31 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BYTES TO PETABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BYTES = ");
            scanf("%lf", &number);
            result = number / 1125899906842580;
            printf("\nSIZE = %.30lf PETABYTES\n", result);
            break;
        }
        else if (pick31 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BYTES TO TERABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BYTES = ");
            scanf("%lf", &number);
            result = number / 1099511627776;
            printf("\nSIZE = %.25lf TERABYTES\n", result);
            break;
        }
        else if (pick31 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BYTES TO GIGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BYTES = ");
            scanf("%lf", &number);
            result = number / 1073741824;
            printf("\nSIZE = %.20lf GIGABYTES\n", result);
            break;
        }
        else if (pick31 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BYTES TO MEGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BYTES = ");
            scanf("%lf", &number);
            result = number / 1048576;
            printf("\nSIZE = %.15lf MEGABYTES\n", result);
            break;
        }
        else if (pick31 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BYTES TO KILOBYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BYTES = ");
            scanf("%lf", &number);
            result = number / 1024;
            printf("\nSIZE = %.15lf KILOBYTES\n", result);
            break;
        }
        else if (pick31 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BYTES TO BITS.\n\n");
            printf("ENTER THE SIZE OF DATA IN BYTES = ");
            scanf("%lf", &number);
            result = number * 8;
            printf("\nSIZE = %.15lf BITS\n", result);
            break;
        }
        else if (pick31 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick31 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection31);
        if (selection31 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
        }
        else if (selection31 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection31 != 1 || selection31 != 0);
}
void bits() { // DEFINED FUNCTION FOR CONVERSIONS OF BITS
    int pick32, selection32;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT THE DATA IN BITS TO \nOTHER QUANTITIES OF DATA STORAGE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT BITS TO PETABYTES.\n");
        printf("2. CONVERT BITS TO TERABYTES.\n");
        printf("3. CONVERT BITS TO GIGABYTES.\n");
        printf("4. CONVERT BITS TO MEGABYTES.\n");
        printf("5. CONVERT BITS TO KILOBYTES.\n");
        printf("6. CONVERT BITS TO BYTES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick32);
        if (pick32 == 1) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BITS TO PETABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BITS = ");
            scanf("%lf", &number);
            result = number / 9007199254740640;
            printf("\nSIZE = %.30lf PETABYTES\n", result);
            break;
        }
        else if (pick32 == 2) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BITS TO TERABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BITS = ");
            scanf("%lf", &number);
            result = number / 8796093022208;
            printf("\nSIZE = %.30lf TERABYTES\n", result);
            break;
        }
        else if (pick32 == 3) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BITS TO GIGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BITS = ");
            scanf("%lf", &number);
            result = number / 8589934592;
            printf("\nSIZE = %.30lf GIGABYTES\n", result);
            break;
        }
        else if (pick32 == 4) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BITS TO MEGABYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BITS = ");
            scanf("%lf", &number);
            result = number / 8388608;
            printf("\nSIZE = %.25lf MEGABYTES\n", result);
            break;
        }
        else if (pick32 == 5) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BITS TO KILOBYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BITS = ");
            scanf("%lf", &number);
            result = number / 8192;
            printf("\nSIZE = %.20lf KILOBYTES\n", result);
            break;
        }
        else if (pick32 == 6) {
            system("cls");
            printf("\nCONVERSION OF DATA SIZE FROM BITS TO BYTES.\n\n");
            printf("ENTER THE SIZE OF DATA IN BITS = ");
            scanf("%lf", &number);
            result = number / 8;
            printf("\nSIZE = %.15lf BYTES\n", result);
            break;
        }
        else if (pick32 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick32 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection32);
        if (selection32 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection32 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);   
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection32 != 1 || selection32 != 0);
}
void weight() { // DEFINED FUNCTION FOR WEIGHT CONVERTER
    int choice6;
    system("cls");
    printf("\nYOU HAVE CHOSEN WEIGHT CONVERTER!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF KILOGRAMS.\n");
        printf("2. CONVERSIONS OF GRAMS.\n");
        printf("3. CONVERSIONS OF MILLIGRAMS.\n");
        printf("4. CONVERSIONS OF TONS.\n");
        printf("5. CONVERSIONS OF METRIC TONS / TONNES.\n");
        printf("6. CONVERSIONS OF POUNDS.\n");
        printf("7. CONVERSIONS OF OUNCES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice6);
        if (choice6 == 1) {
            kilograms(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 2) {
            grams(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 3) {
            milligrams(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 4) {
            tons(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 5) {
            metric_tons(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 6) {
            pounds(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 7) {
            ounces(); // FUNCTION CALL FOR CONVERTING KILOGRAMS TO OTHER UNITS
            break;
        }
        else if (choice6 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice6 != 8);
}
void kilograms() { // DEFINED FUNCTION FOR CONVERSIONS OF KILOGRAMS
    int pick35, selection35;
    double number, result;
    system("cls");
    printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO OTHER QUANTITIES OF WEIGHT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT KILOGRAMS TO GRAMS.\n");
        printf("2. CONVERT KILOGRAMS TO MILLIGRAMS.\n");
        printf("3. CONVERT KILOGRAMS TO TONS.\n");
        printf("4. CONVERT KILOGRAMS TO METRIC TONS / TONNES.\n");
        printf("5. CONVERT KILOGRAMS TO POUNDS.\n");
        printf("6. CONVERT KILOGRAMS TO OUNCES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick35);
        if (pick35 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO GRAMS.\n\n");
            printf("ENTER THE WEIGHT IN KILOGRAMS = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nWEIGHT = %.15lf GRAMS\n", result);
            break;
        }
        else if (pick35 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO MILLIGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN KILOGRAMS = ");
            scanf("%lf", &number);
            result = number * 1000000;
            printf("\nWEIGHT = %.15lf MILLIGRAMS\n", result);
            break;
        }
        else if (pick35 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO TONS.\n\n");
            printf("ENTER THE WEIGHT IN KILOGRAMS = ");
            scanf("%lf", &number);
            result = number / 907.2;
            printf("\nWEIGHT = %.15lf TONS\n", result);
            break;
        }
        else if (pick35 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO METRIC TONS / TONNES.\n\n");
            printf("ENTER THE WEIGHT IN KILOGRAMS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nWEIGHT = %.15lf METRIC TONS / TONNES\n", result);
            break;
        }
        else if (pick35 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO POUNDS.\n\n");
            printf("ENTER THE WEIGHT IN KILOGRAMS = ");
            scanf("%lf", &number);
            result = number * 2.205;
            printf("\nWEIGHT = %.15lf POUNDS\n", result);
            break;
        }
        else if (pick35 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM KILOGRAMS TO OUNCES.\n\n");
            printf("ENTER THE WEIGHT IN KILOGRAMS = ");
            scanf("%lf", &number);
            result = number * 35.274;
            printf("\nWEIGHT = %.15lf OUNCES\n", result);
            break;
        }
        else if (pick35 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick35 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection35);
        if (selection35 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection35 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);    
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection35 != 1 || selection35 != 0);
}
void grams() { // DEFINED FUNCTION FOR CONVERSIONS OF GRAMS
    int pick36, selection36;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT WEIGHT IN GRAMS TO OTHER QUANTITIES OF WEIGHT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT GRAMS TO KILOGRAMS.\n");
        printf("2. CONVERT GRAMS TO MILLIGRAMS.\n");
        printf("3. CONVERT GRAMS TO TONS.\n");
        printf("4. CONVERT GRAMS TO METRIC TONS / TONNES.\n");
        printf("5. CONVERT GRAMS TO POUNDS.\n");
        printf("6. CONVERT GRAMS TO OUNCES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick36);
        if (pick36 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM GRAMS TO KILOGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN GRAMS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nWEIGHT = %.15lf KILOGRAMS\n", result);
            break;
        }
        else if (pick36 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM GRAMS TO MILLIGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN GRAMS = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nWEIGHT = %.15lf MILLIGRAMS\n", result);
            break;
        }
        else if (pick36 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM GRAMS TO TONS.\n\n");
            printf("ENTER THE WEIGHT IN GRAMS = ");
            scanf("%lf", &number);
            result = number / 907200;
            printf("\nWEIGHT = %.15lf TONS\n", result);
            break;
        }
        else if (pick36 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM GRAMS TO METRIC TONS / TONNES.\n\n");
            printf("ENTER THE WEIGHT IN GRAMS = ");
            scanf("%lf", &number);
            result = number / 1000000;
            printf("\nWEIGHT = %.15lf METRIC TONS / TONNES\n", result);
            break;
        }
        else if (pick36 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM GRAMS TO POUNDS.\n\n");
            printf("ENTER THE WEIGHT IN GRAMS = ");
            scanf("%lf", &number);
            result = number / 453.6;
            printf("\nWEIGHT = %.15lf POUNDS\n", result);
            break;
        }
        else if (pick36 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM GRAMS TO OUNCES.\n\n");
            printf("ENTER THE WEIGHT IN GRAMS = ");
            scanf("%lf", &number);
            result = number / 28.35;
            printf("\nWEIGHT = %.15lf OUNCES\n", result);
            break;
        }
        else if (pick36 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick36 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection36);
        if (selection36 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection36 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection36 != 1 || selection36 != 0);
}
void milligrams() { // DEFINED FUNCTION FOR CONVERSIONS OF MILLIGRAMS
    int pick37, selection37;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT WEIGHT IN MILLIGRAMS TO OTHER QUANTITIES OF WEIGHT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MILLIGRAMS TO KILOGRAMS.\n");
        printf("2. CONVERT MILLIGRAMS TO GRAMS.\n");
        printf("3. CONVERT MILLIGRAMS TO TONS.\n");
        printf("4. CONVERT MILLIGRAMS TO METRIC TONS / TONNES.\n");
        printf("5. CONVERT MILLIGRAMS TO POUNDS.\n");
        printf("6. CONVERT MILLIGRAMS TO OUNCES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick37);
        if (pick37 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM MILLIGRAMS TO KILOGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN MILLIGRAMS = ");
            scanf("%lf", &number);
            result = number / 1000000;
            printf("\nWEIGHT = %.15lf KILOGRAMS\n", result);
            break;
        }
        else if (pick37 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM MILLIGRAMS TO GRAMS.\n\n");
            printf("ENTER THE WEIGHT IN MILLIGRAMS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nWEIGHT = %.15lf GRAMS\n", result);
            break;
        }
        else if (pick37 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM MILLIGRAMS TO TONS.\n\n");
            printf("ENTER THE WEIGHT IN MILLIGRAMS = ");
            scanf("%lf", &number);
            result = number / 907184740;
            printf("\nWEIGHT = %.15lf TONS\n", result);
            break;
        }
        else if (pick37 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM MILLIGRAMS TO METRIC TONS / TONNES.\n\n");
            printf("ENTER THE WEIGHT IN MILLIGRAMS = ");
            scanf("%lf", &number);
            result = number / 1000000000;
            printf("\nWEIGHT = %.15lf METRIC TONS / TONNES\n", result);
            break;
        }
        else if (pick37 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM MILLIGRAMS TO POUNDS.\n\n");
            printf("ENTER THE WEIGHT IN MILLIGRAMS = ");
            scanf("%lf", &number);
            result = number / 4536000;
            printf("\nWEIGHT = %.15lf POUNDS\n", result);
            break;
        }
        else if (pick37 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM MILLIGRAMS TO OUNCES.\n\n");
            printf("ENTER THE WEIGHT IN MILLIGRAMS = ");
            scanf("%lf", &number);
            result = number / 28350;
            printf("\nWEIGHT = %.15lf OUNCES\n", result);
            break;
        }
        else if (pick37 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick37 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection37);
        if (selection37 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection37 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection37 != 1 || selection37 != 0);
}
void tons() { // DEFINED FUNCTION FOR CONVERSIONS OF TONS
    int pick38, selection38;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT WEIGHT IN TONS TO OTHER QUANTITIES OF WEIGHT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTION BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT TONS TO KILOGRAMS.\n");
        printf("2. CONVERT TONS TO GRAMS.\n");
        printf("3. CONVERT TONS TO MILLIGRAMS.\n");
        printf("4. CONVERT TONS TO METRIC TONS / TONNES.\n");
        printf("5. CONVERT TONS TO POUNDS.\n");
        printf("6. CONVERT TONS TO OUNCES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick38);
        if (pick38 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM TONS TO KILOGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN TONS = ");
            scanf("%lf", &number);
            result = number * 907.2;
            printf("\nWEIGHT = %.15lf KILOGRAMS\n", result);
            break;
        }
        else if (pick38 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM TONS TO GRAMS.\n\n");
            printf("ENTER THE WEIGHT IN TONS = ");
            scanf("%lf", &number);
            result = number * 907200;
            printf("\nWEIGHT = %.15lf GRAMS\n", result);
            break;
        }
        else if (pick38 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM TONS TO MILLIGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN TONS = ");
            scanf("%lf", &number);
            result = number * 907184740;
            printf("\nWEIGHT = %.15lf MILLIGRAMS\n", result);
            break;
        }
        else if (pick38 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM TONS TO METRIC TONS / TONNES.\n\n");
            printf("ENTER THE WEIGHT IN TONS = ");
            scanf("%lf", &number);
            result = number / 1.102;
            printf("\nWEIGHT = %.15lf METRIC TONS / TONNES\n", result);
            break;
        }
        else if (pick38 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM TONS TO POUNDS.\n\n");
            printf("ENTER THE WEIGHT IN TONS = ");
            scanf("%lf", &number);
            result = number * 2000;
            printf("\nWEIGHT = %.15lf POUNDS\n", result);
            break;
        }
        else if (pick38 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM TONS TO OUNCES.\n\n");
            printf("ENTER THE WEIGHT IN TONS = ");
            scanf("%lf", &number);
            result = number * 32000;
            printf("\nWEIGHT = %.15lf OUNCES\n", result);
            break;
        }
        else if (pick38 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick38 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection38);
        if (selection38 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection38 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection38 != 1 || selection38 != 0);
}
void metric_tons() { // DEFINED FUNCTION FOR CONVERSIONS OF METRIC TONS / TONNES
    int pick39, selection39;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT WEIGHT IN METRIC TONS / TONNES TO OTHER QUANTITIES OF WEIGHT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT METRIC TONS / TONNES TO KILOGRAMS.\n");
        printf("2. CONVERT METRIC TONS / TONNES TO GRAMS.\n");
        printf("3. CONVERT METRIC TONS / TONNES TO MILLIGRAMS.\n");
        printf("4. CONVERT METRIC TONS / TONNES TO TONS.\n");
        printf("5. CONVERT METRIC TONS / TONNES TO POUNDS.\n");
        printf("6. CONVERT METRIC TONS / TONNES TO OUNCES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick39);
        if (pick39 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM METRIC TONS / TONNES TO KILOGRAMS.\n");
            printf("\nENTER THE WEIGHT IN METRIC TONS / TONNES = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nWEIGHT = %.15lf KILOGRAMS\n", result);
            break;
        }
        else if (pick39 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM METRIC TONS / TONNES TO GRAMS.\n");
            printf("\nENTER THE WEIGHT IN METRIC TONS / TONNES = ");
            scanf("%lf", &number);
            result = number * 1000000;
            printf("\nWEIGHT = %.15lf GRAMS\n", result);
            break;
        }
        else if (pick39 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM METRIC TONS / TONNES TO MILLIGRAMS.\n");
            printf("\nENTER THE WEIGHT IN METRIC TONS / TONNES = ");
            scanf("%lf", &number);
            result = number * 1000000000;
            printf("\nWEIGHT = %.15lf MILLIGRAMS\n", result);
            break;
        }
        else if (pick39 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM METRIC TONS / TONNES TO TONS.\n");
            printf("\nENTER THE WEIGHT IN METRIC TONS / TONNES = ");
            scanf("%lf", &number);
            result = number * 1.102;
            printf("\nWEIGHT = %.15lf TONS\n", result);
            break;
        }
        else if (pick39 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM METRIC TONS / TONNES TO POUNDS.\n");
            printf("\nENTER THE WEIGHT IN METRIC TONS / TONNES = ");
            scanf("%lf", &number);
            result = number * 2204.62;
            printf("\nWEIGHT = %.15lf POUNDS\n", result);
            break;
        }
        else if (pick39 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM METRIC TONS / TONNES TO OUNCES.\n");
            printf("\nENTER THE WEIGHT IN METRIC TONS / TONNES = ");
            scanf("%lf", &number);
            result = number * 35274;
            printf("\nWEIGHT = %.15lf OUNCES\n", result);
            break;
        }
        else if (pick39 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick39 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection39);
        if (selection39 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection39 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection39 != 1 || selection39 != 0);
}
void pounds() { // DEFINED FUNCTION FOR CONVERSIONS OF POUNDS
    int pick40, selection40;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT WEIGHT IN POUNDS TO OTHER QUANTITIES OF WEIGHT!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n");
        printf("1. CONVERT POUNDS TO KILOGRAMS.\n");
        printf("2. CONVERT POUNDS TO GRAMS.\n");
        printf("3. CONVERT POUNDS TO MILLIGRAMS.\n");
        printf("4. CONVERT POUNDS TO TONS.\n");
        printf("5. CONVERT POUNDS TO METRIC TONS / TONNES.\n");
        printf("6. CONVERT POUNDS TO OUNCES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick40);
        if (pick40 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM POUNDS TO KILOGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN POUNDS = ");
            scanf("%lf", &number);
            result = number / 2.205;
            printf("\nWEIGHT = %.15lf KILOGRAMS\n", result);
            break;
        }
        else if (pick40 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM POUNDS TO GRAMS.\n\n");
            printf("ENTER THE WEIGHT IN POUNDS = ");
            scanf("%lf", &number);
            result = number * 453.6;
            printf("\nWEIGHT = %.15lf GRAMS\n", result);
            break;
        }
        else if (pick40 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM POUNDS TO MILLIGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN POUNDS = ");
            scanf("%lf", &number);
            result = number * 453592;
            printf("\nWEIGHT = %.15lf MILLIGRAMS\n", result);
            break;
        }
        else if (pick40 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM POUNDS TO TONS.\n\n");
            printf("ENTER THE WEIGHT IN POUNDS = ");
            scanf("%lf", &number);
            result = number / 2000;
            printf("\nWEIGHT = %.15lf TONS\n", result);
            break;
        }
        else if (pick40 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM POUNDS TO METRIC TONS / TONNES.\n\n");
            printf("ENTER THE WEIGHT IN POUNDS = ");
            scanf("%lf", &number);
            result = number / 2205;
            printf("\nWEIGHT = %.15lf METRIC TONS / TONNES\n", result);
            break;
        }
        else if (pick40 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM POUNDS TO OUNCES.\n\n");
            printf("ENTER THE WEIGHT IN POUNDS = ");
            scanf("%lf", &number);
            result = number * 16;
            printf("\nWEIGHT = %.15lf OUNCES\n", result);
            break;
        }
        else if (pick40 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick40 != 7);
    do {
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER '0' TO EXIT.\n");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d", &selection40);
    if (selection40 == 1) {
        welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
        break;
    }
    else if (selection40 == 0) {
        system("cls");
        printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
        exit(0);
    }
    else {
        system("cls");
        printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
        printf("PRESS ENTER TO CONTINUE!\n");
        getch();
    }
    } while (selection40 != 1 || selection40 != 0);
}
void ounces() { // DEFINED FUNCTION FOR CONVERSIONS OF OUNCES
    int pick41, selection41;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT WEIGHT IN OUNCES TO OTHER QUANTITIES OF WEIGHT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT OUNCES TO KILOGRAMS.\n");
        printf("2. CONVERT OUNCES TO GRAMS.\n");
        printf("3. CONVERT OUNCES TO MILLIGRAMS.\n");
        printf("4. CONVERT OUNCES TO TONS.\n");
        printf("5. CONVERT OUNCES TO METRIC TONS / TONNES.\n");
        printf("6. CONVERT OUNCES TO POUNDS.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick41);
        if (pick41 == 1) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM OUNCES TO KILOGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN OUNCES = ");
            scanf("%lf", &number);
            result = number / 35.274;
            printf("\nWEIGHT = %.15lf KILOGRAMS.\n", result);
            break;
        }
        else if (pick41 == 2) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM OUNCES TO GRAMS.\n\n");
            printf("ENTER THE WEIGHT IN OUNCES = ");
            scanf("%lf", &number);
            result = number * 28.3495;
            printf("\nWEIGHT = %.15lf GRAMS.\n", result);
            break;
        }
        else if (pick41 == 3) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM OUNCES TO MILLIGRAMS.\n\n");
            printf("ENTER THE WEIGHT IN OUNCES = ");
            scanf("%lf", &number);
            result = number * 28349.5;
            printf("\nWEIGHT = %.15lf MILLIGRAMS.\n", result);
            break;
        }
        else if (pick41 == 4) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM OUNCES TO TONS.\n\n");
            printf("ENTER THE WEIGHT IN OUNCES = ");
            scanf("%lf", &number);
            result = number / 32000;
            printf("\nWEIGHT = %.15lf TONS.\n", result);
            break;
        }
        else if (pick41 == 5) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM OUNCES TO METRIC TONS / TONNES.\n\n");
            printf("ENTER THE WEIGHT IN OUNCES = ");
            scanf("%lf", &number);
            result = number / 35270;
            printf("\nWEIGHT = %.15lf METRIC TONS / TONNES.\n", result);
            break;
        }
        else if (pick41 == 6) {
            system("cls");
            printf("\nCONVERSION OF WEIGHT FROM OUNCES TO POUNDS.\n\n");
            printf("ENTER THE WEIGHT IN OUNCES = ");
            scanf("%lf", &number);
            result = number / 16;
            printf("\nWEIGHT = %.15lf POUNDS.\n", result);
            break;
        }
        else if (pick41 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick41 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection41);
        if (selection41 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection41 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection41 != 1 || selection41 != 0);
}
void area() { // DEFINED FUNCTION FOR AREA CONVERTER
    int choice7;
    system("cls");
    printf("\nYOU HAVE CHOSEN AREA CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF SQUARE KILOMETERS.\n");
        printf("2. CONVERSIONS OF SQUARE METERS.\n");
        printf("3. CONVERSIONS OF SQUARE MILES.\n");
        printf("4. CONVERSIONS OF SQUARE YARDS.\n");
        printf("5. CONVERSIONS OF SQUARE FEET.\n");
        printf("6. CONVERSIONS OF HECTARES.\n");
        printf("7. CONVERSIONS OF ACRES.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice7);
        if (choice7 == 1) {
            square_kilometers(); // FUNCTION CALL FOR CONVERTING SQUARE KILOMETERS TO OTHER UNITS
            break;
        }
        else if (choice7 == 2) {
            square_meters(); // FUNCTION CALL FOR CONVERTING SQUARE METERS TO OTHER UNITS
            break;
        }
        else if (choice7 == 3) {
            square_miles(); // FUNCTION CALL FOR CONVERTING SQUARE MILES TO OTHER UNITS
            break;
        }
        else if (choice7 == 4) {
            square_yards(); // FUNCTION CALL FOR CONVERTING SQUARE YARDS TO OTHER UNITS
            break;
        }
        else if (choice7 == 5) {
            square_feet(); // FUNCTION CALL FOR CONVERTING SQUARE FEET TO OTHER UNITS
            break;
        }
        else if (choice7 == 6) {
            hectares(); // FUNCTION CALL FOR CONVERTING HECTARES TO OTHER UNITS
            break;
        }
        else if (choice7 == 7) {
            acres(); // FUNCTION CALL FOR CONVERTING ACRES TO OTHER UNITS
            break;
        }
        else if (choice7 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice7 != 8);
}
void square_kilometers() {  // DEFINED FUNCTION FOR CONVERSIONS OF SQUARE KILOMETERS
    int pick42, selection42;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN SQUARE KILOMETERS TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT SQUARE KILOMETERS TO SQUARE METERS.\n");
        printf("2. CONVERT SQUARE KILOMETERS TO SQUARE MILES.\n");
        printf("3. CONVERT SQUARE KILOMETERS TO SQUARE YARDS.\n");
        printf("4. CONVERT SQUARE KILOMETERS TO SQUARE FEET.\n");
        printf("5. CONVERT SQUARE KILOMETERS TO HECTARES.\n");
        printf("6. CONVERT SQUARE KILOMETERS TO ACRES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick42);
        if (pick42 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE KILOMETERS TO SQUARE METERS.\n\n");
            printf("ENTER THE AREA IN SQUARE KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 1000000;
            printf("\nAREA = %.15lf SQUARE METERS\n", result);
            break;
        }
        else if (pick42 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE KILOMETERS TO SQUARE MILES.\n\n");
            printf("ENTER THE AREA IN SQUARE KILOMETERS = ");
            scanf("%lf", &number);
            result = number / 2.59;
            printf("\nAREA = %.15lf SQUARE MILES\n", result);
            break;
        }
        else if (pick42 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE KILOMETERS TO SQUARE YARDS.\n\n");
            printf("ENTER THE AREA IN SQUARE KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 1195990.046301;
            printf("\nAREA = %.15lf SQUARE YARDS\n", result);
            break;
        }
        else if (pick42 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE KILOMETERS TO SQUARE FEET.\n\n");
            printf("ENTER THE AREA IN SQUARE KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 10763910.41671;
            printf("\nAREA = %.15lf SQUARE FEET\n", result);
            break;
        }
        else if (pick42 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE KILOMETERS TO HECTARES.\n\n");
            printf("ENTER THE AREA IN SQUARE KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 100;
            printf("\nAREA = %.15lf HECTARES\n", result);
            break;
        }
        else if (pick42 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE KILOMETERS TO ACRES.\n\n");
            printf("ENTER THE AREA IN SQUARE KILOMETERS = ");
            scanf("%lf", &number);
            result = number * 247.105;
            printf("\nAREA = %.15lf ACRES\n", result);
            break;
        }
        else if (pick42 == 7) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick42 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection42);
        if (selection42 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection42 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection42 != 1 || selection42 != 0);
}
void square_meters() { // DEFINED FUNCTION FOR CONVERSIONS OF SQUARE METERS
    int pick43, selection43;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN SQUARE METERS TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT SQUARE METERS TO SQUARE KILOMETERS.\n");
        printf("2. CONVERT SQUARE METERS TO SQUARE MILES.\n");
        printf("3. CONVERT SQUARE METERS TO SQUARE YARDS.\n");
        printf("4. CONVERT SQUARE METERS TO SQUARE FEET.\n");
        printf("5. CONVERT SQUARE METERS TO HECTARES.\n");
        printf("6. CONVERT SQUARE METERS TO ACRES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick43);
        if (pick43 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE METERS TO SQUARE KILOMETERS.\n\n");
            printf("ENTER THE AREA IN SQUARE METERS = ");
            scanf("%lf", &number);
            result = number / 1000000;
            printf("\nAREA = %.15lf SQUARE KILOMETERS\n", result);
            break;
        }
        else if (pick43 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE METERS TO SQUARE MILES.\n\n");
            printf("ENTER THE AREA IN SQUARE METERS = ");
            scanf("%lf", &number);
            result = number / 2589988.10;
            printf("\nAREA = %.15lf SQUARE MILES\n", result);
            break;
        }
        else if (pick43 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE METERS TO SQUARE YARDS.\n\n");
            printf("ENTER THE AREA IN SQUARE METERS = ");
            scanf("%lf", &number);
            result = number * 1.196;
            printf("\nAREA = %.15lf SQUARE YARDS\n", result);
            break;
        }
        else if (pick43 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE METERS TO SQUARE FEET.\n\n");
            printf("ENTER THE AREA IN SQUARE METERS = ");
            scanf("%lf", &number);
            result = number * 10.7639;
            printf("\nAREA = %.15lf SQUARE FEET\n", result);
            break;
        }
        else if (pick43 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE METERS TO HECTARES.\n\n");
            printf("ENTER THE AREA IN SQUARE METERS = ");
            scanf("%lf", &number);
            result = number / 10000;
            printf("\nAREA = %.15lf HECTARES\n", result);
            break;
        }
        else if (pick43 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE METERS TO ACRES.\n\n");
            printf("ENTER THE AREA IN SQUARE METERS = ");
            scanf("%lf", &number);
            result = number / 4047;
            printf("\nAREA = %.15lf ACRES\n", result);
            break;
        }
        else if (pick43 == 7) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick43 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection43);
        if (selection43 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection43 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection43 != 1 || selection43 != 0);
}
void square_miles() { // DEFINED FUNCTION FOR CONVERSIONS OF SQUARE MILES
    int pick44, selection44;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN SQUARE MILES TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT SQUARE MILES TO SQUARE KILOMETERS.\n");
        printf("2. CONVERT SQUARE MILES TO SQUARE METERS.\n");
        printf("3. CONVERT SQUARE MILES TO SQUARE YARDS.\n");
        printf("4. CONVERT SQUARE MILES TO SQUARE FEET.\n");
        printf("5. CONVERT SQUARE MILES TO HECTARES.\n");
        printf("6. CONVERT SQUARE MILES TO ACRES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick44);
        if (pick44 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE MILES TO SQUARE KILOMETERS.\n\n");
            printf("ENTER THE AREA IN SQUARE MILES = ");
            scanf("%lf", &number);
            result = number * 2.59;
            printf("\nAREA = %.15lf SQUARE KILOMETERS\n", result);
            break;
        }
        else if (pick44 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE MILES TO SQUARE METERS.\n\n");
            printf("ENTER THE AREA IN SQUARE MILES = ");
            scanf("%lf", &number);
            result = number * 2589988.10;
            printf("\nAREA = %.15lf SQUARE METERS\n", result);
            break;
        }
        else if (pick44 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE MILES TO SQUARE YARDS.\n\n");
            printf("ENTER THE AREA IN SQUARE MILES = ");
            scanf("%lf", &number);
            result = number * 3097599.999598;
            printf("\nAREA = %.15lf SQUARE YARDS\n", result);
            break;
        }
        else if (pick44 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE MILES TO SQUARE FEET.\n\n");
            printf("ENTER THE AREA IN SQUARE MILES = ");
            scanf("%lf", &number);
            result = number * 27878400;
            printf("\nAREA = %.15lf SQUARE FEET\n", result);
            break;
        }
        else if (pick44 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE MILES TO HECTARES.\n\n");
            printf("ENTER THE AREA IN SQUARE MILES = ");
            scanf("%lf", &number);
            result = number * 259;
            printf("\nAREA = %.15lf HECTARES\n", result);
            break;
        }
        else if (pick44 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE MILES TO ACRES.\n\n");
            printf("ENTER THE AREA IN SQUARE MILES = ");
            scanf("%lf", &number);
            result = number * 640;
            printf("\nAREA = %.15lf ACRES\n", result);
            break;
        }
        else if (pick44 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick44 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection44);
        if (selection44 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection44 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection44 != 1 || selection44 != 0);
}
void square_yards() { // DEFINED FUNCTION FOR CONVERSIONS OF SQUARE YARDS
    int pick45, selection45;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN SQUARE YARDS TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT SQUARE YARDS TO SQUARE KILOMETERS.\n");
        printf("2. CONVERT SQUARE YARDS TO SQUARE METERS.\n");
        printf("3. CONVERT SQUARE YARDS TO SQUARE MILES.\n");
        printf("4. CONVERT SQUARE YARDS TO SQUARE FEET.\n");
        printf("5. CONVERT SQUARE YARDS TO HECTARES.\n");
        printf("6. CONVERT SQUARE YARDS TO ACRES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick45);
        if (pick45 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE YARDS TO SQUARE KILOMETERS.\n\n");
            printf("ENTER THE AREA IN SQUARE YARDS = ");
            scanf("%lf", &number);
            result = number / 1195990.0463;
            printf("\nAREA = %.15lf SQUARE KILOMETERS\n", result);
            break;
        }
        else if (pick45 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE YARDS TO SQUARE METERS.\n\n");
            printf("ENTER THE AREA IN SQUARE YARDS = ");
            scanf("%lf", &number);
            result = number / 1.196;
            printf("\nAREA = %.15lf SQUARE METERS\n", result);
            break;
        }
        else if (pick45 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE YARDS TO SQUARE MILES.\n\n");
            printf("ENTER THE AREA IN SQUARE YARDS = ");
            scanf("%lf", &number);
            result = number / 3097602.26;
            printf("\nAREA = %.15lf SQUARE MILES\n", result);
            break;
        }
        else if (pick45 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE YARDS TO SQUARE FEET.\n\n");
            printf("ENTER THE AREA IN SQUARE YARDS = ");
            scanf("%lf", &number);
            result = number * 9;
            printf("\nAREA = %.15lf SQUARE FEET\n", result);
            break;
        }
        else if (pick45 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE YARDS TO HECTARES.\n\n");
            printf("ENTER THE AREA IN SQUARE YARDS = ");
            scanf("%lf", &number);
            result = number / 11960;
            printf("\nAREA = %.15lf HECTARES\n", result);
            break;
        }
        else if (pick45 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE YARDS TO ACRES.\n\n");
            printf("ENTER THE AREA IN SQUARE YARDS = ");
            scanf("%lf", &number);
            result = number / 4840;
            printf("\nAREA = %.15lf ACRES\n", result);
            break;
        }
        else if (pick45 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick45 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection45);
        if (selection45 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection45 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection45 != 1 || selection45 != 0);
}
void square_feet() { // DEFINED FUNCTION FOR CONVERSIONS OF 
    int pick46, selection46;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN SQUARE FEET TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT SQUARE FEET TO SQUARE KILOMETERS.\n");
        printf("2. CONVERT SQUARE FEET TO SQUARE METERS.\n");
        printf("3. CONVERT SQUARE FEET TO SQUARE MILES.\n");
        printf("4. CONVERT SQUARE FEET TO SQUARE YARDS.\n");
        printf("5. CONVERT SQUARE FEET TO HECTARES.\n");
        printf("6. CONVERT SQUARE FEET TO ACRES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick46);
        if (pick46 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE FEET TO SQUARE KILOMETERS.\n\n");
            printf("ENTER THE AREA IN SQUARE FEET = ");
            scanf("%lf", &number);
            result = number / 10763910.41671;
            printf("\nAREA = %.15lf SQUARE KILOMETERS\n", result);
            break;
        }
        else if (pick46 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE FEET TO SQUARE METERS.\n\n");
            printf("ENTER THE AREA IN SQUARE FEET = ");
            scanf("%lf", &number);
            result = number / 10.764;
            printf("\nAREA = %.15lf SQUARE METERS\n", result);
            break;
        }
        else if (pick46 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE FEET TO SQUARE MILES.\n\n");
            printf("ENTER THE AREA IN SQUARE FEET = ");
            scanf("%lf", &number);
            result = number / 27878400;
            printf("\nAREA = %.15lf SQUARE MILES\n", result);
            break;
        }
        else if (pick46 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE FEET TO SQUARE YARDS.\n\n");
            printf("ENTER THE AREA IN SQUARE FEET = ");
            scanf("%lf", &number);
            result = number / 9;
            printf("\nAREA = %.15lf SQUARE YARDS\n", result);
            break;
        }
        else if (pick46 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE FEET TO HECTARES.\n\n");
            printf("ENTER THE AREA IN SQUARE FEET = ");
            scanf("%lf", &number);
            result = number / 107600;
            printf("\nAREA = %.15lf HECTARES\n", result);
            break;
        }
        else if (pick46 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM SQUARE FEET TO ACRES.\n\n");
            printf("ENTER THE AREA IN SQUARE FEET = ");
            scanf("%lf", &number);
            result = number / 43560;
            printf("\nAREA = %.15lf ACRES\n", result);
            break;
        }
        else if (pick46 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick46 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection46);
        if (selection46 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection46 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection46 != 1 || selection46 != 0);
}
void hectares() { // DEFINED FUNCTION FOR CONVERSIONS OF HECTARES
    int pick47, selection47;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN HECTARES TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT HECTARES TO SQUARE KILOMETERS.\n");
        printf("2. CONVERT HECTARES TO SQUARE METERS.\n");
        printf("3. CONVERT HECTARES TO SQUARE MILES.\n");
        printf("4. CONVERT HECTARES TO SQUARE YARDS.\n");
        printf("5. CONVERT HECTARES TO SQUARE FEET.\n");
        printf("6. CONVERT HECTARES TO ACRES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick47);
        if (pick47 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM HECTARES TO SQUARE KILOMETERS.\n\n");
            printf("ENTER THE AREA IN HECTARES = ");
            scanf("%lf", &number);
            result = number / 100;
            printf("\nAREA = %.15lf SQUARE KILOMETERS\n", result);
            break;
        }
        else if (pick47 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM HECTARES TO SQUARE METERS.\n\n");
            printf("ENTER THE AREA IN HECTARES = ");
            scanf("%lf", &number);
            result = number * 10000;
            printf("\nAREA = %.15lf SQUARE METERS\n", result);
            break;
        }
        else if (pick47 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM HECTARES TO SQUARE MILES.\n\n");
            printf("ENTER THE AREA IN HECTARES = ");
            scanf("%lf", &number);
            result = number / 259;
            printf("\nAREA = %.15lf SQUARE MILES\n", result);
            break;
        }
        else if (pick47 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM HECTARES TO SQUARE YARDS.\n\n");
            printf("ENTER THE AREA IN HECTARES = ");
            scanf("%lf", &number);
            result = number * 11960;
            printf("\nAREA = %.15lf SQUARE YARDS\n", result);
            break;
        }
        else if (pick47 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM HECTARES TO SQUARE FEET.\n\n");
            printf("ENTER THE AREA IN HECTARES = ");
            scanf("%lf", &number);
            result = number * 107639;
            printf("\nAREA = %.15lf SQUARE FEET\n", result);
            break;
        }
        else if (pick47 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM HECTARES TO ACRES.\n\n");
            printf("ENTER THE AREA IN HECTARES = ");
            scanf("%lf", &number);
            result = number * 2.471;
            printf("\nAREA = %.15lf ACRES\n", result);
            break;
        }
        else if (pick47 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick47 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection47);
        if (selection47 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection47 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection47 != 1 || selection47 != 0);
}
void acres() { // DEFINED FUNCTION FOR CONVERSIONS OF ACRES
    int pick48, selection48;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT AREA IN ACRES TO \nOTHER QUANTITIES OF AREA!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT ACRES TO SQUARE KILOMETERS.\n");
        printf("2. CONVERT ACRES TO SQUARE METERS.\n");
        printf("3. CONVERT ACRES TO SQUARE MILES.\n");
        printf("4. CONVERT ACRES TO SQUARE YARDS.\n");
        printf("5. CONVERT ACRES TO SQUARE FEET.\n");
        printf("6. CONVERT ACRES TO HECTARES.\n");
        printf("7. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick48);
        if (pick48 == 1) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM ACRES TO SQUARE KILOMETERS.\n\n");
            printf("ENTER THE AREA IN ACRES = ");
            scanf("%lf", &number);
            result = number / 247.1;
            printf("\nAREA = %.15lf SQUARE KILOMETERS\n", result);
            break;
        }
        else if (pick48 == 2) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM ACRES TO SQUARE METERS.\n\n");
            printf("ENTER THE AREA IN ACRES = ");
            scanf("%lf", &number);
            result = number * 4047;
            printf("\nAREA = %.15lf SQUARE METERS\n", result);
            break;
        }
        else if (pick48 == 3) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM ACRES TO SQUARE MILES.\n\n");
            printf("ENTER THE AREA IN ACRES = ");
            scanf("%lf", &number);
            result = number / 640;
            printf("\nAREA = %.15lf SQUARE MILES\n", result);
            break;
        }
        else if (pick48 == 4) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM ACRES TO SQUARE YARDS.\n\n");
            printf("ENTER THE AREA IN ACRES = ");
            scanf("%lf", &number);
            result = number * 4840;
            printf("\nAREA = %.15lf SQUARE YARDS\n", result);
            break;
        }
        else if (pick48 == 5) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM ACRES TO SQUARE FEET.\n\n");
            printf("ENTER THE AREA IN ACRES = ");
            scanf("%lf", &number);
            result = number * 43560;
            printf("\nAREA = %.15lf SQUARE FEET\n", result);
            break;
        }
        else if (pick48 == 6) {
            system("cls");
            printf("\nCONVERSION OF AREA FROM ACRES TO HECTARES.\n\n");
            printf("ENTER THE AREA IN ACRES = ");
            scanf("%lf", &number);
            result = number / 2.471;
            printf("\nAREA = %.15lf HECTARES\n", result);
            break;
        }
        else if (pick48 == 7) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick48 != 7);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection48);
        if (selection48 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection48 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection48 != 1 || selection48 != 0);
}
void pressure() { // DEFINED FUNCTION FOR PRESSURE CONVERTER
    int choice8;
    system("cls");
    printf("\nYOU HAVE CHOSEN PRESSURE CONVERTER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERSIONS OF PASCALS.\n");
        printf("2. CONVERSIONS OF KILOPASCALS.\n");
        printf("3. CONVERSIONS OF STANDARD ATMOSPHERE.\n");
        printf("4. CONVERSIONS OF TORRS.\n");
        printf("5. CONVERSIONS OF BARS.\n");
        printf("6. CONVERSIONS OF POUNDS PER SQUARE INCH.\n");
        printf("7. CONVERSIONS OF MILLIGRAMS OF MERCURY / mmHg.\n");
        printf("8. CONVERSIONS OF INCHES OF MERCURY.\n");
        printf("9. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice8);
        if (choice8 == 1) {
            pascal(); // FUNCTION CALL FOR CONVERTING PASCALS TO OTHER UNITS
            break;
        }
        else if (choice8 == 2) {
            kilopascal(); // FUNCTION CALL FOR CONVERTING KILOPASCALS TO OTHER UNITS
            break;
        }
        else if (choice8 == 3) {
            standard_atmosphere(); // FUNCTION CALL FOR CONVERTING STANDARD ATMOSPHERE TO OTHER UNITS
            break;
        }
        else if (choice8 == 4) {
            torrs(); // FUNCTION CALL FOR CONVERTING TORRS TO OTHER UNITS
            break;
        }
        else if (choice8 == 5) {
            bars(); // FUNCTION CALL FOR CONVERTING BARS TO OTHER UNITS
            break;
        }
        else if (choice8 == 6) {
            pounds_per_square_inch(); // FUNCTION CALL FOR CONVERTING POUNDS PER SQUARE INCH TO OTHER UNITS
            break;
        }
        else if (choice8 == 7) {
            millimeters_of_mercury(); // FUNCTION CALL FOR CONVERTING MILLIMETERS OF MERCURY / mmHg TO OTHER UNITS
            break;
        }
        else if (choice8 == 8) {
            inches_of_mercury(); // FUNCTION CALL FOR CONVERTING INCHES OF MERCURY TO OTHER UNITS
            break;
        }
        else if (choice8 == 9) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
            break;
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice8 != 9);
}
void pascal() { // DEFINED FUNCTION FOR CONVERSIONS OF PASCAL
    int pick49, selection49;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN PASCALS TO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT PASCALS TO KILOPASCALS.\n");
        printf("2. CONVERT PASCALS TO STANDARD ATMOSPHERE.\n");
        printf("3. CONVERT PASCALS TO TORRS.\n");
        printf("4. CONVERT PASCALS TO BARS.\n");
        printf("5. CONVERT PASCALS TO POUNDS PER SQUARE INCH.\n");
        printf("6. CONVERT PASCALS TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("7. CONVERT PASCALS TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick49);
        if (pick49 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 1000;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick49 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 101300;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick49 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 133.3;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick49 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 100000;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick49 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 6895;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick49 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 133.3;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick49 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM PASCALS TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN PASCALS = ");
            scanf("%lf", &number);
            result = number / 3386;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick49 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        } 
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick49 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection49);
        if (selection49 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection49 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection49 == 1 || selection49 != 0);
}
void kilopascal() { // DEFINED FUNCTION FOR CONVERSIONS OF KILOPASCAL
    int pick50, selection50;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN KILOPASCALS TO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT KILOPASCALS TO PASCALS.\n");
        printf("2. CONVERT KILOPASCALS TO STANDARD ATMOSPHERE.\n");
        printf("3. CONVERT KILOPASCALS TO TORRS.\n");
        printf("4. CONVERT KILOPASCALS TO BARS.\n");
        printf("5. CONVERT KILOPASCALS TO POUNDS PER SQUARE INCH.\n");
        printf("6. CONVERT KILOPASCALS TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("7. CONVERT KILOPASCALS TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick50);
        if (pick50 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number * 1000;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick50 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number / 101.3;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick50 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number * 7.501;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick50 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number / 100;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick50 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number / 6.895;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick50 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number * 7.501;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick50 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM KILOPASCALS TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN KILOPASCALS = ");
            scanf("%lf", &number);
            result = number / 3.386;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick50 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick50 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection50);
        if (selection50 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection50 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection50 != 1 || selection50 != 0);
}
void standard_atmosphere() { // DEFINED FUNCTION FOR CONVERSIONS OF STANDARD ATMOSPHERE
    int pick51, selection51;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN STANDARD ATMOSPHERE TO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT STANDARD ATMOSPHERE TO PASCALS.\n");
        printf("2. CONVERT STANDARD ATMOSPHERE TO KILOPASCALS.\n");
        printf("3. CONVERT STANDARD ATMOSPHERE TO TORRS.\n");
        printf("4. CONVERT STANDARD ATMOSPHERE TO BARS.\n");
        printf("5. CONVERT STANDARD ATMOSPHERE TO POUNDS PER SQUARE INCH.\n");
        printf("6. CONVERT STANDARD ATMOSPHERE TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("7. CONVERT STANDARD ATMOSPHERE TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick51);
        if (pick51 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 101300;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick51 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 101.3;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick51 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 760;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick51 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 1.013;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick51 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 14.6959;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick51 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 760;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick51 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM STANDARD ATMOSPHERE TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN STANDARD ATMOSPHERE = ");
            scanf("%lf", &number);
            result = number * 29.9213;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick51 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick51 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection51);
        if (selection51 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection51 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection51 != 1 || selection51 != 0);
}
void torrs() { // DEFINED FUNCTION FOR CONVERSIONS OF TORRS
    int pick52, selection52;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN TORRS TO OTHER QUANTITIES OF PRESSURE!\n\n"); 
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT TORRS TO PASCALS.\n");
        printf("2. CONVERT TORRS TO KILOPASCALS.\n");
        printf("3. CONVERT TORRS TO STANDARD ATMOSPHERE.\n");
        printf("4. CONVERT TORRS TO BARS.\n");
        printf("5. CONVERT TORRS TO POUNDS PER SQUARE INCH.\n");
        printf("6. CONVERT TORRS TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("7. CONVERT TORRS TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick52);
        if (pick52 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number * 133.322;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick52 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number / 7.501;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick52 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number / 760;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick52 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number / 750.1;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick52 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number / 51.715;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick52 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number * 1;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick52 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM TORRS TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN TORRS = ");
            scanf("%lf", &number);
            result = number / 25.4;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick52 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick52 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection52);
        if (selection52 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection52 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection52 != 1 || selection52 != 0);
}
void bars() { // DEFINED FUNCTION FOR CONVERSIONS OF BARS
    int pick53, selection53;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN BARS TO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT BARS TO PASCALS.\n");
        printf("2. CONVERT BARS TO KILOPASCALS.\n");
        printf("3. CONVERT BARS TO STANDARD ATMOSPHERE.\n");
        printf("4. CONVERT BARS TO TORRS.\n");
        printf("5. CONVERT BARS TO POUNDS PER SQUARE INCH.\n");
        printf("6. CONVERT BARS TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("7. CONVERT BARS TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick53);
        if (pick53 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number * 100000;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick53 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number * 100;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick53 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number / 1.013;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick53 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number * 750.062;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick53 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number * 14.5038;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick53 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number * 750.062;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick53 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM BARS TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN BARS = ");
            scanf("%lf", &number);
            result = number * 29.53;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick53 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick53 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection53);
        if (selection53 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection53 == 0) {
            system("cls");
            printf("\nTHANK YOU:)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n");
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection53 != 1 || selection53 != 0);
}
void pounds_per_square_inch() { // DEFINED FUNCTION FOR CONVERSIONS OF POUNDS PER SQUARE INCH
    int pick54, selection54;
    double number, result;
    system("cls");
    printf("\nCONVERSION OF PRESSURE FROM POUNDS PER SQUARE INCH TO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT POUNDS PER SQUARE INCH TO PASCALS.\n");
        printf("2. CONVERT POUNDS PER SQUARE INCH TO KILOPASCALS.\n");
        printf("3. CONVERT POUNDS PER SQUARE INCH TO STANDARD ATMOSPHERE.\n");
        printf("4. CONVERT POUNDS PER SQUARE INCH TO TORRS.\n");
        printf("5. CONVERT POUNDS PER SQUARE INCH TO BARS.\n");
        printf("6. CONVERT POUNDS PER SQUARE INCH TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("7. CONVERT POUNDS PER SQUARE INCH TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick54);
        if (pick54 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number * 6894.76;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick54 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number * 6.89476;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick54 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number / 14.696;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick54 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number * 51.7149;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick54 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number / 14.504;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick54 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number * 51.7149;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick54 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE IN POUNDS PER SQUARE INCH TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN POUNDS PER SQUARE INCH = ");
            scanf("%lf", &number);
            result = number * 2.03602;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick54 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick54 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection54);
        if (selection54 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection54 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection54 != 1 || selection54 != 0);
}
void millimeters_of_mercury() { // DEFINED FUNCTION FOR CONVERSIONS OF MILLIMETERS OF MERCURY / mmHg
    int pick55, selection55; 
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN MILLIMETERS OF MERCURY / mmHg \nTO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT MILLIMETERS OF MERCURY / mmHg TO PASCALS.\n");
        printf("2. CONVERT MILLIMETERS OF MERCURY / mmHg TO KILOPASCALS.\n");
        printf("3. CONVERT MILLIMETERS OF MERCURY / mmHg TO STANDARD ATMOSPHERE.\n");
        printf("4. CONVERT MILLIMETERS OF MERCURY / mmHg TO TORRS.\n");
        printf("5. CONVERT MILLIMETERS OF MERCURY / mmHg TO BARS.\n");
        printf("6. CONVERT MILLIMETERS OF MERCURY / mmHg TO POUNDS PER SQUARE INCH.\n");
        printf("7. CONVERT MILLIMETERS OF MERCURY / mmHg TO INCHES OF MERCURY.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick55);
        if (pick55 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number * 133.322;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick55 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number / 7.501;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick55 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number / 760;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick55 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number * 1;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick55 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number / 750.1;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick55 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg \nTO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number / 51.715;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick55 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM MILLIMETERS OF MERCURY / mmHg TO INCHES OF MERCURY.\n\n");
            printf("ENTER THE PRESSURE IN mmHg = ");
            scanf("%lf", &number);
            result = number / 25.4;
            printf("\nPRESSURE = %.15lf INCHES OF MERCURY\n", result);
            break;
        }
        else if (pick55 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("INVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick55 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection55);
        if (selection55 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection55 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection55 != 1 || selection55 != 0);
}
void inches_of_mercury() { // DEFINED FUNCTION FOR CONVERSIONS OF INCHES OF MERCURY
    int pick56, selection56;
    double number, result;
    system("cls");
    printf("\nYOU HAVE CHOSEN TO CONVERT PRESSURE IN INCHES OF MERCURY \nTO OTHER QUANTITIES OF PRESSURE!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR CHOICE FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. CONVERT INCHES OF MERCURY TO PASCALS.\n");
        printf("2. CONVERT INCHES OF MERCURY TO KILOPASCALS.\n");
        printf("3. CONVERT INCHES OF MERCURY TO STANDARD ATMOSPHERE.\n");
        printf("4. CONVERT INCHES OF MERCURY TO TORRS.\n");
        printf("5. CONVERT INCHES OF MERCURY TO BARS.\n");
        printf("6. CONVERT INCHES OF MERCURY TO POUNDS PER SQUARE INCH.\n");
        printf("7. CONVERT INCHES OF MERCURY TO MILLIMETERS OF MERCURY / mmHg.\n");
        printf("8. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &pick56);
        if (pick56 == 1) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO PASCALS.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number * 3386.39;
            printf("\nPRESSURE = %.15lf PASCALS\n", result);
            break;
        }
        else if (pick56 == 2) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO KILOPASCALS.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number * 3.38639;
            printf("\nPRESSURE = %.15lf KILOPASCALS\n", result);
            break;
        }
        else if (pick56 == 3) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO STANDARD ATMOSPHERE.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number / 29.921;
            printf("\nPRESSURE = %.15lf STANDARD ATMOSPHERE\n", result);
            break;
        }
        else if (pick56 == 4) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO TORRS.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number * 25.4;
            printf("\nPRESSURE = %.15lf TORRS\n", result);
            break;
        }
        else if (pick56 == 5) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO BARS.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number / 29.53;
            printf("\nPRESSURE = %.15lf BARS\n", result);
            break;
        }
        else if (pick56 == 6) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO POUNDS PER SQUARE INCH.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number / 2.036;
            printf("\nPRESSURE = %.15lf POUNDS PER SQUARE INCH\n", result);
            break;
        }
        else if (pick56 == 7) {
            system("cls");
            printf("\nCONVERSION OF PRESSURE FROM INCHES OF MERCURY TO MILLIMETERS OF MERCURY / mmHg.\n\n");
            printf("ENTER THE PRESSURE IN INCHES OF MERCURY = ");
            scanf("%lf", &number);
            result = number * 25.4;
            printf("\nPRESSURE = %.15lf MILLIMETERS OF MERCURY / mmHg\n", result);
            break;
        }
        else if (pick56 == 8) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (pick56 != 8);
    do {
        printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPT THE USER WHETHER TO USE AGAIN OR NOT
        printf("ENTER '0' TO EXIT.\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &selection56);
        if (selection56 == 1) {
            welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
            break;
        }
        else if (selection56 == 0) {
            system("cls");
            printf("\nTHANK YOU :)\n"); // END OF THE PROGRAM
            exit(0);
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (selection56 != 1 || selection56 != 0);
}
void main() {
    system("cls");
    printf("\n********************UNIT CONVERTER********************\n\n");
    printf("*************************WELCOME**********************\n\n");
    printf("THIS IS A UNIT CONVERTER WHICH DOES YOUR DESIRED CONVERSION.\n");
    printf("NOTE: THIS UNIT CONVERTER MAY NOT CONTAIN YOUR DESIRED CONVERSION AND IT \nMAY SHOW APPROXIMATE ANSWERS OR VALUES TO THE USER!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n");
    getch();
    welcome(); // FUNCTION CALL FOR WELCOMING FUNCTION
}
void welcome() { // DEFINED FUNCTION FOR WELCOMING FUNCTION
    int choice10;
    do {
        system("cls");
        printf("\n********************LIST OF OPTIONS********************\n");
        printf("ENTER YOUR DESIRED UNIT CONVERTER FROM THE GIVEN OPTIONS BELOW!\n\n"); // PROMPT THE USER TO ENTER THEIR CHOICE
        printf("1. LENGTH CONVERTER.\n");
        printf("2. PRESSURE CONVERTER.\n");
        printf("3. TEMPERATURE CONVERTER.\n");
        printf("4. AREA CONVERTER.\n");
        printf("5. DATA STORAGE CONVERTER.\n");
        printf("6. WEIGHT CONVERTER.\n");
        printf("7. SPEED CONVERTER.\n");
        printf("8. FREQUENCY CONVERTER.\n");
        printf("9. TIME CONVERTER.\n");
        printf("10. EXIT.");
        printf("\n******************************************************\n\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice10);
        if (choice10 == 1) {
            length(); // FUNCTION CALL FOR LENGTH CONVERTER
            break;
        }
        else if (choice10 == 2) {
            pressure(); // FUNCTION CALL FOR PRESSURE CONVERTER
            break;
        }
        else if (choice10 == 3) {
            temperature(); // FUNCTION CALL FOR TEMPERATURE CONVERTER
            break;
        }
        else if (choice10 == 4) {
            area(); // FUNCTION CALL FOR AREA CONVERTER
            break;
        }
        else if (choice10 == 5) {
            data_storage(); // FUNCTION CALL FOR DATA STORAGE CONVERTER
            break;
        }
        else if (choice10 == 6) {
            weight(); // FUNCTION CALL FOR WEIGHT CONVERTER
            break;
        }
        else if (choice10 == 7) {
            speed(); // FUNCTION CALL FOR SPEED CONVERTER
            break;
        }
        else if (choice10 == 8) {
            frequency(); // FUNCTION CALL FOR FREQUENCY CONVERTER
            break;
        }
        else if (choice10 == 9) {
            time(); // FUNCTION CALL FOR TIME CONVERTER
            break;
        }
        else if (choice10 == 10) {
            system("cls");
            printf("\nTHANK YOU :) \n"); // IN CASE IF THE USER WANTS TO EXIT
            exit(0); // END OF THE PROGRAM IF THE USER HAD EXITED BY CHOOSING 'EXIT' OPTION
        }
        else {
            system("cls");
            printf("\nINVALID CHOICE ENTERED! PLEASE READ THE OPTIONS PROPERLY AND TRY AGAIN!\n"); // IN CASE OF WRONG OPTION ENTERED
            printf("PRESS ENTER TO CONTINUE!\n");
            getch();
        }
    } while (choice10 != 10);
}
