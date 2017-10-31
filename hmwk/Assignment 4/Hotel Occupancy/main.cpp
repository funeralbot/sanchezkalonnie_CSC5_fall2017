/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 18, 2017, 3:00 PM
 * Purpose: This program will determine 
 * how many rooms are available in your hotel. 
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
    int         
    hroom,
    froom,
    uroom,
    troom,
    hfloor,
    totrom;
    
    float
    proom;
  
    cout
        << "Welcome! \nThis program will tell you the "
        "vacancy of your hotel.\n"
        "Please enter how many floors your Hotel has.\n";
    cin
        >> hfloor;           // ask user to enter hotel floors
        
    while (hfloor < 1){       // if value of zero or less ask user to re-enter
        cout 
            << "Error! Please fix amount entered.\n";
        cin
            >> hfloor;
    }
    for (int nfloor= 1; nfloor <= hfloor; nfloor++){         // list floors entered
        if (nfloor != 13){    // ignore 13th floor
        cout 
            << "Please enter the number of rooms on floor #"
            << nfloor << endl;
        cin
            >> hroom;               
        while (hroom < 10){           //loop to not accept less than 10 rooms for value
            cout
                << "Current floor must have more than 10 rooms\n"
                   "Please re-enter floor value.\n";
            cin
                >> hroom;        
        }
        
        cout                        //output for user to enter room with no vacancy 
            << "Please enter number of rooms "
               "with no vacancy on this floor.\n";
        cin
            >> froom;               //input for occupied rooms
        while (froom > hroom){
        cout
            << "Occupied rooms cannot exceed vacant rooms.\n"
               "Please re-enter room value.\n";     //error for incorrect value
        cin
            >> froom;       //ask user to re-enter value
        }
        troom += hroom;         //logic to compute room total
        uroom += froom;         
        }
    }    
    totrom = troom - uroom;
    proom = static_cast <float> (uroom) / troom * 100;    //logic to computer room percentage
    
    cout
        << "Your hotel has " << hfloor <<" floors. \n"
        << "There is " << troom << " rooms in this hotel.\n"
        << "There is " << totrom << " rooms vacant.\n"
        << "There is " << uroom << " rooms with no vacancy.\n"
        << setprecision(2) << fixed
        << proom << "% of rooms have no vacancy.";          //display information to user 

    //Exit the program
    return 0;
}
