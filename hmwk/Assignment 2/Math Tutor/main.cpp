/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 23, 2017 2:20PM
 * Purpose:  this program is a math tutor 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // kern the output
#include <cstdlib>   // for rand and srand 
#include <ctime>     // for the time function 

using namespace std; 

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    unsigned 
    seed(time(0));
    srand(seed);             // set random number seed
    
    //Declare variables
    unsigned short 
    top,
    bot,
    sansw,
    cansw;                  // variables for program
    
    short
    min(100),
    max(900);               // variables for random number range
    
    //Initialize variables
    top = rand() % max + min;
    bot = rand() % max + min;   // logic for random number
    
    //Input Data/Variables
    cout
    << "Welcome to the Math Tutor! \n"
    << "Answer the follow: \n"
    << setw(6) << top
    << "\n+" << setw(5) << bot 
    << "\n------\n";
    cin
    >>  sansw;                  // input for user answer
    
   //Process or map the inputs to the outputs
    cansw = top + bot;          // addition logic 
    
    //Display/Output all pertinent variables
    cout
    << ( (cansw == sansw) ? "Right\n" : "Wrong\n")
    << "The answer is: " << cansw << "\n";          // output of answer 
 
    //Exit the program
    return 0;
}