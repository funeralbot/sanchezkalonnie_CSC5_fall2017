//******************************************************************************
// File:   main.cpp
// Author: Kalonnie Sanchez
// Created on December 11, 2017, 01:00 AM
//Purpose: Space Blackjack: 21 or bust, a simple game of cards. 
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
menu(), //menu function 
welcome(), //function to welcome user 
srtGame(), //start game function 
plyGame(short [], short, float &, float); //funtion to play game 

short
dlrHand(short [], short), //dealer hand function 
dlrDeck(short *);      //dealer Deck function

int
plrHand(short [], short); //player hand function 

float 
compute(short[], short, float &, float &), //compute dealer card function 
srtBet(float &, float &), //start player bet function 
loan(float &); //ask player for loan function 

//******************************************************************************
//                          MAIN FUNCTION
//******************************************************************************
int main(int argc, char** argv) {
    //Declare Variables
    int choice; 
    //do-while loop for menu 
    do{ 
        //Input Data/Variables
        menu(); //call menu function 
        
        cin
            >> choice; //user input 
        cin.ignore();
        //Process or map the inputs to the outputs
        switch(choice){ //switch menu asking user to start or end game
            case 1:srtGame(); //function to start game
            break;

            default:{
                cout
                    <<"Exiting, have a great day!\n";
            }
        }
    }while(choice>0&&choice<2); //while loop letting user end program
    //Exit the program
    return 0;
}
//******************************************************************************
//              MENU FUNCTION ASKING USER TO INPUT MENU CHOICE  
//              SWITCH STATEMENT USED TO FOR MENU 
//******************************************************************************
void menu(){ 
    //output menu choice 
    cout    
        <<"Choose from the Menu\n"
        <<"1. Space Black Jack\n" //1 to start game
        <<"0. Exit Program\n"; //0 to close game

}
//******************************************************************************
//              START GAME FUNCTION SETTING RANDOM NUMBER SEED 
//              SHORT DATA TYPE FOR CARD ARRAY
//              FLOAT DATA TYPE FOR PLAYER LOAN AND BET 
//              PLAY GAME FUNCTION INITIALIZED 
//******************************************************************************
void srtGame(){    
    srand(static_cast<unsigned int>(time(0))); //set random number seed 
    const short 
    CARD(500); //constant with short data type with 500 value for cards
        
    short
    dcard(0), //short data type used for dealer card variable 
    dealer[CARD]={}; //dealer card array
    
    float
    minus(0), //float data type used to hold player loan amount
    debt(0); //float variable used to subtract player bet from loan 
    
    plyGame(dealer, dcard, minus, debt);  //play game function called

}

//******************************************************************************
//              FUNCTION TO COMPUTE DEALER CARDS 
//              AND PLAYER CARDS DETERMINE WINNER         
//              SAVE GAME STATS AND ADD OR SUBTRACT 
//              BET FROM LOAN AMOUNT 
//******************************************************************************
float compute(short dlrCard[],short vcard,float &money, float &bet){
    const int
    SIZE(20); //constant integer used to hold a value of twenty 
    
    char 
    fileOut[SIZE]="Gamelog.dat"; //game log saving game stats
    
    string 
    fileIn="Gamelog.dat"; //input game stats into game log 
    
    ofstream out; 
    ifstream in;
    
    out.open(fileOut);
    in.open(fileIn.c_str()); //open game log to record stats
    int 
    userTot(0), //integer variable used to hold user card total 
    compTot(0); //dealer card total 
    //pass dealer hand function to dealer card total 
    compTot = dlrHand(dlrCard, vcard); 
    //pass player hand function into user card total 
    userTot = plrHand(dlrCard, vcard);
    //call start bet function 
    srtBet(money, bet);
    if (compTot > 21){ //determine if dealer hand exceeds card limit  
        out 
            << "\nOh no the dealer busted with "<< compTot
            << "\nYou win."
            << setprecision(2) << fixed <<endl
            <<setw(30)<< "$" << money + bet;
        cout 
            << "\nOh no the dealer busted with "<< compTot
            << "\nYou win."
            << setprecision(2) << fixed <<endl
            <<setw(30)<< "$" << money + bet;
        return money += bet;
    }
    else if (userTot > 21){ //determine if player hand exceeds card limit
        out 
            << "\nOh no you busted with "<< userTot
            << "\nDealer wins."
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money - bet;
        cout 
            << "\nOh no you busted with "<< userTot
            << "\nDealer wins."
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money - bet;
        return money -= bet;
    }
    //determine if dealer won game 
    if (compTot <= 21 && compTot > userTot && compTot != userTot){
        out 
            << "\nDealer wins with "<< compTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money - bet;
        cout 
            << "\nDealer wins with "<< compTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money - bet;
        return money -= bet;
    }
    //determine if player won game
    else if (userTot <= 21 && userTot > compTot && userTot != compTot){
        out 
            << "\nYou win with "<< userTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money + bet;
        cout 
            << "\nYou win with "<< userTot
            << setprecision(2) << fixed 
            <<endl<<setw(30)<< "$" << money + bet;
        return money += bet;
    }
    //determine if player and dealer have tie
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
        //stop recording game stats 
    out.close();
    in.close();
}

//******************************************************************************
//                      BETTING FUNTION ASKING 
//                      USER TO INPUT BET THEN RETURN BET AMOUNT
//                      TO BE ADDED OR SUBTRACTED
//******************************************************************************
float srtBet (float &minus, float &x){
    cout 
        << "\nThe display says enter bet amount\n$";
    cin
        >> x; //ask user for bet amount 
    if(x > minus){
        cout << "Your vision grows dark and you wake up in your bed.";
    exit(0); //if player bets exceeds amount owned then close program 
    } 
    else {
     
    return minus; //return loan amount with subtracted bet 
    }
}
//******************************************************************************
//                  LOAN FUNCTION ASKING USER TO INPUT
//                  AMOUNT TO BORROW RETURN LOAN AMOUNT 
//******************************************************************************
float loan (float &a){
    cout 
        <<  " +------------------------+\n"
            " |.----------------------.|\n"
            " ||      ....    ...     ||\n"
            " || ... ...........      ||\n"
            " ||     .....       ..   ||\n"
            " ||        .....  ..     ||\n"
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
                >> a; //ask user to loan amount 
    //while loop 
    while(a >= 11 || a <= 0){ //display error if loan amount not inside range 
    cout 
        << "The display makes and ERROR sound.\n"
           "Enter a value between 1 and 10\n";
    cin 
        >> a;   
    }
    if (a <= 10){ //if loan amount inside range square value 
    a = pow(a,2.0f);
    cout 
        <<  "\nA mechanical laugh comes from the display.\n"
            "On the display is the amount you have borrowed"
            //IOMANIP library to create loan amount in dollar value 
        <<  setprecision(2) << fixed <<endl<<setw(30)<< "$" <<a; 
    return a; //return loan amount 
    }
}

//******************************************************************************
//                  FUNCITON TO SHUFFLE DEALER CARDS
//                  WITH FOR LOOP AND POINTER ARRAY AND 
//                  RANDOM NUMBER GENERATOR 
//******************************************************************************
short dlrDeck(short *a){   
    for (short x=0;x<=52;x++){ //for loop to pass card value into array 
        a[x] = rand() % 11 + 1; 
    return a[x]; //return array 
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
//                      PLAYGAME FUNCTION PASSING CARD ARRAY 
//                      AND PASS BY REFRENCE OF LOAN AMOUNT 
//                      DO WHILE LOOP ASKING USER TO REPEAT GAME
//******************************************************************************
void plyGame(short dlrCard[],short vcard,float &money, float bet){
    char 
    input; //user input variable 
    
    welcome(); //call to welcome function 
    cout 
        << "\nYou take a seat in front of the Alien shuffling cards.\n";
    loan(money); //call to loan function 
    //do while loop asking user to repeat compute game function 
   do{ 
    compute(dlrCard, vcard, money, bet);  //call to compute function 
    cout 
        <<"\n\nWould you like to play again?\n"
        "Press [Y] for yes or [N] for no.\n"; 
    cin >> input;
    cin.ignore();
    if(input == 'N'|| input=='n'){ //if no then exit game     
        exit(0);
    }}while (input == 'Y'|| input=='y'); //if yes then repeat game 
}
//******************************************************************************
//              DEALER HAND FUNCTION PASSING ARRAY
//              USING FOR LOOP TO OUTPUT CARD VALUE
//              RETURN DEALER TOTAL CARD VALUE 
//******************************************************************************
short dlrHand(short dlrCard[],short vcard){
    const short 
    CARD(500); //constant short with value of 500 for player cards 
    dlrCard[CARD]; //dealer card array 
    for (short x=0; x <= CARD; x++){ //for loop to pass card value into array 
        dlrCard[x] = dlrDeck(dlrCard);
    }
    
    //add dealer cards together 
    int 
    dlrSum = dlrCard[0]+dlrCard[1], 
    dlrSum2= dlrSum+dlrCard[2],
    dlrSum3= dlrSum2+dlrCard[3],
    dlrSum4= dlrSum3+dlrCard[4],
    dlrSum5= dlrSum4+dlrCard[5];
    cout
        << "\nDEALER CARDS :" <<"["<< dlrCard[0]<<"]"<<"[?]";   
    //return value of dealer hand 
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
//                   PLAYER CARD FUNCTION USING VECTOR ARRAY 
//                   TO HOLD DEALER CARDS OUTPUT THROUGH 
//                   PLAYER HAND WITH LOOP AND RETURN CARD VALUE 
//******************************************************************************
int plrHand(short dlrCard[],short vcard){
    vector<int> 
    plrCard,//vector holding player cards 
    plrSum; //vector holding card sum 
    
    char
    input;
    
    //for loop passing vector in to hold card value 
    for (int x=0,y=0,z=0;z<=1,x <=1,y<=1;z++,y++,x++){
        x=dlrDeck(dlrCard); y=dlrDeck(dlrCard);
         z=x+y;plrCard[x]; plrCard[y];plrSum[z];
         //do while loop for player hand
        do{ //deal player cards 
            cout
                << "\nPLAYER CARDS :" <<"["<< x<<"]"
                <<"["<< y<<"]"<<"="<<z;    
            cout 
                <<  "\nWould you like another card?\n"
                    "Press [Y] for yes or [N] for no.\n";
            cin 
                >> input; 
            cin.ignore();
            if(input == 'N'|| input=='n'){
                return z; //return card value 
                break;} 
        //if card value less then limit ask user for another card 
        }while(z>=21);{ 
            if(input == 'N'|| input=='n'){
                break;} 
        for (int w=0;w<1;w++){
            w=dlrDeck(dlrCard); //add card value together 
            plrCard[w];
            z=z+w;
            cout
                << "\nPLAYER CARDS :" <<"["<< x<<"]"
                <<"["<< y<<"]"<<"["<< w<<"]"<<"="<<z;
            cout 
                <<  "\nWould you like another card?\n"
                    "Press [Y] for yes or [N] for no.\n";
            cin 
                >> input; //ask user for another card 
            cin.ignore();
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
        }return z; //return final card value 
        } 
    }
}

