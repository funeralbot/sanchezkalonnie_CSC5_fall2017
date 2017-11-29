//****************************************************************************** 
// * File:   main.cpp
// * Author: Kalonnie Sanchez
// * Purpose: Display how much food some zoo monkeys have eaten. 
// * Created on November 26, 2017, 8:46 AM
//*****************************************************************************

#include <iostream>

using namespace std;

//******************************************************************************
//
//
//******************************************************************************

int eaten(int [][5]);
int most(int[][5]);
int least(int[][5]);
void average(int,int);

const int
PET(3),
DAY(5);
//******************************************************************************

int main(int argc, char** argv) {
    int 
    food[PET][DAY]={},
    total(0),
    avg(0);
    
    total = eaten(food);
    average(total,avg);
    most(food);
    least(food);

    return 0;
}

//******************************************************************************
//
//
//
//******************************************************************************
int eaten(int a[][DAY]){
    int tfood(0);
    for (int x = 0; x<PET;x++){
        for (int y = 0; y < DAY;y++){
            cout
                << "\nPlease Enter the units of food Money " << x+1 
                << " ate on Day " << y+1 <<endl;
            cin
                >>a[x][y];
            while (a[x][y] < 0){
            cout 
                << "\nERROR, Please re-enter Units eaten:\n";
            cin 
                >> a[x][y];
       
        }tfood+=a[x][y];    
        }
    }return tfood;
}
//******************************************************************************
//
//
//******************************************************************************
void average(int t, int a){  
    a = t / (3*5);
    cout 
        << "The average food eaten was "
        << a << " units.\n";
}
//******************************************************************************
//
//
//
//******************************************************************************
int most(int m[][DAY]){
    int mEat = m[0][0];
    for (int x = 0; x < PET;x++){
        for (int y = 0; y < DAY;y++){
        if (m[x][y] > mEat){
            mEat = m[x][y];
    }
    }
    }cout <<"The most units eaten was "<< mEat << " units.\n";
}
//******************************************************************************
//
//
//
//******************************************************************************
int least(int l[][DAY]){
    int lEat = l[0][0];
    for (int x = 0; x < PET;x++){
        for (int y = 0; y < DAY;y++){
        if (l[x][y] < lEat){
            lEat = l[x][y];
    }
    }
    }cout <<"The least units eaten was "<< lEat << " unit(s).\n";
}