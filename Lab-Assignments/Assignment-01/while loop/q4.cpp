#include <iostream>

using namespace std;

int main()
{
    int fact = 1, i = 1, n;

    cout << "Enter a positive integer : ";
    cin >> n;

    if(n < 0)
    {
        cout << "factorial of a negative number doesn't exist.\n";
    }
    else
    {
        while(n > 1)
        {
            fact *= n;
            --n;
        }

        cout << "factorial of " << n << " is " << fact << endl;
    }

    return 0;

}