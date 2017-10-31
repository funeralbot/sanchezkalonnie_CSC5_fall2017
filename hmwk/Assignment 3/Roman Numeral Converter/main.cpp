/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 06:47 PM
 * Purpose: this program converts Arabic numbers to Roman Numerals  
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short input;            // variable for user input
    
    cout 
    << "This program will convert Arabic Numbers to Roman Numerals\n"
    << "Please enter a number between 1-10\n";
    cin
    >> input;               // user input
                                        
    switch (input)                      // conversion of numbers 
    {
        case 1: cout << "Converts to I";
        break;
        case 2: cout << "Converts to II";
        break;
        case 3: cout << "Converts to III";
        break;
        case 4: cout << "Converts to IV";
        break;
        case 5: cout << "Converts to V";
        break;
        case 6: cout << "Converts to VI";
        break;
        case 7: cout << "Converts to VII";
        break;
        case 8: cout << "Converts to VIII";
        break;
        case 9: cout << "Converts to IX";
        break;
        case 10: cout << "Converts to X";
        break;
        default: cout << "User did not enter number inside range.\n";
    }
    
    //Exit the program
    return 0;
}
