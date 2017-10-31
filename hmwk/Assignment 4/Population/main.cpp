/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 19, 2017, 10:00 PM
 * Purpose: Population Growth 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      // allow precision of output

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float
    pop,
    popinc;
    
    int
    days;
    
    cout
        << "This program that will predict the "
            "size of a population of organisms.\n"
           "Input starting number of organisms\n";  //output program to user
    cin
        >> pop;             // input population 
    while (pop < 2){                    //display error if input too low
        cout
            << "Error, Population must be greater than 2.\n"
               "Please re-enter value.\n";
        cin                         // ask user to re-enter value
            >> pop;
    }
    cout
        << "Input population increase, as percentage.\n";       // ask user to percentage increase
    cin
        >> popinc;
    while (popinc < 0){                 // display error if value negative
        cout
            << "Error, percentage must be positive.\n"
               "Please re-enter value.\n";
        cin
            >> popinc;              // ask user to re-enter value
    }
    cout
        << "Input amount of days organism has multiplied.\n";   // ask user to enter length of time 
    cin
        >> days;
    while (days < 1){ // if value less than 1 display error
        cout
            << "Error, days must be greater than 1.\n"
               "Please re-enter value.\n";
        cin
            >> days;            // ask user to re-enter value
    }
    for (int nday = 1; nday <= days; nday++){       // loop days entered by user
    pop *= (1 + popinc / 100.0f);       //logic to compute population increase
    cout
        << "Day "<< nday 
        << " population increased by "  
        << setprecision(2) << fixed << pop << "%\n";    //output results to user
    }
    //Exit the program
    return 0;
}
