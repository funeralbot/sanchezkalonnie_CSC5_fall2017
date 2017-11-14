//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: To determine which 4 companies had                                *
//*          the greatest sales for their division                             *
//*                                                                            *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream> //acceptes the inputs and displays the output
#include <string> 


using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************

float iSales(string );
void highest(float,float,float,float);




//******************************************************************************
//*         This is the main function that executes the code                   *
//******************************************************************************
int main(int argc, char** argv) {
    //Declare Variables
    float
    nWest(0),
    nEast(0),
    sEast(0),
    sWest(0);
    
    cout
        << "This program will tell you which "
           "division had the highest sales\n";
    
    //Process or map the inputs to the outputs
    for (int divs = 0; divs < 4; divs++){
        switch (divs){
            case 0: nEast = iSales("Northeast");
            break;
            case 1: sEast = iSales("Southeast");
            break;
            case 2: sWest = iSales("Southwest");
            break;
            default: nWest = iSales("Northwest");
            break;
        }
    }
 
    //Display/Output all pertinent variables
    highest(nEast,sEast,nWest,sWest);
    //Exit the program
    return 0;
}

//******************************************************************************
//*     These functions ask the user to input the sales for                    *
//*     four companies, then displays an error if the value                    *
//*     is less than 0. The next function gets the values                      *
//*     entered and determines which has the greatest value.                   *
//******************************************************************************
float iSales(string x){
    float input(0);
    cout
        << "Please enter the sales amount for the " << x 
        << " division:\n";
    cin 
        >> input;
    
    if ( input < 0 ){
        cout
            << "Error, Please input a positive number\n";
    }    
    return input;    
}

void highest(float ne, float se, float sw, float nw){
    const char* name = "Northeast ";
    float hEst = ne;
    if (se > hEst){
        name = "Southeast ";
        hEst = se;
    }
    if (sw > hEst){
        name = "Southwest ";
        hEst = sw;
    }
    if (nw > hEst){
        name = "Northwest ";
        hEst = nw;
    }
    cout
        << name << "is the highest in the division with $" 
        << hEst << " in quarterly sales."; 
}