/* C++ program that will find maximum and minimum number in 2D array. Note
array elements must be random values.*/


#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], max ,min;
 
    cout << "Random values of 2D-Array : "<< endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    max = arr[0][0];
    min = arr[0][0];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }

            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "\nMaximum number is = " << max << endl;
    cout << "Minimum number is = " << min << endl;

    return 0;

}