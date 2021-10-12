#include <iostream>

using namespace std;

int main()
{
    char grade;
    
    cout << "please enter the student's grade :\t";
    cin>>grade;

    switch (grade)
    {
    case 'A':
    case 'a':

        cout << "Excellent\n";
        break;

    case 'B':
    case 'b':

        cout << "Very Good\n";
        break;

    case 'C':
    case 'c':

        cout << "Good\n";
        break;

    case 'D':
    case 'd':

        cout << "Poor\n";
        break;

    case 'F':
    case 'f':

        cout << "Fail\n";
        break;

    default:

        cout << "Enter grade from A to D or F\n";
        break;
    }

    return 0;
}