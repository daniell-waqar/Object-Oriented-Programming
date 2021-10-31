#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    char opr;

    cout << "Enter first number\t";
    cin>>n1;

    cout << "Enter second number\t";
    cin>>n2;

    cout << "Enter the operator (+,-,*,/)\t";
    cin>>opr;

    switch (opr)
    {
    case '+':

        cout<< n1 << " + " << n2 << " = "  << n1 + n2 <<"\n";
        break;

    case '-':

        cout<< n1 << " - " << n2 << " = "<< n1 - n2 <<"\n";
        break;

    case '*':

        cout<< n1 << " * " << n2 << " = " << n1 * n2 <<"\n";
        break;


    case '/':

        cout<< n1 << " / " << n2 << " = " << n1 / n2 <<"\n";
        break; 


    default:

        cout << "Invalid inputs!\n";
        break;
    }

    return 0;

}