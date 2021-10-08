#include<iostream>
#include<cmath>
#include<math.h>
#include<limits>
#include <fstream>
using namespace std;

int main()
{ 
    cout<<"****CALCULATOR PROGRAM BY Coder ARP****\n";
    cout<<"Working for new features and Guide!!\n";
    double x;
    double y,d;
    string name,txt;
    int p,r,t,km;
    char op;
    char es;
    char z;
    void check();
    {
    string name;
    ifstream file;
    file.open("Name.txt");
    getline(file, name);

    if (name == "") {
        cout << "There's no data in file Name.txt." << endl;
        string textToSave;
       cout << "Enter the Name you want to be saved: " << endl;
       getline(cin,textToSave);

       ofstream saveFile ("Name.txt");

       saveFile << textToSave;

       saveFile.close();
       cout<<"Please Restart the Calculator for changes to take place";
       cin>>z;
        return 0;
    } else {
        cout << "Your Name in the file is: " << endl;
        cout << name <<"\n";
    
    };
    file.open("Recording.mp4");
    cout<<name<<", "<<"Please Enter Operator--> ";
    cin>>op;
    switch (op)
    {
        case '+':
         cout<<name<<", "<<"Please Enter First Number--> ";
         cin>>x;
         cout<<name<<", "<<"Please Enter Second Number--> ";
         cin>>y;
         while(1)
        {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 cout<<name<<", "<<"Please Enter First Number--> ";
                 cin>>x;
                 cout<<name<<", "<<"Please Enter Second Number--> ";
                 cin>>y;
                 break;
             }
            if(!cin.fail())
                cout<< x <<" + "<< y <<" = "<<x+y;
                break;
        }
        break;
        case '-':
         cout<<name<<", "<<"Please Enter First Number--> ";
         cin>>x;
         cout<<name<<", "<<"Please Enter Second Number--> ";
         cin>>y;
                  while(1)
         {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 break;
             }
            if(!cin.fail())
             cout<< x <<" - "<< y <<" = "<< x-y;
         }
         break;
        case '*':
         cout<<name<<", "<<"Please Enter First Number--> ";
         cin>>x;
         cout<<name<<", "<<"Please Enter Second Number--> ";
         cin>>y;
                  while(1)
         {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 break;
             }
            if(!cin.fail())
              cout<< x <<" * "<< y <<" = "<< x*y;
              break;
            }
          break;
         case '/':
         cout<<name<<", "<<"Please Enter Dividend--> ";
         cin>>x,p;
         cout<<name<<", "<<"Please Enter Divisor--> ";
         cin>>y,r;
         

         {
         
         while(1)
         {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 km = p/r;
                 break;
             }
             if (y == 0)
         {
         cout<<name<<", "<<"ERROR: DIVISION BY 0 IS INVALID!!";
         break;
         }
            if(!cin.fail())
         {
              cout<<x<<" / "<<y<<"="<<x/y;
         }
         break;
        case '%':
         cout<<name<<", "<<"Please Enter Numerator--> ";
         cin>>x;
         cout<<name<<", "<<"Please Enter Denominator--> ";
         cin>>y;
                  while(1)
         {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 break;
             }
            if(!cin.fail())
         cout<<"Percentage is--> "<< x/y*100;
         }
         break;
        case '$':
         cout<<"Under Maintainence";
         break;
       
         case 's':
         cout<<name<<", "<<"Please Enter Number--> ";
         cin>>x;
                       while(1)
         {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 break;
             }
            if(!cin.fail())
             cout<<"Square Root is--> "<<sqrt(x);
         }
         break;

        case 'c':
         cout<<name<<", "<<"Please Enter Number--> ";
         cin>>x;
                       while(1)
         {
             if(cin.fail())
             {
                 cin.clear(); 
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 cin>>es;
                 break;
             }
            if(!cin.fail())
             cout<<"Cube Root is--> "<<cbrt(x);
         }
         break;

        case 'e':
         cout<<name<<","<<"Enter the Base--> ";
         cin>>x;
         cout<<name<<","<<"Enter the Exponent--> ";
         cin>>y;
                       while(1)
         {
             if(cin.fail())
             {
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(),'\n');
                 cout<<name<<", "<<"This is not an number. Kindly Enter a valid number.";
                 break;
             }
            if(!cin.fail())
             cout<<"Answer is--> "<<pow (x, y);
         }
         break;
        case 't':
         cout<<"Please Enter The Number of which Table is to be found--> ";
         cin>>x;
         cout<<"Table of "<<x<<" is:";
         cout<<x*1<<"\n";
         cout<<x*2<<"\n";
         cout<<x*3<<"\n";
         cout<<x*4<<"\n";
         cout<<x*5<<"\n";
         cout<<x*6<<"\n";
         cout<<x*7<<"\n";
         cout<<x*8<<"\n";
         cout<<x*9<<"\n";
         cout<<x*10<<"\n";
         break;
        case 'i':
         cout<<"Please Enter the Principal amount--> ";
         cin>>x;
         cout<<"Please Enter Rate per annum--> ";
         cin>>y;
         cout<<"Please Enter Time in year--> ";
         cin>>d;
         cout<<"Simple Intrest is--> "<<(x*y*d)/100<<"\n";
         cout<<"Total Amount is--> "<<((x*y*d)/100)+x<<"\n";
         break;
        case 'h':
         cout<<name<<", "<<"Help Guide---->";
         cout<<"+ for addition others under construction";
         break;
    }
    }
    }
    }
   
    cout<<"\n";              
    cout<<"Click x on top right corner of window to exit this calculator. To start a new calculation start calculator again\n";
    cin>>es;
    return 0;
} 