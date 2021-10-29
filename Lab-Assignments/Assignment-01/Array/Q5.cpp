#include <iostream>
using namespace std;

int main()
{   
    
    int arr[] = {2,10,1,9,6};    //initialize the array
    int n = sizeof(arr) / sizeof(arr[0]);    //size of the array
    int min = arr[0];     // initialize minimum element

    for(int i=0; i<n; i++)
    {
        if(arr[i] < min)     //compare every element with current min
        {
            min = arr[i];
        }

    }

    cout << "Minimum number in given array is : " << min <<endl;
    return 0;
}




  