#include <iostream>
using namespace std;

int main()
{
    int num;
    string result;

    cout << "Enter a number : ";
    cin >> num;

    result = (num % 2 == 0) ? "EVEN" : "ODD";

    cout << num << " is " << result << endl;

    return 0;
}