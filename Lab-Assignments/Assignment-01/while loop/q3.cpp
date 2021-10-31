#include <iostream>

using namespace std;

int main()
{
    int i = 1, n;

    cout << "Enter a number : ";
    cin >> n;

    while(i < 11)
    {
        cout << n << " x " << i << " = " << n * i << endl;
        ++i;
    }

    return 0;
}
