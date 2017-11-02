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
short//variables for dealer cards
dcard,
dcard2,
dcardt;

int 
card,
card2,
cardtot;



//Function Prototypes Here
int 
ucards(); //function to shuffle user cards 
void 
winner(), //function to display winner
loser(); //function to display loser, how sad.
short 
dealer();//function to shuffle dealer cards



//Program Execution Begins Here
int main(int argc, char** argv) {
    
    // set random number seed
    srand(time(NULL));
    
    cout    //output to user program greeting
        <<"Welcome to table\n"
          "Today's game is BLACKJACK\n"
          "Pull up a seat and press ENTER to begin\n";
    cin.get();    //first user input ENTER
    
    
    //input data
    dealer(); //call function user cards to be dealt
    ucards(); //call function user cards to be dealt
   
    cout//output dealer card results
        <<"\nDEALER card 1:["<<"?"<<"]"//first card output to user
        <<"\nDEALER card 2:["<<dcard2<<"]";//second card output to user
    cin.get();//pause exit until user presses enter 
    
    
    
    cout//output to user card results
        <<"\ncard 1:["<<card<<"]"//first card output to user
        <<"\ncard 2:["<<card2<<"]"//second card output to user
        <<"\nYour total is :["<<cardtot<<"]";//output to user total card number
    cin.get();//pause exit until user presses enter 
        
    if (cardtot < dcardt){//if user card less than 21 display loser 
        loser();
    }//display winner if user card is 21 (blackjack)
    else if (cardtot==21 || cardtot > dcardt){ 
        winner();
    }
    
    cout 
        <<"\nDEALER total is :["<<dcardt<<"]";//display dealer card total
     //Exit
    return 0;
}

int ucards(){         //function to shuffle user cards
    card = rand()%11+1;//highest value in blackjack is 11
    card2 = rand()%11+1;//shuffle second card
    cardtot=card+card2;//add sum of user cards
    return cardtot;
}

void winner(){          //function to display if user has won, cheer!   
    cout
        <<"Good job, you're a winner.";
}

void loser(){           //function to display if user has lost, how sad. 
    cout
        <<"Sorry, You've lost.";
}

short dealer(){ //function to shuffle dealer cards
    dcard = rand()%11+1;//highest value in blackjack is 11
    dcard2 = rand()%11+1;//shuffle dealer second card
    dcardt=dcard+dcard2;//add sum of dealer cards
    return dcardt;    
}