/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 20, 2017, 10:00 AM
 * Purpose: Payroll Report 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library


using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short 
    eNum(1);
    
    float
    gpay,
    stax,
    ftax,
    totgpay,
    totstax,
    totftax,
    totfica,
    fica;
    
    bool
    error(0);
    
    cout
        << "This program will calculate multiple "
           "employee payroll information\n";
    
    while (eNum != 0){
        cout
            << "Input 0 (zero) for employee number to finish.\n"
               "Please enter employee number\n";
               
        cin
            >> eNum;
        
        if (eNum != 0){
            do {
                cout 
                    << "Please enter employee gross pay\n";
                cin
                    >> gpay;
                cout 
                    << "Please enter employee state tax\n";
                cin
                    >> stax;
                cout 
                    << "Please enter employee federal tax\n";
                cin
                    >> ftax;
                cout 
                    << "Please enter employee FICA with-holdings\n";
                cin
                    >> fica;
                if (gpay < 0 || stax < 0 || ftax < 0 || fica < 0){
                    error = 1;
                    cout 
                        << "Error, cannot enter negative numbers.\n";
		}
                else if (gpay < fica + ftax + stax){
                    error = 1;
                    cout
                        << "Gross pay may not be less than tax.\n";
                }
                else 
                    error = 0;
            }
            while (error);
            totgpay += gpay;
            totstax += stax;
            totftax += ftax;
            totfica += fica; 
        }    
    }
    cout
        << "Total Gross pay \t$" << totgpay
        << "\nTotal State tax \t$" << totstax
        << "\nTotal Federal tax \t$" << totftax
        << "\nFICA with-holdings \t$" <<totfica;

    
    
    //Exit the program
    return 0;
}
