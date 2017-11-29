//****************************************************************************** 
// * File:   main.cpp
// * Author: Kalonnie Sanchez
// * Purpose: Find the largest and smallest value in an ARRAY
// * Created on November 26, 2017, 8:46 AM
//*****************************************************************************

#include <cstdlib>
#include <iostream>

using namespace std;

//******************************************************************************
//
//
//******************************************************************************

int partA(int[], int, int);


//******************************************************************************

int main(int argc, char** argv) {
    const int 
    ARS(10);
    
    int
    input[ARS]={},
    big(0),
    small(0);
    
    partA(input,big,small);

    return 0;
}

//******************************************************************************
//
//
//
//******************************************************************************
int partA(int a[], int b, int s){
    cout
        <<"This program will tell you the "
          "largest and smallest value of "
          "the integers entered.\n";
    for (int w = 0; w < 5;w++){
        cout 
            << "Please enter an Integer: \n";
        cin >> a[w];
    }
    
    b = a[0];
    s = a[0];
        
    for (int x=0; x < 5;x++){
        int temp = a[x];
        if (temp < s)
            s = temp;
        else if (temp > b)
            b = temp;        
    }
    cout
        <<"The Largest value is :" << b
        <<"\nThe Smallest value is :"<< s;
}


