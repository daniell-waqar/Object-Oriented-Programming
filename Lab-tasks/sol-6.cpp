// find factorial of given number

#include <iostream>
using namespace std;

int main()
{
    int n,fact;
    cout<<"Enter a number: ";
    cin>>n;
    fact=n;

    if(n<0)
    {

         cout<<"factorial of -ve number is not possible";
    }

    else
    {

        while(n>1)
        {
            n--;
            fact = fact*n;

        }

        cout<<"Factorial is "<<fact;
    }

     return 0;
}



