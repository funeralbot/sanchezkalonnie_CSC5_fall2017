/* 
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 *
 * Created on December 2, 2017, 11:32 PM
 */


#include <iostream>


using namespace std;
//******************************************************************************
//
//
//


int 
search(int[],int,int);

int main(int argc, char** argv) {
    const int NUMARY(10);
    int 
    numbers[NUMARY]={13579,26791,26792,33445,55555,
                     62483,77777,79422,85647,93121},
    input;

    search(numbers,NUMARY,input);
   
    
    return 0;
}
//******************************************************************************
//
//
//
int search(int a[],int x,int y){
    int 
    locate(0),
    pos(-1);
    
    bool
    found(0);
    
    cout 
        << "Please Enter the 5 digit winning number:\n";
    cin
        >> y;
    
    while(locate < x && !found){
        if(a[locate] == y){
         found = 1;
         pos = locate;
        }locate++;
    }
    if (pos == -1){
        cout 
            << "LOSER, Number not found.";
    }
    else{
        cout 
            << "Congratulations, You're a WINNER.";         
    }
}


