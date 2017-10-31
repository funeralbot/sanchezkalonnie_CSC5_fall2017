/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 07:47 PM
 * Purpose: this program converts Arabic numbers to Roman Numerals  
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string
    name,
    name2,
    name3;
    
    short
    time,
    time2,
    time3;
    
    bool 
    error(0);
 
    cout 
        << "This program will tell you who the race!\n"
        << "Enter the names of all 3 racers\n";
    cin
        >> name >> name2 >> name3;
    cout
        << "Now enter the times that each racer finished\n";
    cin
        >> time >> time2 >> time3;
    
  
    if (time <= -1 || time2 <= -1 || time3 <= -1){
        error = 1;
    }
        
    else if (time < time2 && time < time3){
        if (time2 < time3){
        cout
            << name << " " << time << "\n"
            << name2 << " " << time2 << "\n"
            << name3 << " " << time3;
        }
        else{
        cout
            << name << " " << time << "\n"
            << name3 << " " << time3 << "\n"
            << name2 << " " << time2;
        }
    }
    else if (time2 < time && time2 < time3){
        if (time < time3)
        {
        cout
            << name2 << " " << time2 << "\n"
            << name << " " << time << "\n"
            << name3 << " " << time3;
        }
        else{
            cout
            << name2 << " " << time2 << "\n"
            << name3 << " " << time3 << "\n"
            << name << " " << time;
        }
    }
    else if (time3 < time && time3 < time2){
        if (time2 < time)
        {
        cout
            << name3 << " " << time3 << "\n"
            << name2 << " " << time2 << "\n"
            << name << " " << time;
        }
        else{
        cout
            << name3 << " " << time3 << "\n"
            << name << " " << time << "\n"
            << name2 << " " << time2;
        }
    }

    if (error) 
        cout 
            << "ERROR! Race time not in positive value \n";

    //Exit the program
    return 0;
}
