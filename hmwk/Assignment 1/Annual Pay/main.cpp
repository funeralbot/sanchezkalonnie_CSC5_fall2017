/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 14, 2017, 11:20 AM
 * Purpose: Calculate annual pay 
 */

//System Libraries 
#include <iostream> //Input/Output Stream Library 
using namespace std; //The Standard namespace for system libraries

//User Libraries 

//Global Constants - Not only variables Physics/Math/Conversations only 

//Functions Prototypes

//Executions Begins Here! 
int main(int argc, char** argv) {
    //Declare Variables
    int payAmount,payPeriod,annualPay; //variables used for program
        
    //Initialize Variables
    payAmount = 2200.0; //amount made monthly 
    payPeriod = 26;     //how many times employee was paid

    
    //Process or map the inputs to the outputs
    annualPay = payAmount*payPeriod; // math used to calculate pay amount a*b 

    
    //Display/Output all pertinent variables
    cout<<"Your annual pay is $"<<annualPay<<endl; //results of calculation 
     
    
    //Exit the program
    return 0;
}

