/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 07:47 PM
 * Purpose: this program converts Arabic numbers to Roman Numerals  
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
    short
        month,
        year,
        days;
    
    cout 
        << "This program will tell you how many days there are in a specific month.\n"
        << "Please enter a month between 1-12 and a year\n";
    cin
        >> month >> year;
    
    if (month == 4 || month == 6 || month == 9 || month == 11)  
        days = 30;
    else if (month == 2)
    {
        short 
            leapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        
        if (leapyear)
            days = 29;
        else
            days = 28;
    }
    else 
        days = 31;
    
    cout
        << "Has " << days << " days.";

    
    //Exit the program
    return 0;
}
