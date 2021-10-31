#include <iostream>
using namespace std;

int main()
{
    int num1,num2,larger;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    larger = (num1 > num2) ? num1 : num2;   // Largest among num1 and num2

    cout << "Larger number between " << num1 << " and " << num2 << " is "<< larger << endl;

    return 0;
}   