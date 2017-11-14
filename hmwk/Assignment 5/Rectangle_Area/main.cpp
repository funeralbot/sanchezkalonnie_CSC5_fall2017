//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 10, 2017, 1:36 PM                                       *
//* Purpose: Find the area of a rectangle                                      *
//*          Using functions for every input                                   *
//*          Because the book asked                                            *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream> //acceptes the inputs and displays the output


using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************


float rLength(float);
float rWidth(float);
float rArea(float);



//******************************************************************************
//*         This is the main function that executes the code                   *
//******************************************************************************
int main(int argc, char** argv) {
    //Declare Variables
    float
    area,
    length,
    width;
    
    
    
    //Initialize Variables
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    
    area = rLength(length)*rWidth(width);
    rArea(area);
    
    
    
    
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

//******************************************************************************
//*     These functions ask the user to input the size of the                  *
//*     Rectangle and then multiplies the size to output the                   *
//*     Area of the rectangle.                                                 *
//******************************************************************************

float rLength(float l){
    cout
        << "Please enter the length of the rectangle:\n";
    cin 
        >> l;
   return l; 
}
float rWidth(float w){
    cout
        << "Please enter the width of the rectangle:\n";
    cin 
        >> w;
    return w; 
}
float rArea(float x){
    cout 
        << "The area of the rectangle is " << x; 
}
