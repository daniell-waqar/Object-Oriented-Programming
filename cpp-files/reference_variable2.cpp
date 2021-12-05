#include<iostream>
using namespace std;

void swap (int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
    cout << "Address of variable first is " << &first << endl;

}

int main()
{
    int a = 2, b = 3;

    cout << "Value of a is " << a << " and value of b is "" " << b << endl;
    swap( a, b );
    cout << "Value of a is " << a << " and value of b is "" " << b << endl;
    cout << "Address of variable a is " << &a << endl;
    return 0;
}
