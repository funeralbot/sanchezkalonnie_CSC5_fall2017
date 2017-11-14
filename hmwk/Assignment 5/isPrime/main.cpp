//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: Create a funtion to determine if                                  *
//*          an integer is prime or not.                                       *
//*                                                                            *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream> //acceptes the inputs and displays the output




using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************
int isPrime(unsigned int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int 
    input;
    
    
    
    
    //Initialize Variables
    cout 
        << "please enter a number and this "
            "program will tell if it's prime:\n";
    cin
        >> input;
    
   
    
    //Input Data/Variables
    isPrime(input);
            
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    
    
    
    //Exit the program
    return 0;
}

//******************************************************************************
//          This function determines if the user has entered a prime number    *
//          Then displays a message to user letting them know if the number    *
//          is prime, or not.                                                  *
//******************************************************************************
int isPrime(unsigned int number){
    int x(2);    
    if (number % x == 0){
        cout << "Is not a Prime number";   
    }
    else
        cout << "Is a Prime number";    
}