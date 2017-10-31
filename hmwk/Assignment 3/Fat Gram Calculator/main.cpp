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
    finput,
    cinput,
    ctotal,
    fgperct;
    
    bool
    error(0);

    cout        // ask user for input
        << "This program will calculate percentage of calories from fat.\n"
        << "Please enter the amount of calories and the how many grams of fat?\n";
    cin
        >> cinput >> finput;
    
    ctotal = finput * 9; //multiplies grams of fat into calories 
    fgperct = (ctotal / cinput) * 100; // converts into percentage 

    if (finput < 0 || cinput < 0)
        error = 1;
    
    else if (fgperct < 30){
        cout
            << "Caution! Food has low fat amount.\n";
    }
    else if (cinput < finput){      // lets user know inputs were entered incorrectly 
        cout
            << "ERROR! Fat grams cannot exceed calorie amount.";
    }
            
    if (error){         // lets the user know there is an error
        cout
            << "Error!\nCalorie and fat grams may not be less than zero.";
    }    
    
    cout
        << setprecision(2) << fixed    
        << "Your nutrients contain " << fgperct << " percent fat";


    //Exit the program
    return 0;
}
