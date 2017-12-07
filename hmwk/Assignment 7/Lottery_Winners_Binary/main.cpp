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
    first(0),
    last = x - 1,
    middle(0),
    pos(-1);
    
    bool
    found(0);
    
    cout 
        << "Please Enter the 5 digit winning number:\n";
    cin
        >> y;
    
    while(!found && first <= last){
        middle = (first + last) / 2;
        
        if(a[middle] == y){
            found = 1;
            pos = middle;
        }
        else if (a[middle] > y){
            last = middle - 1;  
        }
        else{
            first = middle + 1;
        }
    }
    if (pos == -1){
        cout 
            << "SORRY, Number not found.";
    }
    else{
        cout 
            << "SUCCESS! Number found.";         
    }
    
}


