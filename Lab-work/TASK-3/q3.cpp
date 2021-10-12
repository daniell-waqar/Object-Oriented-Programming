#include <iostream>

using namespace std;

int main()
{
    char grade;
    
    cout << "please enter the student,s grade :\t";
    cin>>grade;

    switch (grade)
    {
    case 'A':
        
        cout << "Excellent\n";
        break;
    case 'B':

        cout << "Very Good\n";
        break;
    case 'C':

        cout << "Good\n";
        break;
    case 'D':

        cout << "Poor\n";
        break;
    case 'F':

        cout << "Fail\n";
        break;
    default:

        cout << "Enter grade from A to D or F\n";
        break;
    }

    return 0;
}
    

