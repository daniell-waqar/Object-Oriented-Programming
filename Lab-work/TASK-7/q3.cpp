/* C++ program to find the max of an integral data set. The program will ask the
user to input the number of data values in the set and each value. The program prints on screen a
pointer that points to the max value.*/

#include <iostream>
using namespace std;

int main()
{
    int max, arr[5], *p;

    cout << "Enter elements of array " << endl;

    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];

    for(int i=0; i<5; i++)
    {
        if(arr[i] > max)
        max= arr[i];
    }

    p = &max;

    cout << "Maximum value of the array is : " << *p << endl;

    return 0;

    
}