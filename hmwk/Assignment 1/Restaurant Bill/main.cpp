/*
 * File:   main.cpp
 * Author: Kalonnie Sanchez
 * Created on September 14, 2017, 01:00 AM
 * Purpose: Display the information of a restaurant bill
 */

//System Libraries 
#include <iostream> //Input/Output Stream Library 
using namespace std; //The Standard namespace for system libraries

//User Libraries 

//Global Constants - Not only variables Physics/Math/Conversations only 

//Functions Prototypes

//Executions Begins Here! 
int main(int argc, char** argv) {
    //Declare Variables
    float price = 88.67,total,total2,total3,total4; // declaring the variables as floats 
    float tax=6.75, tip=20; //state and county tax as whole numbers
    
    //Initialize Variables
    cout<<"Your meal costed $"<<price<<endl;  //for user to enter price
     
    
    cout<<"Tax is "<<tax<<"%"<<endl; //displays the current state tax 
    cout<<"Gratuity is "<<tip<<"%"<<endl; //displays the current county tax 
    
    //Process or map the inputs to the outputs
    total=price*tax*.01;  //multiplies the price by the tax 
    
    total2=total+price; //adds tax to the total
    
    total3=total2*tip*.01 ; //multiplies the tip by the total
    
    total4=total2+total3; //combines tip + tax + bill
    
    
    
    //Display/Output all pertinent variables
    cout<<"The total tax is $"<<total<<endl; //displays the amount of tax based off price
    
    cout<<"Your total gratuity is $"<<total3<<endl; //displays the tip %
    
    cout<<"Your total bill is $"<<total4<<endl; //displays the total bill
    
    
    
    //Exit the program
    return 0;
}

