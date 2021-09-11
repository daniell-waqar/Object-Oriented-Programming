// program to check
// whether a given number
// is palindrome or not

#include <iostream>
using namespace std;

int main()
{

    int n,num = 0,rem,temp;

    cout<<"Enter a number : ";

    cin>>n;

    temp = n;

    while(temp > 0)
    {

        rem = temp % 10;

        num = num * 10 +rem;

        temp = temp / 10;

    }

    if(num == n)
    {

        cout << " The number is a palindrome.";
    }

    else
    {

        cout << " The number is not a palindrome.";

    }

    return 0;

}
