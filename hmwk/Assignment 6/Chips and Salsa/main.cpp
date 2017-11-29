//****************************************************************************** 
// * File:   main.cpp
// * Author: Kalonnie Sanchez
// * Purpose: find sales for chip and salsa company
// * Created on November 26, 2017, 8:46 AM
//*****************************************************************************

#include <iostream>
#include <string>

using namespace std;





//Function Prototypes
int sales(string[],int[]);
int most(int[]);
int least(int[]);
void results(string[],int[],int);


//******************************************************************************

int main(int argc, char** argv) {
    const int 
    NAME(5);
    
    int 
    sells[NAME]={},
    data(0);
   
    string 
    salsa[NAME]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
  
    data = sales(salsa,sells);    
    results(salsa,sells,data);

    return 0;
}
//******************************************************************************
//
//
//******************************************************************************
void results(string n[],int s[],int t){
    int 
    mSold = most(s),
    lSold = least(s);
    
    for (int x=0;x<5;x++){
        cout 
            << n[x]<<".............." << s[x]<<"\n";
        }
        cout
            << "\nTotal Salsa Sold: "<< t
            << "\nMost Sold Salsa: "<<n[mSold]
            << "\nLeast Sold Salsa: "<<n[lSold];
}

//******************************************************************************
//
//
//******************************************************************************
int sales(string n[],int s[]){
    int
    tsold(0);

    cout 
        << "This program will let you "
            "keep track of sales for "
            "your salsa company\n";
    
    for (int x = 0; x < 5;x++){
        cout
            <<"\nPlease enter how many "
              "units sold this month for "
            << n[x] << " salsa:\n";
        cin 
            >> s[x];
        
        while (s[x] < 0){
            cout 
                << "\nERROR, Please re-enter Units sold:\n";
            cin 
                >> s[x];
       
        }tsold+=s[x];
 
    }return tsold;
}
//******************************************************************************
//
//******************************************************************************
int most(int m[]){
    int msold(0);
    for(int x=0;x<5;x++){
        if (m[x]> m[msold]){
            msold=x;
    }
    }return msold;
}

//******************************************************************************
//
//******************************************************************************
int least(int l[]){
    int lsold(0);
    for(int x=0;x<5;x++){
        if (l[x]< l[lsold]){
            lsold=x;
    }
    }return lsold;
}