
//C++ Program to swap two numbers without using the third variable.

#include <iostream>

using namespace std;

int main()
{

    int num1 , num2;

    cout<< "Before swapping." <<endl;

    cout<<"Enter first number : ";

    cin>>num1;

    cout<<"Enter second number : ";

    cin>>num2;

    cout<< "After swapping." <<endl;

    num1 = num1 + num2;

    num2 = num1 - num2;

    num1 = num1 - num2;

    cout<<"First number : "<<num1<<endl;

    cout<<"Second number : "<<num2<<endl;

    return 0;
}