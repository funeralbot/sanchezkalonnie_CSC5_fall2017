/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 16, 2017, 2:00 PM
 * Purpose: this program will display a table if the ocean levels were to rise
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
    rwater(0);

    cout
    << "This program will show how much "
        "the ocean level will rise for the next 25 years.\n"
        "Years\tWater\n"
        "-------------";                    
    
    for (int yrs = 2017; yrs<=2042; yrs++){     // loop years ocean will rise
        rwater += 1.5;                      // add water level increase to years
        cout 
            << " \n" << yrs << "...\t"
            << setprecision(2) << fixed
            << rwater << " millimeters";      // output results to user 
    }

    //Exit the program
    return 0;
}
