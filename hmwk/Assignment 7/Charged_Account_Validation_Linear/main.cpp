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
void 
mrkSort(int [],int),
prntAry(int [],int,int);

int 
search(int[],int,int);

int main(int argc, char** argv) {
    const int NUMARY(18);
    int 
    numbers[NUMARY]={5658845,4520125,7895122,8777541,8451277,
    1302850,8080152,4562555,5552012,5050552,7825877,1250255,
    1005231,6545231,3852085,7576651,7881200,4581002},
    input;
    
   
    prntAry(numbers,NUMARY, 6);
    mrkSort(numbers,NUMARY);
    prntAry(numbers,NUMARY, 6);
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
        << "Please Enter the 7 digit number you're searching for:\n";
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
            << "SORRY, Number not found.";
    }
    else{
        cout 
            << "SUCCESS! Number found.";         
    }
    
}

//******************************************************************************
//
//
//
void mrkSort(int a[],int n){
    for(int pos = 0;pos < n-1;pos++){
        for(int i = pos+1;i < n;i++){
            if(a[pos] > a[i]){
                int temp = a[pos];
                a[pos] = a[i];
                a[i] = temp;
            }
        }
    }
}

//******************************************************************************
//
//
//
void prntAry(int a[],int n,int rows){
    
    for(int i = 0;i < n;i++){
        cout << a[i]<<" ";
        if(i%rows == (rows - 1)) 
            cout << endl;
    }
    cout<<endl;
}