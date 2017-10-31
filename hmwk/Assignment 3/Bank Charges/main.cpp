/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 07:47 PM
 * Purpose: this program converts Arabic numbers to Roman Numerals  
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>


using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float 
    bfee(10),
    dtax(15),
    bal,
    check,
    tfee,
    cfee;
    
    bool 
    error(0);

    cout 
        << "This program will charge you money for using our bank.\n"
        << "What's your current account balance, \n" 
        <<"and how many checks did you write this month?\n";
    cin
        >> bal >> check;

    if (bal <= -1){
        error = 1;
    }
    else if (check < 20){
        cfee = check * .1;
        tfee = bfee + cfee;    
    }
    else if (check >= 20 && check <= 39){
        cfee = check * .08;
        tfee = bfee + cfee;  
    }
    else if (check >= 40 && check <= 59){
        cfee = check * .06;
        tfee = bfee + cfee;  
    }
    
    else if (check >= 60){
        cfee = check * .04;
        tfee = bfee + cfee;  
    }
    
    if (bal < 400)
        tfee = bfee + dtax + cfee;
    
    if (error) 
        cout 
            << "Warning, account balance negative. Please deposit money.\n";

     cout
        << setprecision(2) << fixed
        << "Your Monthly fee is $" << tfee;
    

    //Exit the program
    return 0;
}
