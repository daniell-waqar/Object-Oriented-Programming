#include <iostream>
using namespace std;

int main(){

    int arr[3][3],max,min;

    cout << "Enter elements into array: " << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Array values are : " << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout <<  arr[i][j] << " ";
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
    cout << "Maximum number is = " << max << endl;
    cout << "Minimum number is = " << min << endl;

    return 0;
}
