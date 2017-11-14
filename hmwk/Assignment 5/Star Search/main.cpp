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
void  gtScore(float &,float &,float &, float &, float &);
float fndLwst(float,float,float,float, float);
float fndLgst(float,float,float,float, float);
float ovalScr(float,float,float,float, float);

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
    gtScore(v1,v2,v3,v4,v5);
    
    //Display/Output all pertinent variables
    cout
        << "The Competition Score = " << ovalScr(v1,v2,v3,v4,v5);
    
    //Exit the program
    return 0;
}

//******************************************************************************
//          These functions ask the user to input the four scores and then     *
//          determines an average for the scores entered. Afterwards the       *
//          program will display the result to the user.                       *
//******************************************************************************
float ovalScr(float a,float b,float c, float d, float e){
    float 
    lowest = fndLwst(a,b,c,d,e),
    highest = fndLgst(a,b,c,d,e);
    return a+b+c+d+e-lowest-highest;
}

float fndLgst(float a,float b,float c, float d, float e){
    float largest=a;
    if(b>largest)largest=b;
    if(c>largest)largest=c;
    if(d>largest)largest=d;
    if(e>largest)largest=e;
    return largest;
}

float fndLwst(float a,float b,float c, float d, float e){
    float lowest=a;
    if(b<lowest)lowest=b;
    if(c<lowest)lowest=c;
    if(d<lowest)lowest=d;
    if(e<lowest)lowest=e;
    return lowest;
}

void gtScore(float &a,float &b,float &c, float &d, float &e){
    static int cnt=1;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>a;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>b;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>c;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>d;
    cout<<"Type in Judges Score "<<cnt++<<endl;
    cin>>e;
    
}