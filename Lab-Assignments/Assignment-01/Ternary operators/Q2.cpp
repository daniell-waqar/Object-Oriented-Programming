#include <iostream>
using namespace std;

int main()
{
    int n;
    string result;

    cout << "Enter the number : ";
    cin >> n;

    result = (n > 0) ? "Positve integer" : "Negative integer";

    cout << n << " is " << result << endl;

    return 0;
}