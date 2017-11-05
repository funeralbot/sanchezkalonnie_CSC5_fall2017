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
//#include <fstream>   //File I/O NOT USED
//#include <iomanip>   //Format the output NOT USED
#include <string>    //Strings, not for puppets
//#include <cmath>    //everyone loves math NOT USED

using namespace std; //The Standard namespace for system libraries

//User Libraries 

//Global Constants - Not only variables Physics/Math/Conversations only 

//Function Prototypes Here

void 
winner(), //function to display winner
loser(), //function to display loser, how sad.
pcards(); //function to display if card conditions are met


float
hit();//function to add another card to user hand

string
bust();//string to let user know if they've exceeded maximum value 21

short 
dealer();//function to shuffle dealer cards

int 
ucards(); //function to shuffle user cards 

int main(int argc, char** argv) {//Program Execution Begins Here
    //set random number seed
    srand(time(0));
    
    short//variables for dealer cards
    dcard,//first dealer card variable
    dcard2,//second dealer card variable
    dcardt;//dealer card total variable 
    
    int 
    card,//first card variable for user  
    card2,//second card variable for user 
    cardtot;//user card total variable
    
    char
    input;//char command for user input.
    
    float 
    card3;//additional card variable for user hand
    
    bool
    error(0);//boolean expression for user error to display bust string
  
    cout    //output to user program greeting
        <<"Welcome to the table\n"
          "Today's game is BLACKJACK\n"//lets user know name of game
          "Pull up a seat and press ENTER to continue\n";
    cin.get();    //first user input ENTER
   
    //input data
    
    dcard=dealer(); //call function dealer cards to be dealt
    dcard2=dealer();//call function for second dealer card
    
    card=ucards();//call function user cards to be dealt
    card2=ucards();//call function for second user card
                  
    card3=hit(); //call additional hand for user deck
   
    cout//output dealer card results
        <<"\nDEALER card 1:["<<"?"<<"]"//first card output to user
        <<"\nDEALER card 2:["<<dcard2<<"]";//second card output to user
    cin.get();//pause exit until user presses enter 
    
    cout//output to user card results
        <<"\ncard 1:["<<card<<"]"//first card output to user
        <<"\ncard 2:["<<card2<<"]"//second card output to user
        <<"\nYour total is :["<<card+card2<<"]";//output to user total card number
    cin.get();//pause exit until user presses enter 
        
   
    
    cout //ask user if they would like to add card to current hand
        <<"\nWould you like to Hit or Stay?\n"
          "Press (h) to Hit or press (s) to Stay.\n";
    cin
        >>input;
    
    //call play card function
    //ask user if they want to add another card to hand
    //lets user know if they have won or loss
    
    pcards();
    
    if (cardtot > 21){//display if user has exceeded 21
        error=1;
        bust();
    }
    
    
    
    cout
        <<"\nYour total is :["<<card2+card<<"]"//output to user total card number
        <<"\nDealer total is :["<<dcard+dcard2<<"]";
    return 0;//Exit
}

int ucards(){         //function to shuffle user cards
    
    int 
    card,
    card2,
    cardtot;
    card = 11 + rand() / (RAND_MAX / (1 - 11) + 1);//highest value in blackjack is 11
    card2 = 11 + rand() / (RAND_MAX / (1 - 11) + 1);//shuffle second card
    
    
}

short dealer(){ //function to shuffle dealer cards
    
    short
    dcard,
    dcard2,
    dcardt;
    dcard = 11 + rand() / (RAND_MAX / (1 - 11) + 1);//highest value in blackjack is 11
    dcard2 = 11 + rand() / (RAND_MAX / (1 - 11) + 1);//shuffle dealer second card
    
        
}


void winner(){          //function to display if user has won, cheer!   
    cout
        <<"\nGood job, you're a winner.";
}

void loser(){           //function to display if user has lost, how sad. 
    cout
        <<"\nSorry, You've lost.";
}

float hit(){ //hit function 
    char
    input;
    int
    cardtot;
    float 
    card3;
    if (input=='h'||input=='H'){
    do{
    card3 = 11 + rand() / (RAND_MAX / (1 - 11) + 1);
    //add sum of user cards  
    }while (card3 < 1 || card3>=11);
    }    
}

string bust(){ //string letting user know they've exceed card limits
    cout 
        << "Oh no, you've been BUSTED.\n";
}

void pcards(){
    char 
    input;
    int
    cardtot;
    short
    dcardt;
    if (input=='h'||input=='H'){
       hit();//ask user if they want to add another card to hand
    }
    //ask user if they want to keep current cards
    else if (input == 's' || input == 'S'){
        winner();
        loser();
    }
    if (cardtot < dcardt){//if user card less than 21 display loser 
        loser();
    }//display winner if user card is 21 (blackjack)
    else if (cardtot == 21){ 
        winner();
    }
    
}