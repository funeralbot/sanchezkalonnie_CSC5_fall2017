/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 21, 2017 11:20AM
 * Purpose:  this program generates ticket sales information 
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
    a, 
    b, 
    c; //number of seats sold
    
    float 
    total;   //total of seats sold 

    //Input Data/Variables
    cout 
    << "Enter number of seats sold for Class A?\n";    //input for class A
    cin 
    >> a;  
    cout 
    << "Enter number of seats sold for Class B?\n";    //input for class B
    cin 
    >> b;
    cout 
    << "Enter number of seats sold for Class C?\n";    //input for class C
    cin 
    >> c;

    //Process or map the inputs to the outputs
    a = a * 15.00;      //cost of seats for class A
    b = b * 12.00;      //cost of seats for class B
    c = c * 09.00 ;     //cost of seats for class C
    total = a + b + c;  //total cost of seats            
    
    //Display all variables 
    cout 
    << setprecision(2) << fixed        //I/O manipulation for decimal 
    << "Your total number of ticket sales is \n$" 
    << total;     //results of seats sold  

    return 0;
}