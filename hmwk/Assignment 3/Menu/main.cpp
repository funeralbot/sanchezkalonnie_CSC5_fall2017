/* 
 * File:   main.cpp
 * Author: kalonnie sanchez
 * Created on October 5, 2017, 10:00 PM
 * Purpose: this program contains the assignment 3 homework  
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      // output manipulation library
#include <string>       // string input library



using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int
    cinput;
    
    cout                                    // user menu selection 
        << "Please select from the menu.\n"
        << "1. Gaddis 8thEd Chapter 4 Prob 2 Roman Numerals \n"
        << "2. Gaddis 8thEd Chapter 4 Prob 4 Areas of Rectangles \n"
        << "3. Gaddis 8thEd Chapter 4 Prob 6 Mass and Weight \n"    
        << "4. Gaddis 8thEd Chapter 4 Prob 8 Color Mixer \n"    
        << "5. Gaddis 8thEd Chapter 4 Prob 10 Days in a Month \n"    
        << "6. Gaddis 8thEd Chapter 4 Prob 12 Software Sales \n"    
        << "7. Gaddis 8thEd Chapter 4 Prob 14 Bank Charges \n"    
        << "8. Gaddis 8thEd Chapter 4 Prob 16 Running the Race \n"    
        << "9. Gaddis 8thEd Chapter 4 Prob 18 Fat Gram Calculator \n";    
    
    cin                     // user input 
        >> cinput;
    
    switch(cinput){
        case 1:{
            //Declare Variables
            short 
            input;            // variable for user input
    
            cout 
            << "This program will convert Arabic Numbers to Roman Numerals\n"
            << "Please enter a number between 1-10\n";
            cin
            >> input;               // user input
                                        
        switch (input){                      // conversion of numbers to roman numerals 
        
            case 1: cout 
                        << "Converts to I";
            break;
            case 2: cout 
                        << "Converts to II";
            break;
            case 3: cout 
                        << "Converts to III";
            break;
            case 4: cout 
                        << "Converts to IV";
            break;
            case 5: cout 
                        << "Converts to V";
            break;
            case 6: cout 
                        << "Converts to VI";
            break;
            case 7: cout 
                        << "Converts to VII";
            break;
            case 8: cout 
                        << "Converts to VIII";
            break;
            case 9: cout 
                        << "Converts to IX";
            break;
            case 10: cout 
                        << "Converts to X";
            break;
            default: cout                       // output user error
                        << "User did not enter number inside range.\n";
            }
            break;
        }
        case 2:{
            //Declare Variables
            short 
            length,
            width,
            length2,
            width2,
            area,
            area2;

            cout
                << "This program will tell you the which of 2 rectangles is larger.\n"
                << "Please enter the length and width for the first Rectangle?\n";
            cin
                >> length >> width;         // user input for first rectangle
            cout
                << "Please enter the length and width for the second Rectangle?\n";
            cin
                >> length2 >> width2;       // user input for second rectangle 

            area = length * width;
            area2 = length2 * width2;       // l*w=a logic for rectangle 

            if (area == area2)              // output of rectangles are same area
                cout 
                    << "They have the same area.\n";
            else if (area > area2)
                cout                        // output for first rectangle 
                    << "Rectangle 1 is larger.\n";
            else if (area < area2)
                cout                        // output for second rectangle 
                    << "Rectangle 2 is larger.\n";
            break;
        }
        case 3:{
            //Declare Variables
            float 
            input,
            weight;

            cout
                << "This program will calculate an objects weight based off of its mass.\n"
                << "Please enter the mass of the object you would like to weigh?\n";
            cin
                >> input;               // ask user to input object weight 

            weight = input * 9.8;       // formula for converting weight to newtons

            if (input > 1000)           // error if weight too heavy
                cout
                    << "ERROR! Object is too heavy!";
            else if (input < 10)        // error if weight too light
                cout
                    << "ERROR! Object is too light!";
            else 
                cout                    // output results to user 
                    << setprecision(1) << fixed 
                    << "your object weighs " << weight << " newton.";
            break;
        }
        case 4:{
            //Declare Variables
            string
            input,
            input2;

            cout                                // lets user know what program is doing 
                << "This program will mix the primary colors:\n"
                << "red, blue, yellow\n"
                << "Please Enter two of the primary colors to mix\n";

            cin
                >> input >> input2;                 // input for user 

            if ((input == "red" && input2 == "blue") || (input == "blue" && input2 == "red"))       // color conversion logic 
                cout 
                    << "When you mix those colors, you get purple.";
            else if ((input == "red" && input2 == "yellow") || (input == "yellow" && input2 == "red"))
                cout 
                    << "When you mix those colors, you get orange.";
            else if ((input == "blue" && input2 == "yellow") || (input == "yellow" && input2 == "blue"))
                cout 
                    << "When you mix those colors, you get green.";
            else 
                cout                                // error informing user what is cause
                    << "ERROR! Two primary colors not detected.\n"
                    << "colors are case sensitive";
            break;
        }
        case 5:{
            //Declare Variables
            short
            month,
            year,
            days;

            cout                             // lets user know what program is doing 
                << "This program will tell you how many days there are in a specific month.\n"
                << "Please enter a month between 1-12 and a year\n";
            cin
                >> month >> year;           // user inputs

            if (month == 4 || month == 6 || month == 9 || month == 11)  
                days = 30;                  // months that only have 30 days 
            else if (month == 2){
                short               // logic to find out if year is leap
                leapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

                if (leapyear)
                    days = 29;
                else
                    days = 28;
            }
            else                    // all other months 
                days = 31;

            cout                    // output results for user 
                << "Has " << days << " days.";
            break;
        }
        case 6:{
            //Declare Variables
            const float
            price(99);          // unit price never changes 

            float 
            sold,
            total,              
            dcount;

            bool                // error indicator 
            error(0);

            cout                // inform user of programs purpose 
                << "This program will compute software price.\n"
                << "Please enter the number of units sold?\n";
            cin
                >> sold;        // user input for units sold 

            if (sold <= 0){     
                error = 1;
            }
            else if (sold > 0 && sold < 10){        // logic for units sold 
                total = price  *sold;    
            }
            else if (sold >= 10 && sold <= 19){
                dcount = (sold * price) * .2;
                total = (sold * price) - dcount;  
            }
            else if (sold >= 20 && sold <= 49){
                dcount = (sold * price) * .3;
                total = (sold * price) - dcount;  
            }
            else if (sold >= 50 && sold <= 99){
                dcount = (sold * price) * .4;
                total = (sold * price) - dcount;  
            }
            else if (sold >= 100){
                dcount = (sold * price) * .5;
                total = (sold * price) - dcount;  
            }

            if (error) 
                cout                // outputs error for user 
                    << "Input Invaild! Make sure the number of units is greater than 0.\n";

            cout                    // outputs units sold for user 
                << setprecision(2) << fixed
                << "The total cost is $" << total;
            break;
        }
        case 7:{
            //Declare Variables
            const float 
            bfee(10),
            dtax(15);
            
            float
            bal,
            check,
            tfee,
            cfee;

            bool 
            error(0);               // error indicator 

            cout                    // inform user of programs purpose 
                << "This program will charge you money for using our bank.\n"
                << "What's your current account balance, \n" 
                <<"and how many checks did you write this month?\n";
            cin
                >> bal >> check;        // ask user of inputs 

            if (bal <= -1){             
                error = 1;
            }
            else if (check < 20){       // logic for program 
                cfee = check * .1;
                tfee = bfee + cfee;    
            }
            else if (check >= 20 && check <= 39){
                cfee = check * .08;
                tfee = bfee + cfee;  
            }
            else if (check >= 40 && check <= 59){
                cfee = check * .06;
                tfee = bfee + cfee;  
            }

            else if (check >= 60){
                cfee = check * .04;
                tfee = bfee + cfee;  
            }

            if (bal < 400)
                tfee = bfee + dtax + cfee;

            if (error)              // output error for user 
                cout 
                    << "Warning, account balance negative. Please deposit money.\n";

             cout                   // output results for user 
                << setprecision(2) << fixed
                << "Your Monthly fee is $" << tfee;
            break;
        }
        case 8:{
            //Declare Variables
            string
            name,
            name2,
            name3;

            float
            time,
            time2,
            time3;

            bool                    // error indicator 
            error(0);

            cout                    // informs user of programs purpose 
                << "This program will tell you who the race!\n"
                << "Enter the names of all 3 racers\n";
            cin
                >> name >> name2 >> name3;          // input racer names 
            cout
                << "Now enter the times that each racer finished\n";
            cin
                >> time >> time2 >> time3;          // input racer times 


            if (time <= -1 || time2 <= -1 || time3 <= -1){ // informs user or error 
                error = 1;
            }
            else if (time < time2 && time < time3){         // determines if first racer had lowest time 
                if (time2 < time3){
                cout
                    << name << " " << time << "\n"
                    << name2 << " " << time2 << "\n"
                    << name3 << " " << time3;
                }
                else{
                cout
                    << name << " " << time << "\n"          // outputs results of race 
                    << name3 << " " << time3 << "\n"
                    << name2 << " " << time2;
                }
            }
            else if (time2 < time && time2 < time3){        // checks to see if racer 2 finished first 
                if (time < time3){
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
            else if (time3 < time && time3 < time2){        // checks to see if racer 3 finished first 
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

            if (error)                                  // outputs racer time error if not in positive value 
                cout 
                    << "ERROR! Race time not in positive value \n";
            break;
        }
        case 9:{
            //Declare Variables
            float 
            finput,
            cinput,
            ctotal,
            fgperct;

            bool
            error(0);

            cout        // ask user for input
                << "This program will calculate percentage of calories from fat.\n"
                << "Please enter the amount of calories and the how many grams of fat?\n";
            cin
                >> cinput >> finput;

            ctotal = finput * 9; //multiplies grams of fat into calories 
            fgperct = (ctotal / cinput) * 100; // converts into percentage 

            if (finput < 0 || cinput < 0)
                error = 1;

            else if (fgperct < 30){
                cout
                    << "Caution! Food has low fat amount.\n";
            }
            else if (cinput < finput){      // lets user know inputs were entered incorrectly 
                cout
                    << "ERROR! Fat grams cannot exceed calorie amount.";
            }

            if (error){         // lets the user know there is an error
                cout
                    << "Error!\nCalorie and fat grams may not be less than zero.";
            }    

            cout
                << setprecision(2) << fixed    
                << "Your nutrients contain " << fgperct << " percent fat";
            break;
        } 
    }
   
    //Exit the program
    return 0;
}
