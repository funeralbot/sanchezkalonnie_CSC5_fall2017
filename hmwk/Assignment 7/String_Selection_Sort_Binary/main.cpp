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
mrkSort(string [],int),
prntAry(string [],int, int);

char 
search(string[],int,string);

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
    
   
    prntAry(names,NOMBRE, 1);
    mrkSort(names,NOMBRE);
    prntAry(names,NOMBRE, 1);
    search(names,NOMBRE,input);
   
    
    return 0;
}
//******************************************************************************
//
//
//
char search(string a[], int x, string y){
    int 
    first(0),
    last = x - 1,
    middle(0),
    pos(-1);
    
    bool
    found(0);
    
    cout 
        << "Please Enter the name you're searching for:\n";
    getline(cin, y);
    cin.get();

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
            << "SORRY, Name not found.";
    }
    else{
        cout 
            << "SUCCESS! Name found.";         
    }
}

//******************************************************************************
//
//
//
void mrkSort(string a[],int n){
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
void prntAry(string a[],int n,int rows){
    
    for(int i = 0;i < n;i++){
        cout << a[i]<<" ";
        if(i%rows == (rows - 1)) 
            cout << endl;
    }
    cout<<endl;
}