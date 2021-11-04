/* Write a program to combine two strings by using pointers?*/

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter the 1st string : ";
    cin >> str1;

    cout << "Enter the 2nd string : ";
    cin >> str2;

    string *p , *q;
    p = &str1;
    q = &str2;

    string r = *p + *q;

    cout << "Combine string is : " << r << endl;
    return 0;
   



}