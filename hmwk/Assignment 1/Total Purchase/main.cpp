/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 14, 2017, 11:50 AM
 * Purpose: Calculate the total amount of $ for 5 items 
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
    float item1=15.95; 
    float item2=24.95;
    float item3=6.95;
    float item4=12.95;
    float item5=3.95;
    float sum, tsum,tsum2, tax=7;       // Variables used for calculation
    
          
    //Initialize Variables
    
    

    
    //Process or map the inputs to the outputs
    sum=item1+item2+item3+item4+item5;   // addition of the first 5 items
    tsum=sum *tax*.01;                   // tax added to items   
    tsum2=sum+tsum;                      // total of tax and items           

    
    //Display/Output all pertinent variables
    cout<<"Item total is $"<<sum<<endl;         // displays total item price
    cout<<"Tax is "<<tax<<"%"<<endl;            // displays tax information
    cout<<"Your total is $"<<tsum2<<endl;       // total price including tax
     
    
    //Exit the program
    return 0;
}

