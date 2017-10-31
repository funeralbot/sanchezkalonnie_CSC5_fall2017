/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 18, 2017, 3:00 PM
 * Purpose: This program will determine 
 * how many pennies a specific human is paid.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>



using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float
    pen(.01),
    dpay,
    tpay,
    idays;
       
    cout
        << "this program will calculate how much you earned.\n"
           "Please enter how many days worked.\n";  //ask user for information
    cin
        >>idays;    //input for user
    
    if (idays<1)        //error if value negative
        cout
            <<"Error, Please enter a positive value for days worked\n";
        
    for(int wday=1; wday<=idays; wday++){       //loop for days multiplied by pennies        
        cout
            <<"Day "<< wday << "\t $"<< pen <<endl; //output results to user
        dpay = pen; 
        pen *= 2;
        tpay += dpay;               //logic for pennies
    }
    cout
        <<"Your total wage is $"<<tpay;
    
    
    
    
    
    
    
    //Exit the program
    return 0;
}
