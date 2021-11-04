#include<iostream>
using namespace std;

int upper_half(int arr[5][5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }

        for(int k=i;k<5;k++)
        {
        cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }
    }

int main()
{
    int A[5][5] = {{3,7,4,2,1},{8,0,5,9,3},
    {5,3,4,0,7},{1,0,9,4,3},{6,2,3,1,7}};
    upper_half(A);

    return 0;
}
