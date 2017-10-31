/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 16, 2017, 1:00 PM
 * Purpose: These are the first 9 odd problems in Gaddis ch 5
 *          with a do-while loop menu.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
       int choice;
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
    menu();
    
    cin
        >> choice;
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:{
                cout
                    <<"Exiting, have a great day!"<<endl;
            }
        }
    }
    while(choice>0&&choice<10);

    //Exit the program
    return 0;
}
void prob1(){
    //Declare Variables
    int 
    input;                  // variable for user input     
    
    bool
    error(0);               // boolean used to created "error" condition
    
   
    cout
        <<"This program will generate the sum of a positive integer\n"
        <<"Please enter a positive number\n";
    cin
        >>input;                // ask user to input positive value
    if (input < 0){             // input invalidation if value not positive
        error = 1;
        cout
            <<"Please input a positive integer";
    }
    for (int sum = 0; sum <= input; sum++) // logic to generate sum 
        cout
            <<" "<<sum;                 // display results to user
}
void prob2(){
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
}
void prob3(){
    //Declare Variables
    float
    mship(2500),
    mfee(.04);
    
    cout
        << "This program will show the crease in "
           "membership prices for your current country club.\n"
           "The increase will be 4% for the next six years.";
    
    for (int yrs = 1; yrs <=6; yrs++){  // loop displaying years
    
    mship =(mship*mfee)+mship;           // logic computing membership increase
    cout
        << setprecision(2)<< fixed
        << " \nYear " << yrs << "\t$" << mship;    //output results to user
    }
}
void prob4(){
    //Declare Variables
    float
    pen(.01),
    dpay,
    tpay,
    idays;
       
    cout
        << "this program will calculate how much you earned.\n"
           "Please enter how many days worked.\n";  //ask user for information
    cin
        >>idays;    //input for user
    
    if (idays<1)        //error if value negative
        cout
            <<"Error, Please enter a positive value for days worked\n";
        
    for(int wday=1; wday<=idays; wday++){       //loop for days multiplied by pennies        
        cout
            <<"Day "<< wday << "\t $"<< pen <<endl; //output results to user
        dpay = pen; 
        pen *= 2;
        tpay += dpay;               //logic for pennies
    }
    cout
        <<"Your total wage is $"<<tpay;
}
void prob5(){
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
}
void prob6(){
    //Declare Variables
    float
    pop,
    popinc;
    
    int
    days;
    
    cout
        << "This program that will predict the "
            "size of a population of organisms.\n"
           "Input starting number of organisms\n";  //output program to user
    cin
        >> pop;             // input population 
    while (pop < 2){                    //display error if input too low
        cout
            << "Error, Population must be greater than 2.\n"
               "Please re-enter value.\n";
        cin                         // ask user to re-enter value
            >> pop;
    }
    cout
        << "Input population increase, as percentage.\n";       // ask user to percentage increase
    cin
        >> popinc;
    while (popinc < 0){                 // display error if value negative
        cout
            << "Error, percentage must be positive.\n"
               "Please re-enter value.\n";
        cin
            >> popinc;              // ask user to re-enter value
    }
    cout
        << "Input amount of days organism has multiplied.\n";   // ask user to enter length of time 
    cin
        >> days;
    while (days < 1){ // if value less than 1 display error
        cout
            << "Error, days must be greater than 1.\n"
               "Please re-enter value.\n";
        cin
            >> days;            // ask user to re-enter value
    }
    for (int nday = 1; nday <= days; nday++){       // loop days entered by user
    pop *= (1 + popinc / 100.0f);       //logic to compute population increase
    cout
        << "Day "<< nday 
        << " population increased by "  
        << setprecision(2) << fixed << pop << "%\n";    //output results to user
    }
}
void prob7(){
    //Declare Variables
    int
    min,
    max,
    input;
    
    cout
        <<"This program will display the largest "
          "and smallest \nof a series of numbers "
          "entered.\nPress -99 to end series.\n";       //let user know program purpose
    
    while (input != -99){       //enable -99 to stop loop
        cin
            >> input;                   //ask user for input
        if (input < max && input != -99)        //locates smallest number
            min = input;    
        else if (input > max && input != -99)  //locates largest number
            max = input;
    }    
    
    cout
        << "the largest number is " << max
        << "\nthe smallest number is " << min;      //outputs results to user
}
void prob8(){
    //Declare Variables
    short 
    eNum(1);
    
    float
    gpay,
    stax,
    ftax,
    totgpay,
    totstax,
    totftax,
    totfica,
    fica;
    
    bool
    error(0);
    
    cout
        << "This program will calculate multiple "
           "employee payroll information\n";
    
    while (eNum != 0){
        cout
            << "Input 0 (zero) for employee number to finish.\n"
               "Please enter employee number\n";
               
        cin
            >> eNum;
        
        if (eNum != 0){
            do {
                cout 
                    << "Please enter employee gross pay\n";
                cin
                    >> gpay;
                cout 
                    << "Please enter employee state tax\n";
                cin
                    >> stax;
                cout 
                    << "Please enter employee federal tax\n";
                cin
                    >> ftax;
                cout 
                    << "Please enter employee FICA with-holdings\n";
                cin
                    >> fica;
                if (gpay < 0 || stax < 0 || ftax < 0 || fica < 0){
                    error = 1;
                    cout 
                        << "Error, cannot enter negative numbers.\n";
		}
                else if (gpay < fica + ftax + stax){
                    error = 1;
                    cout
                        << "Gross pay may not be less than tax.\n";
                }
                else 
                    error = 0;
            }
            while (error);
            totgpay += gpay;
            totstax += stax;
            totftax += ftax;
            totfica += fica; 
        }    
    }
    cout
        << "Total Gross pay \t$" << totgpay
        << "\nTotal State tax \t$" << totstax
        << "\nTotal Federal tax \t$" << totftax
        << "\nFICA with-holdings \t$" << totfica;
}
void prob9(){
    //Declare Variables
    int 
    store,
    store2,
    store3,
    store4,
    store5,
    star,
    star2,
    star3,
    star4,
    star5;
           
    cout
        << "This program will display the sales "
           "of a store in a \"*\" chart.\n"
        << "Please enter sales for store #1\n";
    cin                         // user input for stores
        >> store;
    cout
        << "Please enter sales for store #2\n";
    cin
        >> store2;
    cout
        << "Please enter sales for store #3\n";
    cin
        >> store3;
    cout
        << "Please enter sales for store #4\n";
    cin
        >> store4;
    cout
        << "Please enter sales for store #5\n";
    cin
        >> store5;
    
    star = store/100;               // divide sales entered by 100
    star2 = store2/100;             // convert sales into star variables 
    star3 = store3/100;
    star4 = store4/100;
    star5 = store5/100;
    
    cout    
        << "\nEach * = $100"        
        << "\nStore1:";
    for (int x = 1; x <= star; x++) // convert star variable into asterisk 
        cout
            << "*";                 // output asterisk to user 
    cout
        << "\nStore2:";
    for (int x = 1; x <= star2; x++)
        cout
            << "*";
    cout
        << "\nStore3:";
    for (int x = 1; x <= star3; x++)
        cout
            << "*";
    cout
        << "\nStore4:";
    for (int x = 1; x <= star4; x++)
        cout
            << "*";
    cout
        << "\nStore5:";
    for (int x = 1; x <= star5; x++)
        cout
            << "*";
}
void menu(){
    //Input Data/Variables
    cout
        <<"\nChoose from the Menu\n"
        <<"1.Gaddis_8thEd_Chap5_Prob01 Sum of Numbers\n"
        <<"2.Gaddis_8thEd_Chap5_Prob03 Ocean Levels\n"
        <<"3.Gaddis_8thEd_Chap5_Prob05 Membership Fees Increase\n"
        <<"4.Gaddis_8thEd_Chap5_Prob07 Pennies for Pay\n"
        <<"5.Gaddis_8thEd_Chap5_Prob09 Hotel Occupancy\n"
        <<"6.Gaddis_8thEd_Chap5_Prob11 Population\n"
        <<"7.Gaddis_8thEd_Chap5_Prob13 The Greatest and Least of These\n"
        <<"8.Gaddis_8thEd_Chap5_Prob15 Payroll Report "
          "(contains logic error in menu, worked by itself in IDE)\n"
        <<"9.Gaddis_8thEd_Chap5_Prob17 Sales Bar Chart\n";
}