/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 23, 2017 2:20PM
 * Purpose:  this program is a math tutor 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // kern the output
#include <cmath>    // for power function 


using namespace std; 

//User Libraries

//Global Constants
const int
yrs(12),
prct(100);

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    
    //Declare variables
    float 
    loan(1e4),
    irate(12),
    mpay,
    tpay,
    trate;       // variables for program
    
    unsigned char
    ncomp(36);               // total number of months 
    
    //Input Data/Variables
    irate /= (prct*yrs); 
    
    float 
    temp = pow (1 + irate, ncomp);
    
    //Process or map the inputs to the outputs
    mpay = irate * temp * loan / (temp - 1);
    mpay = static_cast<int> (mpay * 100) / 100.0f;
    tpay = mpay * ncomp;
    trate = tpay - loan;
  
    
    //Display/Output all pertinent variables
    cout
    << fixed << setprecision(2) 
    << "Loan amount:      $" << loan 
    << "\nInterest Rate:    " << irate*prct << "% per month\n"
    << "Loan Length:      " 
            << static_cast<int> (ncomp) << " months\n"
    << "Monthly Payments: $" << mpay
    << "\nTotal Amount:     $" << tpay
    << "\nTotal Interest:   $" << trate;
    
    
 
    //Exit the program
    return 0;
}