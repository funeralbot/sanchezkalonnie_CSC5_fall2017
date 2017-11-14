//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: Create a program that determines                                  *
//*          an objects Kinetic Energy.                                        *
//*                                                                            *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream>
#include <cmath>



using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************

float kenrgy(int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    float
    kinEgy(0);
    
    int 
    mass(0),
    vCity(0);

    cout 
        << "This program determine a moving "
            "objects Kinetic Energy\n"
            "Please input the MASS of the object in km:\n";
    cin 
        >> mass;
    cout
        << "Please input the object's velocity in mps \n";
    cin
        >> vCity;
    
    kinEgy = kenrgy(mass, vCity);
    
    cout
        << "The objects Kinetic Energy is "<< kinEgy;
    
    
    //Exit the program
    return 0;
}

//******************************************************************************
//          This function takes the values                                     *
//          entered by the user to determine                                   *
//          an objects kinetic energy.                                         *
//******************************************************************************
float kenrgy(int m, int v){
    return (0.5f * m) * (pow(v,2));
}
