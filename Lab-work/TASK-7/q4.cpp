#include <iostream>
using namespace std;

int main()
{
    int val, *p;

    cout << "Enter the value :  ";
    cin >> val;

    p = &val;

    cout << "given value is  " << *p << endl;
    return 0;
}