//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: Create a funtion to determine if                                  *
//*          an integer is prime or not. Then use                              *
//*          the function to make a list of all prime numbers.                 *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Square Root Function
#include <iomanip>      //Formatting Library
#include <fstream>      //Write to File




using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************
bool isPrime(unsigned int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int tabLmt;
    unsigned char perLine;
    ofstream out;
    
    //Initialize Variables
    out.open("prime.dat");
    perLine=10;
    
    //Input Data/Variables
    cout
        <<"This program displays a table of\n"
        <<"Prime Numbers\n"
        <<"Input the table Limit\n";
    cin>>tabLmt;
            
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    out<<"Prime Number Table"<<endl;
    for(int cnt=0,i=2;i<=tabLmt;i++){
        if(isPrime(i)){
            cnt++;
            out<<setw(8)<<i;
        }
        if(cnt%perLine==(perLine-1)){
            out<<endl;
            cnt=0;
        }
    }
    
    //Close the File
    out.close();
    
    //Exit the program
    return 0;
}

//******************************************************************************
//          This function creates a list of all the prime numbers              *
//          based off the limit enter by the user                              *
//                                                                             *
//******************************************************************************
bool isPrime(unsigned int number){
    float sqRtNum=sqrt(number);
    for(int i=2;i<=sqRtNum;i++){
        if(number%i==0)return false;
    }
    return true;
}