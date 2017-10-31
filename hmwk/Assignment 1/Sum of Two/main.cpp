/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 12, 2017, 10:38 PM
 * Purpose: Display the sum of two numbers  
 */
        //The sum of two numbers
//System Libraries 
#include <iostream> //Input/Output Stream Library 
using namespace std; //The Standard namespace for system libraries

//User Libraries 

//Global Constants - Not only variables Physics/Math/Conversations only 

//Functions Prototypes

//Executions Begins Here! 
int main(int argc, char** argv) {
    //Declare Variables
    int sum_1, sum_2, total; // defines the variables used for program
    
    //Initialize Variables
    sum_1 = 50; // the sum of the first variable 
    sum_2 = 100; // the sum of the second variable 
    total = 150; // the sum of two variables  
    
    //Display/Output all pertinent variables
    cout << "the first number is " << sum_1 << endl; // lets the user know what the sum of the first variable is 
    cout << "the second number is " << sum_2 <<endl; // lets the user know what the sum of the second variable is
    cout << "together they make " << total << endl; // lets the user know what the sum of the two variable is
    //Exit the program
    return 0;
}

