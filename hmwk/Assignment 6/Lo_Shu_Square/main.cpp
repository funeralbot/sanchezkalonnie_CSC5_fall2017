//****************************************************************************** 
// * File:   main.cpp
// * Author: Kalonnie Sanchez
// * Purpose: Find the largest and smallest value in an ARRAY
// * Created on November 26, 2017, 8:46 AM
//*****************************************************************************


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



//******************************************************************************
//
//
//******************************************************************************
void rNum(int [][3]);
void addNum(int [][3],int);
bool square(int [][3]);
void grid(int [][3]);


const int 
MAGI(3);

//******************************************************************************

int main(int argc, char** argv) {
    
    

    int
    add(0),
    loShu[MAGI][MAGI]={{}};
    
    do{
        add++;
        cout 
            << add << endl;
        rNum(loShu);
        if (add == 10)
            break;
    }while(!square(loShu));
    
    grid(loShu);
      

    return 0;
}
//******************************************************************************
//
//
//
//******************************************************************************
void grid(int n[][3]){
    for (int x = 0; x<MAGI;x++){
        for (int y = 0; y<MAGI;y++){
            cout
                <<n[x][y]<<"";
        }
    }cout<<endl;
}

//******************************************************************************
//
//
//
//******************************************************************************
bool square(int n[][3]){
    int
    temp = n[0][0]+n[0][1]+n[0][2];
    for (int x=0;x<MAGI;x++){
        if (n[x][0] + n[x][1] + n[x][2] != temp)
        return 0;
    }
    if(n[0][0]+n[1][1]+n[2][2]!=temp)
        return 0;
    if(n[0][2]+n[1][1]+n[2][0]!=temp)
        return 0;
    
    return 1;
}

//******************************************************************************
//
//
//
//******************************************************************************
void rNum(int n[][3]){
    int 
    num(0),
    ANUM[]={};
    
    srand(time(NULL));
    
    bool 
    repeat(1);
    
    for (int x = 0; x < 9; x++){
        do{
            repeat=1;
            num = rand()%9+1;
            if (ANUM[num-1]==0){
                ANUM[num-1]=num;
                repeat=0;
            } 
        }while (repeat);
          addNum(n,num);
    }
}
//******************************************************************************
//
//
//******************************************************************************
void addNum(int num[][3],int n){
    for(int x = 0; x < MAGI;x++){
        for (int y = 0; y < MAGI;y++){
            if (num[x][y]==0){
                num[x][y]=n;
                return;
            }     
        }
    }
}