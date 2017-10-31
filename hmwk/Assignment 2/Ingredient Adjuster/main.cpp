/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 23, 2017 5:00PM
 * Purpose:  this program adjust ingredients of a cookie recipe 
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
    float 
    cnum,
    s(1.5), 
    b(1), 
    f(2.75); 
    
    //Input Data/Variables
    cout 
    << "How many cookies would you like to make?\n";
    cin 
    >> cnum;

    //Process or map the inputs to the outputs
  
    s *= cnum / 48;
    b *= cnum / 48;
    f *= cnum / 48;        
 
    //Display all variables 
  
    cout 
    << setprecision(2) << fixed 
    << "You will need the following ingredients: \n";
    cout 
    << s << " cups of sugar\n" 
    << b << " cups of butter\n" 
    << f << " cups of flour\n";

    return 0;
}