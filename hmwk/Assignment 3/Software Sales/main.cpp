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
    const float
    price(99);
    
    float 
    sold,
    total,
    dcount;
    
    bool 
    error(0);
    
    
    cout 
        << "This program will compute software price.\n"
        << "Please enter the number of units sold?\n";
    cin
        >> sold;
    
  
    if (sold <= 0){
        error = 1;
    }
    else if (sold > 0 && sold < 10){
        total = price  *sold;    
    }
    else if (sold >= 10 && sold <= 19){
        dcount = (sold * price) * .2;
        total = (sold * price) - dcount;  
    }
    else if (sold >= 20 && sold <= 49){
        dcount = (sold * price) * .3;
        total = (sold * price) - dcount;  
    }
    else if (sold >= 50 && sold <= 99){
        dcount = (sold * price) * .4;
        total = (sold * price) - dcount;  
    }
    else if (sold >= 100){
        dcount = (sold * price) * .5;
        total = (sold * price) - dcount;  
    }
    
    if (error) 
        cout 
            << "Input Validation: Make sure the number of units is greater than 0.\n";
    
    cout
        << setprecision(2) << fixed
        << "The total cost is $" << total;

    //Exit the program
    return 0;
}
