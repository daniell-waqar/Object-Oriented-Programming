#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter an integer that you want to reverse : ";

    cin>>num;

    while(num != 0)
    {
         cout<<num % 10;

        num = num / 10;

    }



    return 0;
}
