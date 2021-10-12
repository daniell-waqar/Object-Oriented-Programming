#include <iostream>
using namespace std;

int main()
{

    int n1, n2, result;
    char opr;

    cout << "Enter first number\t";
    cin>>n1;

    cout << "Enter second number\t";
    cin>>n2;

    cout << "Enter the operator (+,-,*,/)\t";
    cin>>opr;

    if(opr == '+')
    {
        cout<< n1 << " + " << n2 << " = "  << n1 + n2 <<"\n";
    }
    else if (opr == '-')
    {  
        cout<< n1 << " - " << n2 << " = "<< n1 - n2 <<"\n";
    }
    else if (opr == '*')
    { 
        cout<< n1 << " * " << n2 << " = " << n1 * n2 <<"\n";
    }
    else if (opr == '/')
    {
        cout<< n1 << " / " << n2 << " = " << n1 / n2 <<"\n";
    }
    else
    {
        cout << "Invalid inputs!\n";
    }

    return 0;
}