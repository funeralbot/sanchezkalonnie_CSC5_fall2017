/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on September 29, 2017, 07:47 PM
 * Purpose: this program converts Arabic numbers to Roman Numerals  
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
        length,
        width,
        length2,
        width2,
        area,
        area2;
    
    cout
        << "This program will tell you the area for 2 Rectangles\n"
        << "Please enter the length and width for the first Rectangle?\n";
    cin
        >> length >> width; 
    cout
        << "Please enter the length and width for the second Rectangle?\n";
    cin
        >> length2 >> width2;   
    
    area = length * width;
    area2 = length2 * width2;
    
    if (area == area2)
        cout 
            << "They have the same area.\n";
    else if (area > area2)
        cout 
            << "Rectangle 1 is larger.\n";
    else if (area < area2)
        cout
            << "Rectangle 2 is larger.\n";
    
            
    
    
    //Exit the program
    return 0;
}
