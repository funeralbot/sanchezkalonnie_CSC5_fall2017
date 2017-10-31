/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 16, 2017, 1:00 PM
 * Purpose: This program will show a membership fee increase 
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
    mship(2500),
    mfee(.04);
    
    cout
        << "This program will show the crease in "
           "membership prices for your current country club.\n"
           "The increase will be 4% for the next six years.";
    
    for (int yrs = 1; yrs <=6; yrs++){  // loop displaying years
    
    mship =(mship*mfee)+mship;           // logic computing membership increase
    cout
        << setprecision(2)<< fixed
        << " \nYear " << yrs << "\t$" << mship;    //output results to user
    }
    
    
    //Exit the program
    return 0;
}
