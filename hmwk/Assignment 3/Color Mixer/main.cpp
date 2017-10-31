/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 07:47 PM
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
    string
        input,
        input2;
          
    
    cout
        << "This program will mix the primary colors:\n"
        << "red, blue, yellow\n"
        << "Please Enter two of the primary colors to mix\n";
    
    cin
        >> input >> input2;
    
    if ((input == "red" && input2 == "blue") || (input == "blue" && input2 == "red"))
        cout 
            << "When you mix those colors, you get purple.";
    else if ((input == "red" && input2 == "yellow") || (input == "yellow" && input2 == "red"))
        cout 
            << "When you mix those colors, you get orange.";
    else if ((input == "blue" && input2 == "yellow") || (input == "yellow" && input2 == "blue"))
        cout 
            << "When you mix those colors, you get green.";
    else 
        cout
            << "ERROR! Two primary colors not detected.\n"
            << "colors are case sensitive";
    
    
    
        
            
    
    
    //Exit the program
    return 0;
}
