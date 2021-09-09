#include <iostream>
using namespace std;

void pyramidPattern(int n)
    {
        for(int i=1; i<=n; i++)
        {
          //for number of rows
            for(int k=n-i; k>0; k--)
            {   //for number of spaces

                cout<<" ";
            }
            for(int j=1; j<=i; j++)
            {  //for number of spaces

                cout<<"*";
            }
            cout<<endl;
        }
    }

int main()
{
        int num;

        cout<<"Enter number of rows: ";
        cin>>num;
        //function call

        pyramidPattern(num);
        cout<<endl;
    }
