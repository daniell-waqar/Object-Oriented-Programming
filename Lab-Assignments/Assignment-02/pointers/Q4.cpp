/* Write a program to find out the length of string by using pointers?*/

#include <iostream>
using namespace std;

int main()
{
    string str1;

    cout << "Enter any string : ";
    cin >> str1;

    string  *p;
    p = &str1;
    string r = *p;

    cout << "The length of the string is : " << r.length() << endl;

    return 0;

} 
