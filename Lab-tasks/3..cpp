#include <iostream>
using namespace std;

int Cube(int n)
{
    for(int i=1; i<=n; i++) // Iterate upto n number of terms
    {
        int cube;

        cube = i*i*i;    // finding cube of the number

        cout<<"Number is: "<<i<<" and cube of the "<<i<<" is: "<<cube<<"\n";

    }
}

int main()
{
    // Variable declaration
    int num;

    cout<<"Input number of terms: ";

    // Input from user
    cin>>num;

    // function call
    Cube(num);

    return 0;
}

