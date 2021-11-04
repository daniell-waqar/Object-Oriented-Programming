/* program that check the type of the value and determine the data type of the value*/

#include <iostream>
#include <string>
using namespace std;

void printType(int type)
{
    if((type == 0)  || (type == 1))
    {
        cout << type << " is boolean data type" << endl;
    }
    else
    {
        cout << type << " is an integer data type" << endl;
    }
}

void printType(bool type)
{
    if(type == 1)
    {
        cout <<  "true is a boolean data type" << endl;
    }
    
    else
    {
        cout << "false is a boolean data type" << endl;
    }
    
}

void printType(double type)
{
    cout << type << " is a double data type" << endl;
}

void printType(char type)
{
    cout << type << " is a character data type" << endl;
}



int  main()
{
    printType(1.23456);
    printType(7338512);
    printType(false);
    printType(0);
    printType('a');
    
}