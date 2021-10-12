#include <iostream>

using namespace std;

int main()
{

    int num1 , num2;

    cout<<"Enter first number : ";

    cin>>num1;

    cout<<"Enter Second number : ";

    cin>>num2;

    int Add = num1 + num2;

    int sub = num1 - num2;

    int div = num1 / num2;

    int mul = num1 * num2;

    int rem = num1 % num2;

    cout<<"Addition is : "<<Add<<endl;

    cout<<"Subtraction is : "<<sub<<endl;

    cout<<"Division is : "<<div<<endl;

    cout<<"Multiplication is : "<<mul<<endl;

    cout<<"Remainder is : "<<rem<<endl;

    return 0;
}