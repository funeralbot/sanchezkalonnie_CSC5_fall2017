//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 9, 2017, 1:36 PM                                       *
//* Purpose: Find an Item retail price using                                   *
//*          Functions Prototypes Gaddis 8th ed                                *
//*          Chap 6 Functions.                                                 *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream> //acceptes the inputs and displays the output
#include <iomanip>  //used to show two spaces after decemal point

using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************

void cRetail(float, float, float);


//******************************************************************************
//*         This is the main function that executes the code                   *
//******************************************************************************
int main(int argc, char** argv) {
    //Declare Variables
    float
    atax,
    markup,
    price;
    
    //Initialize Variables
    
    
    //Input Data/Variables
    cout
        << "Please enter the price of the item "
           "and what percentage you would like "
           "the price to increase by:\n";
    cin
        >> price >> markup;
    //Process or map the inputs to the outputs
    cRetail(price, markup, atax);
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

//******************************************************************************
//*     This function computes the logic for the program                       *
//*     It takes the user input then multiplies the tax to                     *
//*     generate the markup price                                              *
//******************************************************************************
void cRetail(float iprice, float tax, float aftax){
    aftax = iprice * tax/100;
    aftax += iprice;
    cout << setprecision(2)<< fixed
         << "The items mark up price is : $" << aftax;
}