/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 23, 2017 6:00PM
 * Purpose:  this program converts US Dollars to Japanese Yen and Euros
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
    usd,
    yen(111.99),
    cyen,
    euro(.84),
    ceuro;
    
    //Input Data/Variables
    cout 
    << "This program will show you the conversion from USD to YEN and EURO\n"
    << "How many US Dollars do you want to convert?\n";
    cin 
    >> usd;

    //Process or map the inputs to the outputs
    
    cyen = usd * yen;
    ceuro = usd * euro;
    

    //Display all variables 
  
    cout
    << setprecision(2) << fixed
    << "It currently converts to: \n" 
    << cyen 
    << " Yen\n"
    << ceuro
    << " Euro";

    return 0;
}