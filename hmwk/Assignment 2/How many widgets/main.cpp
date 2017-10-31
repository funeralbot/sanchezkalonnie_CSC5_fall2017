/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 23, 2017 6:00PM
 * Purpose:  this program tells you how many widgets you got on your pallet 
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
    wdgt(12.5),
    pllt,
    wnum,
    twgh,
    twgh2;
    
    
    //Input Data/Variables
    cout 
    << "How much that pallet weigh empty?\n";
    cin 
    >> pllt;
    cout
    << "How much it weigh with those widgets on it?\n";
    cin
    >> wnum;

    //Process or map the inputs to the outputs
  
    twgh = wnum - pllt;         // weight of pallet minus total weight 
    twgh2 = twgh / wdgt;        // total weight divided by widget weight
    
    
    
 
    //Display all variables 
  
    cout 
    << setprecision(0) << fixed 
    << "Your pallet has " 
    << twgh2 << " widgets stacked on it.";      // total amount of widgets
    

    return 0;
}