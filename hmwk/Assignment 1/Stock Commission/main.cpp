/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 14, 2017, 12:20 PM
 * Purpose: Create a diamond pattern
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
    float shares=750;
    float price=35.00;
    float comm=2;
    float total,total2,total3,total4;       // variables used for problem
    
    //Initialize Variables
     
    
    
    //Process or map the inputs to the outputs
    total=shares*price;     // calculates price per shares 
    
    total2=total+price;     // adds total share amount
    
    total3=total2*comm*.01; // calculates commission amount
    
    total4=total2+total3;   // calculates total amount
    
    
    //Display/Output all pertinent variables
    cout<<"Stock Amount $"<<total2<<endl;           // display stock amount
    cout<<"Commission Amount $"<<total3<<endl;      // display commission amount
    cout<<"Total Amount $"<<total4<<endl;           // displays sum of amount
    
    //Exit the program
    return 0;
}

