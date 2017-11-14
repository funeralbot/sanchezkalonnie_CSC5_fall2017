//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: Create a program to let the user                                  *
//*          play a game of rock, paper, scissors                              *
//*          against the computer.                                             *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //random number seed
#include <ctime>        //set counter




using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************
char cmpRPS();
char plyRPS();
string winner(char, char);


//Execution Begins Here!
int main(int argc, char** argv) {
    // set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    char cmptr,player;
    //input data
    cmptr=cmpRPS();
    
    
    player=plyRPS();
 
    cout << "Computer "<<cmptr<<endl<<
            "Player "<< player<<endl<<
            "Results "<< winner(cmptr,player)<<endl;
    
    //Exit the program
    return 0;
}

//******************************************************************************
//          These functions use the random number seed to                      *
//          cycle through the choices of rock, paper, scissors,                *
//          then compares the result entered with the result                   *
//          the computer has generated.                                        *
//******************************************************************************
string winner(char cmp, char ply){
    if(cmp==ply)return "tie";
    if((cmp=='R'&&ply=='S')||
       (cmp=='P'&&ply=='R')||
       (cmp=='S'&&ply=='P'))return "Computer Winner";
    return "player winner";
}

char plyRPS(){
    char plyTrn;
    cout<<"this game is rock paper scissors\n"
            <<"Input your choice\n"
            <<"R-Rock, P-Paper, S-Scissors\n";
    cin>>plyTrn;
    return plyTrn;
}

char cmpRPS(){
    char cmptr;
    do{
        cmptr=rand()%4+80;//[P,Q,R,S]=[80,81,82,83]
    }while(cmptr=='Q');//if Q, then choose again
    return cmptr;
}