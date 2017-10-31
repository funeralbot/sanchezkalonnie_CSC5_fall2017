/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on October 30, 2017, 08:00 PM
 * Purpose: Blackjack: 21 or bust, a simple game of cards. 
 */

//System Libraries 
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
#include <iomanip>   //Format the output
#include <string>    //Strings, not for puppets
#include <cmath>    //everyone loves math

using namespace std; //The Standard namespace for system libraries

//User Libraries 

//Global Constants - Not only variables Physics/Math/Conversations only 
short 
card,
card2,
cardtot;

//Function Prototypes Here
void dcards(); 





//Program Execution Begins Here
int main(int argc, char** argv) {
     // set random number seed
    srand(time(0));
    
    cout
        <<"Welcome to table\n"
          "Today's game is BLACKJACK\n"
          "Pull up a seat and press ENTER to begin\n";
    cin.get();    
    
    
    //input data
    dcards();
    cardtot=card+card2;
    
    
    
    cout
        <<"\ncard 1:["<<card<<"]"
        <<"\ncard 2:["<<card2<<"]"
        <<"\nYour total is :["<<cardtot<<"]";
        cin.get();
   
        
    
    //Exit
    return 0;
}

void dcards(){
    card = rand()%11+1;
    card2 = rand()%11+1;
    return;
}

