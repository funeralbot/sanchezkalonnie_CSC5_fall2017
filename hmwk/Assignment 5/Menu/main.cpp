//******************************************************************************
//* Author: Kalonnie Sanchez                                                   *
//*                                                                            *      
//* Created on November 12, 2017, 10:36 AM                                     *
//* Purpose: Menu for Assignment 5 Gaddis 8th                                  *
//*          Edition.                                                          *
//*                                                                            *
//******************************************************************************

 
//System Libraries - these are important and useful
#include <iostream> //acceptes the inputs and displays the output
#include <string>   //used for the winning dvision names
#include <cmath>    //used for the pow function and sqrt
#include <iomanip>      //Formatting Library
#include <fstream>      //Write to File
#include <cstdlib>      //random number seed
#include <ctime>        //set counter



using namespace std;

//User Libraries 

//Global Constants 

//******************************************************************************
//*      Function Prototypes - This is what you're learning is chap 6          *
//******************************************************************************
float fndLowst(float,float,float, float, float);
float fndLwst(float,float,float,float, float);
float fndLgst(float,float,float,float, float);
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
        cin>>choice;
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:prob1();
            break;
            case 2:prob2();
            break;
            case 3:prob3();
            break;
            case 4:prob4();
            break;
            case 5:prob5();
            break;
            case 6:prob6();
            break;
            case 7:prob7();
            break;
            case 8:prob8();
            break;
            case 9:prob9();
            break;
            default:{
                cout<<"Exiting, have a great day!\n";
            }
        }
    }while(choice>0&&choice<10);    
    //Exit the program
    return 0;
}

//******************************************************************************
//                           Problem 1                                         *
//******************************************************************************
void prob1(){
    void cRetail(float, float, float);
    //Declare Variables
    float
    atax,
    markup,
    price;    
    
    //Input Data/Variables
    cout
        << "Please enter the price of the item "
           "and what percentage you would like "
           "the price to increase by:\n";
    cin
        >> price >> markup;
    //Process or map the inputs to the outputs
    cRetail(price, markup, atax);
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


//******************************************************************************
//                           Problem 2                                         *
//******************************************************************************
void prob2(){
    float rLength(float);
    float rWidth(float);
    float rArea(float);
    //Declare Variables
    float
    area,
    length,
    width;
    //Process or map the inputs to the outputs
    area = rLength(length)*rWidth(width);
    rArea(area);
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
//******************************************************************************
//                           Problem 3                                         *
//******************************************************************************
void prob3(){
    float iSales(string );
    void highest(float,float,float,float);
    
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

//******************************************************************************
//                           Problem 4                                         *
//******************************************************************************
void prob4(){
    float kenrgy(int, int);
    //Declare Variables
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
}
//******************************************************************************
//          This function takes the values                                     *
//          entered by the user to determine                                   *
//          an objects kinetic energy.                                         *
//******************************************************************************
float kenrgy(int m, int v){
    return (0.5f * m) * (pow(v,2));
}

//******************************************************************************
//                           Problem 5                                         *
//******************************************************************************
void prob5(){
    void getScore(float &,float &,float &, float &, float &);
    float average(float,float,float, float, float);
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
}
//******************************************************************************
//          These functions ask the user to input the four scores and then     *
//          determines an average for the scores entered. Afterwards the       *
//          program will display the result to the user.                       *
//******************************************************************************
float average(float a,float b,float c, float d, float e){
    
    float lowest = fndLowst(a,b,c,d,e);
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
//******************************************************************************
//                           Problem 6                                         *
//******************************************************************************
void prob6(){
    void  gtScore(float &,float &,float &, float &, float &);    
    float ovalScr(float,float,float,float, float);
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

//******************************************************************************
//                           Problem 7                                         *
//******************************************************************************
void prob7(){
    int isprime(unsigned int);
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
    isprime(input);
}
//******************************************************************************
//          This function determines if the user has entered a prime number    *
//          Then displays a message to user letting them know if the number    *
//          is prime, or not.                                                  *
//******************************************************************************
int isprime(unsigned int number){
    int x(2);    
    if (number % x == 0){
        cout << "Is not a Prime number";   
    }
    else
        cout << "Is a Prime number";    
}
//******************************************************************************
//                           Problem 8                                         *
//******************************************************************************
void prob8(){
    bool isPrime(unsigned int);
    //Declare variables
    unsigned int tabLmt;
    unsigned char perLine;
    ofstream out;
    
    //Initialize Variables
    out.open("prime.dat");
    perLine=10;
    
    //Input Data/Variables
    cout
        <<"This program displays a table of\n"
        <<"Prime Numbers\n"
        <<"Input the table Limit\n";
    cin>>tabLmt;
            
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    out<<"Prime Number Table"<<endl;
    for(int cnt=0,i=2;i<=tabLmt;i++){
        if(isPrime(i)){
            cnt++;
            out<<setw(8)<<i;
        }
        if(cnt%perLine==(perLine-1)){
            out<<endl;
            cnt=0;
        }
    }
    
    //Close the File
    out.close();
}
//******************************************************************************
//          This function creates a list of all the prime numbers              *
//          based off the limit enter by the user                              *
//                                                                             *
//******************************************************************************
bool isPrime(unsigned int number){
    float sqRtNum=sqrt(number);
    for(int i=2;i<=sqRtNum;i++){
        if(number%i==0)return false;
    }
    return true;
}
//******************************************************************************
//                           Problem 9                                         *
//******************************************************************************
void prob9(){
    char cmpRPS();
    char plyRPS();
    string winner(char, char);
    // set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    char cmptr,player;
    //input data
    cmptr=cmpRPS();
    
    
    player=plyRPS();
 
    cout << "Computer "<<cmptr<<endl<<
            "Player "<< player<<endl<<
            "Results "<< winner(cmptr,player)<<endl;
}
//******************************************************************************
//          These functions use the random number seed to                      *
//          cycle through the choices of rock, paper, scissors,                *
//          then compares the result entered with the result                   *
//          the computer has generated.                                        *
//******************************************************************************
string winner(char cmp, char ply){
    if(cmp==ply)return "tie";
    if((cmp=='R'&&ply=='S')||
       (cmp=='P'&&ply=='R')||
       (cmp=='S'&&ply=='P'))return "Computer Winner";
    return "player winner";
}

char plyRPS(){
    char plyTrn;
    cout<<"this game is rock paper scissors\n"
            <<"Input your choice\n"
            <<"R-Rock, P-Paper, S-Scissors\n";
    cin>>plyTrn;
    return plyTrn;
}

char cmpRPS(){
    char cmptr;
    do{
        cmptr=rand()%4+80;//[P,Q,R,S]=[80,81,82,83]
    }while(cmptr=='Q');//if Q, then choose again
    return cmptr;
}
//******************************************************************************
//                           The Menu                                              *
//******************************************************************************
void menu(){
    //Input Data/Variables
    cout
        <<"\n\nChoose from the Menu\n"
        <<"1. Gaddis 8th Ed #1 Markup\n"
        <<"2. Gaddis 8th Ed #2 Rectangle Area\n"
        <<"3. Gaddis 8th Ed #3 Winning Division\n"
        <<"4. Gaddis 8th Ed #6 Kinetic Energy\n"
        <<"5. Gaddis 8th Ed #11 Drop Score Average\n"
        <<"6. Gaddis 8th Ed #12 Star Search\n"
        <<"7. Gaddis 8th Ed #22 isPrime Function\n"
        <<"8. Gaddis 8th Ed #23 Prime Number List\n"
        <<"9. Gaddis 8th Ed #24 Rock, Paper, Scissor Game\n";
}
