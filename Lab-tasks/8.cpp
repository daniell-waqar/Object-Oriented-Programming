#include <iostream>
using namespace std;

int main()
{
    int n,rem , reversedNumber = 0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n != 0)
    {
        rem = n % 10;
        reversedNumber = reversedNumber * 10 +rem;
        n = n / 10;



    }

    cout<<reversedNumber;
    return 0;
}
