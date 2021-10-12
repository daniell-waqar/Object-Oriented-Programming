#include <iostream>

using namespace std;

void pyramidPattern(int n)
{

    for(int i=1; i<=n ; i++)
    {
        for(int j=n; i<= j; j--)
        {
            
             cout<<"*";
        }
       
        cout<<endl <<'\n';
    }


   
}

int main()
{
    int num;

    cout<<"Enter number of stars : ";
    cin>>num;

    pyramidPattern(num);

    cout<<endl;
    return 0;
}