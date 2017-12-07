/* 
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 *
 * Created on December 2, 2017, 11:32 PM
 */


#include <iostream>
#include <string>


using namespace std;
//******************************************************************************
//
//
//
void 
mString(string [],int),
nameAry(string [],int, int);



int main(int argc, char** argv) {
    const int NOMBRE(20);
    string  
    names[NOMBRE]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
                    "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                    "Taylor, Terri", "Johnson, Jill",
                    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                    "James, Jean", "Weaver, Jim", "Pore, Bob",
                    "Rutherford, Greg", "Javens, Renee",
                    "Harrison, Rose", "Setzer, Cathy",
                    "Pike, Gordon", "Holland, Beth" },
    input;
    
   
    nameAry(names,NOMBRE, 1);
    mString(names,NOMBRE);
    nameAry(names,NOMBRE, 1);
    
   
    
    return 0;
}
//******************************************************************************
//
//
//


//******************************************************************************
//
//
//
void mString(string a[],int n){
    for(int pos = 0;pos < n-1;pos++){
        for(int i = pos+1;i < n;i++){
            if(a[pos] > a[i]){
                string temp = a[pos];
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
void nameAry(string a[],int n,int rows){
    
    for(int i = 0;i < n;i++){
        cout << a[i]<<" ";
        if(i%rows == (rows - 1)) 
            cout << endl;
    }
    cout<<endl;
}