//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: To determines the average between the                             *
//*          four scores the user has entered.                                 *
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
void getScore(float &,float &,float &, float &, float &);
float fndLowst(float,float,float, float, float);
float average(float,float,float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float 
    v1,
    v2,
    v3,
    v4,
    v5;
    
    //Input the values
    getScore(v1,v2,v3,v4,v5);
    
    //Display/Output all pertinent variables
    cout
        <<  "\nThe Average 4 highest Scores = "<< average(v1,v2,v3,v4,v5);
    
    //Exit the program
    return 0;
}

//******************************************************************************
//          These functions ask the user to input the four scores and then     *
//          determines an average for the scores entered. Afterwards the       *
//          program will display the result to the user.                       *
//******************************************************************************
float average(float a,float b,float c, float d, float e){
    float 
    lowest = fndLowst(a,b,c,d,e);
    return (a+b+c+d+e-lowest)/4;
}

float fndLowst(float a,float b,float c, float d, float e){
    float 
    lowest(a);
    if(b<lowest)
        lowest=b;
    if(c<lowest)
        lowest=c;
    if(d<lowest)
        lowest=d;
    if(e<lowest)
        lowest=e;
    return lowest;
}

void getScore(float &a,float &b,float &c, float &d, float &e){
    static int cnt(1);
    cout
        << "Type in Test Score " << cnt++<<endl;
    cin
        >> a;
    cout
        << "Type in Test Score "<<cnt++<<endl;
    cin
        >> b;
    cout
        << "Type in Test Score "<<cnt++<<endl;
    cin
        >> c;
    cout
        << "Type in Test Score "<<cnt++<<endl;
    cin
        >> d;
    cout 
        << "Type in Test Score "<<cnt++<<endl;
    cin 
        >> e;
}