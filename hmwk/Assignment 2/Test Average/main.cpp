/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 22, 2017 12:20AM
 * Purpose:  this program generates a testing average
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //manipulates the Output

using namespace std;    

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float 
    ts1, 
    ts2, 
    ts3, 
    ts4, 
    ts5; //variable for test scores
    
    float 
    total, 
    total2;   //total of test scores

    //Input Data/Variables
    cout 
    << "This program will generate an average for your test scores.\n"; 
    cout 
    << "Please enter score for test number 1?\n";    //input for test 1
    cin 
    >> ts1;  
    cout 
    << "Enter score for test number 2?\n";    //input for test 2
    cin 
    >> ts2;
    cout 
    << "Enter score for test number 3?\n";    //input for test 3
    cin 
    >> ts3;
    cout 
    << "Enter score for test number 4?\n";    //input for test 4
    cin 
    >> ts4;
    cout 
    << "Enter score for test number 5?\n";    //input for test 5
    cin 
    >> ts5;

    //Process or map the inputs to the outputs
    total = ts1 + ts2 + ts3 + ts4 + ts5;
    total2 = total / 5;
    
    //Display all variables 
    cout 
    << setprecision(1) << fixed        //I/O manipulation for decimal 
    << "Your testing average is: " 
    << total2 <<" percent";     //test score avg   

    return 0;
}