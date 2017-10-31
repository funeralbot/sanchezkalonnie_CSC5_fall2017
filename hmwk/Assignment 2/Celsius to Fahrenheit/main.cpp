/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 23, 2017 6:00PM
 * Purpose:  this program converts your temperature from metric to imperial
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
//#include <cmath>
using namespace std;    

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float                           // variables for program
    temp,
    ctemp;
    
    //Input Data/Variables
    cout 
    << "What's the temperature in Fahrenheit?\n";
    cin 
    >> temp;

    //Process or map the inputs to the outputs
    
    ctemp = temp - 32 * 9 / 5;

    //Display all variables 
  
    cout
    << "It converts to " 
    << ctemp << " degrees Celsius.";      // outside temp

    return 0;
}