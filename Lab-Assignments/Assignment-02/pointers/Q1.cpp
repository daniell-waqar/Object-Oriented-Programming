#include <iostream>
using namespace std;

int main(){

    int n, arr[5],max,min,*p[5];


    cout << "Enter the size of array : ";
    cin >> n;

    cout << "\nEnter numbers into array." << endl;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];              //input values into array
        p[i] = &arr[i];      
                     
    }

    max = *p[0];          //initialize maximum value
    min = *p[0];          //initialize minimum value
    
    for(int i=0; i<n; i++)
    {
        if(*p[i] > max)          //check every element of pointer array with current max
        {
            max = *p[i];      //assign maximum value into max
        }

        if (*p[i] < min)       //check every element of pointer array with current min
        {
            min = *p[i];        //assign minimum value into min

        }
    }

    cout << "Maximum value in array is  " << max << endl;
    cout << "Minimum value in array is  " << min << endl;

    
    return 0;
}