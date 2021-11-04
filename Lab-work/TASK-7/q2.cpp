/* program that asks the user to enter integers as inputs to be stored in the variables
'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values
of 'a' and 'b' to ptrA and ptrB respectively, and display them.*/

#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout << "Enter 1st number : ";
    cin >> a;

    cout << "Enter 2nd number : ";
    cin >> b;

    int *ptrA,*ptrB;

    ptrA = &a;
    ptrB = &b;

    cout << "Value of a = " << *ptrA << endl;
    cout << "Value of b = " << *ptrB << endl;

    return 0;


    
}