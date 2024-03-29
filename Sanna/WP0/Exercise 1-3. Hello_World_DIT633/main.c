// (C) Patricia Marklund, Anna T�rngren, Sanna Evertsson, group: 10 __ (2023) 
// Work package 0 
// Exercise 3
// Submission code: 19012302 (provided by your TA-s)

// Include library
#include <stdio.h>
#include <string.h>

// Main function in the program, uses argument from the console as parameter
void main(int argc, char* argv[]) {


    if (argc <= 1) {                        // Check if no argument is supplied in the console 
        printf("Error! No argument was found. Enter the parameter -h to get help!\n");
    }
    else if (argc > 2) {                    // Check if there is more than one argument supplied in the console
        printf("Error! More than one argument was found. Enter the parameter -h to get help! \n");
    }
    else {                                  //If the correct amount of argument is supplied 
        int res = strcmp(argv[1], "-h");    // Compare the argument entered with the string -h and return an integer
        if (res == 0) {                     // If the integer is 0 argument supplied is equal to -h
            printf("Enter an argument with your name. For example 'my_program.exe' tom. When the correct argument is entered it will print 'Hello World! I'm tom!\n");
        }
        else {                              //If the integer no 0 argument supplied different than -h
            printf("Hello World! - I'm %s!\n", argv[1]);
        }
    }
}