/* Find positive, negative and neutral numbers using if-else-if else statement */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number : ";
    cin >> n;

    if(n > 0)
    
        cout << n << " is positive number" << endl;

    else if(n < 0)

        cout << n << " is negative number" << endl;

    else

        cout << "Neutral number " << endl;

    return 0;

}