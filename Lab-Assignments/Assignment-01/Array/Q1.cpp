#include <iostream>
using namespace std;

int main()
{
    int n, A1[10], A2[10], A3[10];

    cout << "How many elements you want to enter : ";
    cin >> n;

    cout << "Enter the elements of first array : "<< endl;

    for(int i=0; i<n; i++)
    {
        cin >> A1[i];

    }
    cout << "How many elements you want to enter : ";
    cin >> n;

    cout << "Enter the elements of second array : "<< endl;


    for(int i=0; i<n; i++)
    {
        cin >> A2[i];

    }

    cout << "Sum of elements of the arrays:" << endl;

    for(int i=0; i<n; i++)
    {
        A3[i] = A1[i] + A2[i]; 
        cout << A3[i] << endl;

    }
    
    return 0;
}