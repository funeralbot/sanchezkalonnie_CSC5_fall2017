//******************************************************************************
// File:   main.cpp
// Author: Kalonnie Sanchez
// Created on November 30, 2017, 01:00 AM
//Purpose: Blackjack: 21 or bust, a simple game of cards. 
//******************************************************************************

//System Libraries 
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O 
#include <iomanip>   //Format the output 
#include <string>    //Strings, not for puppets
#include <cmath>    //everyone loves math
#include <vector>   //vector library  

using namespace std; //The Standard namespace for system libraries

//User Libraries 

//Global Constants - Not only variables Physics/Math/Conversations only 

//******************************************************************************
//Function Prototypes Here
//******************************************************************************
void
welcome(),
plrHand(short [], short),
dlrHand(short [], short),
srtGame(short [], short, float &, float);

short
dlrDeck(short []);


float 
srtBet(float &, float),
loan(float &);



//******************************************************************************
//                          MAIN FUNCTION
//******************************************************************************
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    const short 
    CARD(500);
        
    short
    dcard(0),
    dealer[CARD]={};
    
    float
    minus(0),
    debt(0);
    
    bool
    error(0);
    
    
    srtGame(dealer, dcard, minus, debt);
    
    
    
   
   
    return 0;//Exit
}
//******************************************************************************
//
//
//******************************************************************************



//******************************************************************************
//                      BETTING FUNTION ASKING USER TO INPUT BET
//                      AMOUNT THEN SUBTRACTED FROM AMOUNT BARROWED
//
//******************************************************************************
float srtBet (float &minus, float x){

    cout 
        << "\nThe display says enter bet amount\n$";
    cin
        >> x;
    if(x > minus){
        cout << "Your vision grows dark and you wake up in your bed.";
        cin.get();
    return 0;
    } 
    else {
    cout << setprecision(2) << fixed <<endl<<setw(30)<< "$" << minus-x; 
    return minus -= x;
    }
}
//******************************************************************************
//                  LOAN FUNCTION ASKING USER TO INPUT
//                  AMOUNT 1 - 10 
//******************************************************************************
float loan (float &a){
    cout 
        <<  "\nThe holographic display next to you reads\n"
            "\"Enter the amount you wish to borrow\"\n";
    cin 
        >> a;   
    
    while(a >= 11 || a <= 0){
    cout 
        << "The display makes and ERROR sound.\n"
           "Enter a value between 1 and 10\n";
    cin 
        >> a;   
     }
    if (a <= 10){
    a = pow(a,2.0f);
    cout 
        <<  "\nA mechanical laugh comes from the display.\n"
            "On the display is the amount you have borrowed"
        <<  setprecision(2) << fixed <<endl<<setw(30)<< "$" <<a; 
    return a;
    }
}

//******************************************************************************
//                  FUNCITON TO SHUFFLE DEALER CARD
//
//******************************************************************************
short dlrDeck(short a[]){
    
    for (short x=0;x<=52;x++){
        a[x] = rand() % 11 + 1;
    return a[x];
    }
}


//******************************************************************************
//                  OUTPUT PROGRAM GREETING TO USER
//                  LETS USER KNOW NAME OF GAME 
//                  ASK USER TO PRESS ENTER TO CONTINUE
//******************************************************************************
void welcome(){
    cout    
        <<"Welcome aboard the Spacecraft\n"
        "    *                    .--.\n"
        "                        / /  `\n"
        "       +               | |\n"
        "              '         \\ \\__,\n"
        "          *          +   '--'  *\n"
        "              +   /\\\n"
        " +              .'  '.   *\n"
        "        *      /======\\      +\n"
        "              ;:.  _   ;\n"
        "              |:. (_)  |\n"
        "              |:.  _   |\n"
        "    +         |:. (_)  |          *\n"
        "              ;:.      ;\n"
        "            .' \\:.    / `.\n"
        "           / .-'':._.'`-. \\\n"
        "           |/    /||\\    \\|\n"
        "         _..--\"\"\"````\"\"\"--.._\n"
        "   _.-'``                    ``'-._\n"
        " -\'                                '-\n"
        "Today's game is\n"
        "\t[S][P][A][C][E]\n  [B][L][A][C][K] [J][A][C][K]\n"
        "Press Enter to continue\n";
    cin.get(); //cin.get used to pause program until user presses enter
}
//******************************************************************************
//                      START GAME FUNCTION 
//
//******************************************************************************
void srtGame(short dlrCard[],short vcard,float &money, float bet){
    
    //welcome();
    cout 
        <<  "\nYou take a seat in front of the Alien shuffling the cards.\n";
    //loan(money);
    //dlrHand(dlrCard, vcard);
    plrHand(dlrCard, vcard);
    
    //srtBet(money, bet);  
}
//******************************************************************************
//                      PLAY CARD FUNCTION
//
//******************************************************************************
void dlrHand(short dlrCard[],short vcard){
    const short 
    CARD(500);
    dlrCard[CARD];
    for (short x=0; x <= CARD; x++){
        dlrCard[x] = dlrDeck(dlrCard);
    }
    int 
    dlrSum = dlrCard[0]+dlrCard[1],
    dlrSum2= dlrSum+dlrCard[2],
    dlrSum3= dlrSum2+dlrCard[3],
    dlrSum4= dlrSum3+dlrCard[4];

    cout
        << "\nDEALER CARDS :" <<"["<< dlrCard[0]<<"]"<<"[?]"    
        << dlrCard[1]<<"="<<dlrSum;
   
    if (dlrSum <= 15){
        cout<<"+" <<dlrCard[2]<<"="<< dlrSum2<<"phase one";
    }
    if(dlrSum2 <= 15){
        cout<<"+" <<dlrCard[3]<<"="<< dlrSum3<<"phase two";
    }
    if(dlrSum3 <= 15){
        cout<<"+" <<dlrCard[4]<<"="<< dlrSum4<<"phase three";
    }
}
//******************************************************************************
//                      PLAY CARD FUNCTION
//
//******************************************************************************
void plrHand(short dlrCard[],short vcard){
    vector<int> 
    plrCard,
    plrSum;
    
    char
    input;
    
    for (int x=0,y=0,z=0;z<=1,x <=1,y<=1;z++,y++,x++){
        x=dlrDeck(dlrCard);y=dlrDeck(dlrCard);
         z=x+y;plrCard[x];plrCard[y];plrSum[z];

    do{cout
            << "\nPLAYER CARDS :" <<"["<< x<<"]"
            <<"["<< y<<"]"<<"="<<z;    
        cout 
            <<  "\nWould you like another card?\n"
                "Press [Y] for yes or [N] for no.\n";
        cin 
            >> input; 
        if(input == 'N'|| input=='n'){
        break;}
    }while(z>=21);{ 
        if(input == 'N'|| input=='n'){
        break;}
    for (int w=0;w<1;w++){
        w=dlrDeck(dlrCard);
        plrCard[w];
        z=z+w;
        cout
            << "\nPLAYER CARDS :" <<"["<< x<<"]"
            <<"["<< y<<"]"<<"["<< w<<"]"<<"="<<z;
        cout 
            <<  "\nWould you like another card?\n"
                "Press [Y] for yes or [N] for no.\n";
        cin 
            >> input;
        if(input == 'N'|| input=='n'){
           break;}
        for (int r=0;r<1;r++){
        r=dlrDeck(dlrCard);
        plrCard[r];
        z=z+r;
        cout
            << "\nPLAYER CARDS :" <<"["<< x<<"]"
            <<"["<< y<<"]"<<"["<< w<<"]"<<"["<< r<<"]"<<"="<<z; 
        
        }
        }
    }  
    }
}

