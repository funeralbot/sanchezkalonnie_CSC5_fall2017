/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 21, 2017 11:20AM
 * Purpose:  show miles per gallon
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    float 
    gtank,   // variable for gas
    miles,   // variable for miles
    mpg;     // variable for miles per gallon   
 
    //Input Data/Variables
    
    cout
    << "How many gallons of gasoline can your vehicle hold?\n";
    cin             
    >> gtank;               // asking for input for gas
    cout
    << "How many miles can you drive till your car is empty?\n";
    cin
    >> miles;               // asking for input for miles
    
    //Process or map the inputs to the outputs
    
    mpg = miles / gtank;    // logic to compute mpg
    
    //Display/Output all pertinent variables
    cout
    << setprecision(2) << fixed
    << "Your vehicle gets about " 
    << mpg <<" miles per gallon.\n";             
    
    //Exit the program
    return 0;
}