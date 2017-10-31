/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 07:47 PM
 * Purpose: this program converts Arabic numbers to Roman Numerals  
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float 
        input,
        weight;
    
    
    cout
        << "This program will calculate an objects weight based off it's mass.\n"
        << "Please enter the mass of the object you would like to weigh?\n";
    cin
        >> input;
    
    weight = input * 9.8;
    
    if (input > 1000)
        cout
            << "ERROR object is too heavy!";
    else if (input < 10)
        cout
            << "ERROR object is too light!";
    else 
        cout
            << setprecision(1) << fixed 
            << "your object weighs " << weight << " newton.";
    
        
    
    
        
    
    
            
    
    
    //Exit the program
    return 0;
}
