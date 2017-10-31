/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 14, 2017, 12:00 AM
 * Purpose: Determine sales tax based off state and county.  
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
    float price,total,total2; // declaring the variables as floats 
    float stax=4, ctax=2; //state and county tax as whole numbers
    
    //Initialize Variables
    cout<<"Enter Price $"<<endl;  //for user to enter price
    cin>>price; 
    
    cout<<"State tax is "<<stax<<"%"<<endl; //displays the current state tax 
    cout<<"County tax is "<<ctax<<"%"<<endl; //displays the current county tax 
    
    //Process or map the inputs to the outputs
    total=price * stax*.01 + ctax*.01; //multiplies the price by the tax 
    total2 = price + total; //adds the tax to the price
    
    //Display/Output all pertinent variables
    cout<<"The total tax is $"<<total<<endl; //displays the amount of tax based off price
    cout<<"Your total is $"<<total2<<endl; //displays the total amount for user
    
    
    //Exit the program
    return 0;
}

