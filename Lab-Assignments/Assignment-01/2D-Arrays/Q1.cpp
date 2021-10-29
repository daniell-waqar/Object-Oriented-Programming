/* C++ program that will create 2D array using random numbers and then show
these values */

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
 
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

    return 0;
}