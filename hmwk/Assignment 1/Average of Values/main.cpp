/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 14, 2017, 11:00 AM
 * Purpose: Creates a average of 5 different variables 
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
    int a,b,c,d,e,sum,tsum; //the variables used for generating the avg.
    
    //Initialize Variables
    a=28;           // first variable
    b=32;           // second variable       
    c=37;           // third variable
    d=24;           // fourth variable       
    e=33;           // fifth variable
    sum=154;        // sum of variables
    cout<<"Find the average between these numbers:"<<endl;
    
    //Process or map the inputs to the outputs
    tsum = sum/5; //math used to create the sum of 5 sets of variables 
    
    
    
    //Display/Output all pertinent variables
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<"the average is "<<tsum<<endl; //displays the amount of tax based off price
     
    
    //Exit the program
    return 0;
}

