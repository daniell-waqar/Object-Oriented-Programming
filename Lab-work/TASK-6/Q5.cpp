/* function in C++ which accepts a 2D array of integers and its size as arguments and
displays the elements of middle row and the elements of middle column.*/

#include <iostream>
using namespace std;

int fun(int arr[3][3])
{  
    cout<<"Middle row =  ";
    // here we are dispalaying middle row
    for(int i=1;i<2;i++)
    {
        for(int j=0;j<3;j++)
        cout<<arr[i][j]<<" ";
    }
    cout<<endl<<endl;

    cout<<"Middle column "<<endl;
    // here we are displaying middle column
    for (int i=0;i<3;i++)
    {   
        cout<< "  ";
        for(int j=1;j<2;j++)
        {
        cout<<arr[i][j]<<endl;
        }
    }
}
int main()
{
    int a[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};
    fun(a);
}