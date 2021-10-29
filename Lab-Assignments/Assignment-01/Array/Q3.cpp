#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{   
    int n, randArr1[100], randArr2[100],sumrandArr[100];
    cout << "Enter the size of array : ";
    cin >> n;
    random();
    
    cout << "\nRandom numbers of first array : ";
    for(int i=0; i<n; i++)
    {
        randArr1[i] = rand() % 10;
        cout << randArr1[i] <<"\t";

    }
    cout << "\n\nRandom numbers of second array : ";
    for(int i=0; i<n; i++)
    {
        randArr2[i] = rand() % 10;
        cout << randArr2[i] <<"\t";
    }
    cout << "\n\nSum of elements of the arrays using random nymbers : ";

    for(int i=0; i<n; i++)
    {
        sumrandArr[i] = randArr1[i] + randArr2[i];
        cout << sumrandArr[i] << "\t";
    }


   
}

