#include <iostream>
using namespace std;

int main()
{   
    
    int arr[] = {2,10,55,9,6};    //initialize the array
    int n = sizeof(arr) / sizeof(arr[0]);    //size of the array
    int max = arr[0];     // initialize maximum element
  

    for(int i=0; i<n; i++)
    {
       if(arr[i] > max )   //compare every element with current max
       {
           max = arr[i];
       }
    }
    cout << "Maximum number in given array is : " << max <<endl;
    
    




}