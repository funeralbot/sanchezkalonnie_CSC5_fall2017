/* 
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on Oct 18th, 2017, 9:05 AM
 * Purpose:  Menu with functions
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>       //String Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void 
mString(string [],int),
nameAry(string [],int, int),
mrkSort(int [],int),
prntAry(int [],int,int),
prob1(),
prob2(),
prob3(),
prob4(),
prob5(),
prob6(),
menu();

int 
searchL(int[],int,int),
searchB(int[],int,int); 

char 
search(string[],int,string);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        menu();
        cin>>choice;
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    //Exit the program
    return 0;
}
//******************************************************************************
//                      BINARY STRING SEARCH FUNCTION
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
    cin.ignore();
    getline(cin, y);
    
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
//                      LINEAR ARRAY SEARCH FUNCTION
//
//
int searchL(int a[],int x,int y){
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
//                      BINARY ARRAY SEARCH FUNCTION
//
//
int searchB(int a[],int x,int y){
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

//******************************************************************************
//                      MARK SORT
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
//                      MARK SORT WITH STRING
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
//                      FOR LOOP WITH IF STATEMENT TO DISPLAY ARRAY
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
//******************************************************************************
//                      FOR LOOP WITH IF STATEMENT TO DISPLAY STRING ARRAY
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
//******************************************************************************
//                      GADDIS PROBLEM 1
//
void prob1(){
    const int NUMARY(18);
    int 
    numbers[NUMARY]={5658845,4520125,7895122,8777541,8451277,
    1302850,8080152,4562555,5552012,5050552,7825877,1250255,
    1005231,6545231,3852085,7576651,7881200,4581002},
    input;
    
   
    prntAry(numbers,NUMARY, 6);
    mrkSort(numbers,NUMARY);
    prntAry(numbers,NUMARY, 6);
    searchL(numbers,NUMARY,input);
}
//******************************************************************************
//                  GADDIS PROBLEM 2
//
void prob2(){
    const int NUMARY(18);
    int 
    numbers[NUMARY]={5658845,4520125,7895122,8777541,8451277,
    1302850,8080152,4562555,5552012,5050552, 7825877,1250255,
    1005231,6545231,3852085,7576651,7881200,4581002},
    input;
    
   
    prntAry(numbers,NUMARY, 6);
    mrkSort(numbers,NUMARY);
    prntAry(numbers,NUMARY, 6);
    searchB(numbers,NUMARY,input);
}
//******************************************************************************
//                  GADDIS PROBLEM 3
//
void prob3(){
    const int NUMARY(10);
    int 
    numbers[NUMARY]={13579,26791,26792,33445,55555,
                     62483,77777,79422,85647,93121},
    input;

    searchL(numbers,NUMARY,input);
}
//******************************************************************************
//                  GADDIS PROBLEM 4
//
void prob4(){
    const int NUMARY(10);
    int 
    numbers[NUMARY]={13579,26791,26792,33445,55555,
                     62483,77777,79422,85647,93121},
    input;

    searchB(numbers,NUMARY,input);
}
//******************************************************************************
//                  GADDIS PROBLEM 5
//
void prob5(){
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
}
//******************************************************************************
//                  GADDIS PROBLEM 6
//
void prob6(){
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
    search(names,NOMBRE,input);
}
//******************************************************************************
//                      MENU FOR PROGRAM
//
void menu(){
    //Input Data/Variables
    cout<<"\nChoose from the Menu"<<endl;
    cout<<"1. Gaddis_Chapter_8_Charged_Account_Validation_Linear"<<endl;
    cout<<"2. Gaddis_Chapter_8_Charged_Account_Validation_Binary"<<endl;
    cout<<"3. Gaddis_Chapter_8_Lottery_Winners_Linear"<<endl;
    cout<<"4. Gaddis_Chapter_8_Lottery_Winners_Binary"<<endl;
    cout<<"5. Gaddis_Chapter_8_String_Selection_Sort"<<endl;
    cout<<"6. Gaddis_Chapter_8_String_Selection_Sort_Binary"<<endl;
    
}