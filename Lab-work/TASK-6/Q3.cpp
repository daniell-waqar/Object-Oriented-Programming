/* user-defined function in C++ to display the multiplication of row element of
two-dimensional array A[4][6] containing integer.*/

#include<iostream>
using namespace std;

void fun(int a[][6],int n,int m)
{
	int c;
	for(int i=0;i<n;i++)
    {
      c=1;
	 

	   for(int j=0;j<m;j++)
	    {
			cout<<a[i][j]<<" ";
			c=c*a[i][j];
		}

		cout<<" product is = " <<c<<endl;

	cout<<endl;
	}
}

int main()
{
	int a[4][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
	fun(a,4,6);
}