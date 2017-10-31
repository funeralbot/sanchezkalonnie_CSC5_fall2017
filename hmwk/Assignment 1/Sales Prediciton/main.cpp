/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 13, 2017, 10:00 pM
 * Purpose: Generating a sales percent  
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
    float pfit, pcent, tsale; // declaring the variables as floats 
    
    //Initialize Variables
    cout<<"Enter percentage of sales (whole numbers only)"<<endl;  //for user to enter percentage as whole number
    cin>>pcent; 
    
    cout<<"Enter total number of sales $ (decimals okay)"<<endl; //for user to enter total number of sales
    cin>>pfit; 
    
           
    //Process or map the inputs to the outputs
    tsale = pfit*pcent*.01; //multiplies percentage by profit to generate amount
    
    //Display/Output all pertinent variables
    cout<<"Generated $"<<tsale<<" million in sales."<<endl; //displays the generated amount for user
    
    
    //Exit the program
    return 0;
}

