//******************************************************************************
// File:   main.cpp
// Author: Kalonnie Sanchez
// Created on December 11, 2017, 01:00 AM
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
menu(),  
welcome(), 
srtGame(),
plyGame(short [], short, float &, float);

short
dlrHand(short [], short),
dlrDeck(short *);

int
plrHand(short [], short);

float 
compute(short[], short, float &, float &),
srtBet(float &, float &),
loan(float &);

//******************************************************************************
//                          MAIN FUNCTION
//******************************************************************************
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Loop the Menu
    do{
        //Input Data/Variables
        menu();
        
        cin
            >> choice;
        cin.ignore();
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:srtGame();
            break;

            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice > 0 && choice < 2);
    //Exit the program
    return 0;
}
void menu(){
    //Input Data/Variables
    cout    
        <<"Choose from the Menu\n"
        <<"1. Space Black Jack\n"
        <<"0. Exit Program\n";

}
//******************************************************************************
//
//
//******************************************************************************
void srtGame(){    
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
    
    plyGame(dealer, dcard, minus, debt);  
}

//******************************************************************************
//                      FUNCTION TO COMPUTE 
//                      DEALER CARDS AND PLAYER CARDS
//
//******************************************************************************
float compute(short dlrCard[],short vcard,float &money, float &bet){
    const int
    SIZE(20);
    
    char 
    fileOut[SIZE]="Gamelog.dat";
    
    string 
    fileIn="Gamelog.dat";
    
    ofstream out;
    ifstream in;
    
    out.open(fileOut);
    in.open(fileIn.c_str());
    int 
    userTot(0),
    compTot(0);
    
    compTot = dlrHand(dlrCard, vcard);
    userTot = plrHand(dlrCard, vcard);
    srtBet(money, bet);
    if (compTot > 21){
        out 
            << "\nOh no the dealer busted with "<< compTot
            << "\nYou win."
            << setprecision(2) << fixed <<endl
            <<setw(30)<< "$" << money+(bet+bet);
        cout 
            << "\nOh no the dealer busted with "<< compTot
            << "\nYou win."
            << setprecision(2) << fixed <<endl
            <<setw(30)<< "$" << money+(bet+bet);
        return money += (bet+bet);
    }
    else if (userTot > 21){
        out 
            << "\nOh no you busted with "<< userTot
            << "\nDealer wins."
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money-bet;
        cout 
            << "\nOh no you busted with "<< userTot
            << "\nDealer wins."
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money-bet;
        return money -= bet;
    }
    if (compTot <= 21 && compTot > userTot && compTot != userTot){
        out 
            << "\nDealer wins with "<< compTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money-bet;
        cout 
            << "\nDealer wins with "<< compTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money-bet;
        return money -= bet;
    }
    else if (userTot <= 21 && userTot > compTot && userTot != compTot){
        out 
            << "\nYou win with "<< userTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money+(bet+bet);
        cout 
            << "\nYou win with "<< userTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money+(bet+bet);
        return money += (bet+bet);
    }
    if (userTot == compTot){
        out
            << "\nLooks like a tie.\nNo Winner."
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money;
        cout
            << "\nLooks like a tie.\nNo Winner."
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money;
    }
        //Close the file
    out.close();
    in.close();
}

//******************************************************************************
//                      BETTING FUNTION ASKING USER TO INPUT BET
//                      AMOUNT THEN SUBTRACT AMOUNT BARROWED
//
//******************************************************************************
float srtBet (float &minus, float &x){
    cout 
        << "\nThe display says enter bet amount\n$";
    cin
        >> x;
    if(x > minus){
        cout << "Your vision grows dark and you wake up in your bed.";
    exit(0); 
    } 
    else {
     
    return minus;
    }
}
//******************************************************************************
//                  LOAN FUNCTION ASKING USER TO INPUT
//                  AMOUNT 
//******************************************************************************
float loan (float &a){
    cout 
        <<  " +------------------------+\n"
            " |.----------------------.|\n"
            " ||      ..:.    ..:     ||\n"
            " || ... .:......:..      ||\n"
            " ||     ..:..       ..   ||\n"
            " ||        ..:..  :.     ||\n"
            " |+----------------------+|\n"
            "                          \n"
            "      +-..--------..-+\n"
            "    .-----------------.\n"
            "   / /===============\\ \\\n"
            "  / /=================\\ \\\n"
            " /_______________________\\\n"
            " \\_______________________/\n"
            "\nThe holographic display next to you reads\n"
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
//                  FUNCITON TO SHUFFLE DEALER CARDS
//
//******************************************************************************
short dlrDeck(short *a){  
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
        << "    *                    .--.\n"
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
        "Welcome aboard the Spacecraft\n"
        "Today's game is\n"
        "\t[S][P][A][C][E]\n  [B][L][A][C][K] [J][A][C][K]\n"
        "Press Enter to continue\n";
    cin.get(); //cin.get used to pause program until user presses enter
}
//******************************************************************************
//                      START GAME FUNCTION 
//
//******************************************************************************
void plyGame(short dlrCard[],short vcard,float &money, float bet){
    char 
    input;
    
    welcome();
    cout 
        << "\nYou take a seat in front of the Alien shuffling cards.\n";
    loan(money);
   do{ 
    compute(dlrCard, vcard, money, bet);  
    cout 
        <<"\n\nWould you like to play again?\n"
        "Press [Y] for yes or [N] for no.\n"; 
    cin >> input;
    if(input == 'N'|| input=='n'){     
        exit(0);
    }}while (input == 'Y'|| input=='y');  
}
//******************************************************************************
//                      PLAY CARD FUNCTION
//
//******************************************************************************
short dlrHand(short dlrCard[],short vcard){
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
    dlrSum4= dlrSum3+dlrCard[4],
    dlrSum5= dlrSum4+dlrCard[5];
    cout
        << "\nDEALER CARDS :" <<"["<< dlrCard[0]<<"]"<<"[?]";   
    
    if (dlrSum >= 15){
    return dlrSum;
    }
    if (dlrSum2 >= 15){
    return dlrSum2;
    }
    if(dlrSum3 >= 15){
    return dlrSum3;
    }
    if(dlrSum4 >= 15){
    return dlrSum4;
    }
    if(dlrSum5 >= 15){
    return dlrSum5;
    }      
}
//******************************************************************************
//                      PLAYER CARD FUNCTION
//
//******************************************************************************
int plrHand(short dlrCard[],short vcard){
    vector<int> 
    plrCard,
    plrSum;
    
    char
    input;
    
    for (int x=0,y=0,z=0;z<=1,x <=1,y<=1;z++,y++,x++){
        x=dlrDeck(dlrCard); y=dlrDeck(dlrCard);
         z=x+y;plrCard[x]; plrCard[y];plrSum[z];
        do{
            cout
                << "\nPLAYER CARDS :" <<"["<< x<<"]"
                <<"["<< y<<"]"<<"="<<z;    
            cout 
                <<  "\nWould you like another card?\n"
                    "Press [Y] for yes or [N] for no.\n";
            cin 
                >> input; 
            if(input == 'N'|| input=='n'){
                return z;
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
        }return z;
        } 
    }
}

