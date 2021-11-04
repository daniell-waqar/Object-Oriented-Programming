/* Write user defined function arrayFunction() in C++ which will initialize array by
taking values from user at run time and then call this function in main function which will return
this array from the calling function to the called function (to the main function) and then show all
items of this array in main function using loop.*/


#include <iostream>
using namespace std;

int* arrayFunction()
{   
    int *p;
    p = new int[5];

    cout<<"Enter the elements of array : " << endl;
    for(int i=0; i<5; i++)
    {
        cin>>p[i];
    }

    return p;
}

int main()
{
    int *q;
    q = arrayFunction();

    cout << endl;
    cout<< "Elements of array are : ";

    for(int i=0; i<5; i++)
    {
        cout<<q[i]<<" ";
    }
    delete[] q;
}
