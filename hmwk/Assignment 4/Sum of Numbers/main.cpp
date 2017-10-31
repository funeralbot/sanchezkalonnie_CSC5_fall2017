/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 16, 2017, 1:00 PM
 * Purpose: this program will display the sum up to a number that is inputed.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library




using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int 
    input;                  // variable for user input     
    
    bool
    error(0);               // boolean used to created "error" condition
    
   
    cout
        <<"This program will generate the sum of a positive integer\n"
        <<"Please enter a positive number\n";
    cin
        >>input;                // ask user to input positive value
    if (input < 0){             // input invalidation if value not positive
        error = 1;
        cout
            <<"Please input a positive integer";
    }
    for (int sum = 0; sum <= input; sum++) // logic to generate sum 
        cout
            <<" "<<sum;                 // display results to user
    
    
        
    
    
    //Exit the program
    return 0;
}
