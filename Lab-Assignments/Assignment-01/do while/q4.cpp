#include <iostream>

using namespace std;

int main()
{
    int fact = 1, i = 1, num;

    cout << "Enter a positive integer : ";
    cin >> num;

    if(num < 0)
    {
        cout << "factorial of a negative number doesn't exist.\n";
    }
    else
    {   
    do
    {
        fact *= i;
        ++i;
    }
    
    
    while(i <= num);

      cout << "factorial of " << num << " is " << fact << endl;
    }

    return 0;

}