/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 20, 2017, 10:00 AM
 * Purpose: Sales bar chart -not candy bar.
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
    char 
    store,
    store2,
    store3,
    store4,
    store5,
    star,
    star2,
    star3,
    star4,
    star5;
           
    cout
        << "This program will display the sales "
           "of a store in a \"*\" chart.\n"
        << "Please enter sales for store #1\n";
    cin                         // user input for stores
        >> store;
    cout
        << "Please enter sales for store #2\n";
    cin
        >> store2;
    cout
        << "Please enter sales for store #3\n";
    cin
        >> store3;
    cout
        << "Please enter sales for store #4\n";
    cin
        >> store4;
    cout
        << "Please enter sales for store #5\n";
    cin
        >> store5;
    
    star = store;               // divide sales entered by 100
    star2 = store2/100;             // convert sales into star variables 
    star3 = store3/100;
    star4 = store4/100;
    star5 = store5/100;
    
    cout    
        << "\nEach * = $100"        
        << "\nStore1:";
    for (int x = 1; x <= store; x++) // convert star variable into asterisk 
        cout
            << "*";                 // output asterisk to user 
    cout
        << "\nStore2:";
    for (int x = 1; x <= star2; x++)
        cout
            << "*";
    cout
        << "\nStore3:";
    for (int x = 1; x <= star3; x++)
        cout
            << "*";
    cout
        << "\nStore4:";
    for (int x = 1; x <= star4; x++)
        cout
            << "*";
    cout
        << "\nStore5:";
    for (int x = 1; x <= star5; x++)
        cout
            << "*";
    
    //Exit the program
    return 0;
}
