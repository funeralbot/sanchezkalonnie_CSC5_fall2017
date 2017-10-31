/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 22, 2017 12:20AM
 * Purpose:  this program generates average rainfall for three months
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>
using namespace std;    

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    string 
    rf, 
    rf2, 
    rf3;                    //variable for rainfall
    
    int 
    in, 
    in2, 
    in3, 
    totrn, 
    avgrn;                  //total of test scores

    //Input Data/Variables
    cout 
    << "This program will generate the average rainfall for three months.\n"; 
    cout 
    << "First month ?\n";    //input for month 1
    getline(cin, rf);
    cout 
    << "How many inches?\n";   //input for inches   
    cin 
    >> in;
    cin.ignore();
    cout 
    << "Second month?\n";    //input for month 2
    getline(cin, rf2);
    cout 
    << "How many inches?\n";   //input for inches   
    cin 
    >> in2;
    cin.ignore();
    cout 
    << "Final month?\n";     //input for month 3
    getline(cin, rf3);
    cout 
    << "How many inches?\n";   //input for inches   
    cin 
    >> in3;
    

    //Process or map the inputs to the outputs
    totrn = in + in2 + in3;
    avgrn = totrn / 3;
     
    
    //Display all variables 
    
    cout 
    << "The average rainfall for " 
    << rf << ", " << rf2 << ", " << "and " 
    << rf3 << " is " << avgrn << " inches.";   
     
       

    return 0;
}