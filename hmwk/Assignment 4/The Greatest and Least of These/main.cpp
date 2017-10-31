/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 19, 2017, 10:00 PM
 * Purpose: The Greatest and Least of These 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library


using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int
    min,
    max,
    input;
    
    cout
        <<"This program will display the largest "
          "and smallest \nof a series of numbers "
          "entered.\nPress -99 to end series.\n";       //let user know program purpose
    
    while (input != -99){       //enable -99 to stop loop
        cin
            >> input;                   //ask user for input
        if (input < max && input != -99)        //locates smallest number
            min = input;    
        else if (input > max && input != -99)  //locates largest number
            max = input;
    }    
    
    cout
        << "the largest number is " << max
        << "\nthe smallest number is " << min;      //outputs results to user
        
    
    
    //Exit the program
    return 0;
}
