// program to print diamond shape

#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for(int i=1; i<=n-1; i++)  // loop till number of rows
    {

        for(int k=n-i; k>0; k--)     // loop for spaces
        {

            cout<<" ";
        }

        for(int j=1; j<=i*2-1; j++)    // loop for asterisk
        {

            cout<<"*";
        }

        cout<<endl;
    }

    // Repeat again in reverse order

    for(int i=n; i>=1; i--)    // loop till number of rows
    {

        for(int k=n-i; k>0; k--)  // loop for spaces
        {

            cout<<" ";
        }

        for(int j=1; j<=i*2-1; j++)   // loop for asterisk
        {

            cout<<"*";
        }

        cout<<endl;
    }



}
