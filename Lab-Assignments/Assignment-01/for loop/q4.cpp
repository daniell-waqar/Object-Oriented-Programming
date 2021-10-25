#include <iostream>

using namespace std;

int main()
{
    int fact = 1, n;

    cout << "Enter a positive integer : ";
    cin >> n;

    if(n < 0)
    {
        cout << "factorial of a negative number doesn't exist.\n";
    }
    else
    {
        for(int i = n; i>= 1; --i)
        {
            fact *= i;
        }

        cout << "factorial of " << n << " is " << fact << endl;
    }

    return 0;

}