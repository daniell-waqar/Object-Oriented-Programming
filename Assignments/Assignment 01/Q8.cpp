#include <iostream>
using namespace std;

int Merge(int X[5],int Y[5],int Z[10], int size)
{   
    for(int i = 0; i<5; i++)
    {
        Z[i] = X[i];
    }

    for(int j = 0; j<5; j++)
    {
        Z[j+size] = Y[j];
    }
    for (int k=0; k<10; k++)
    {
        cout << Z[k]<<" ";
    }

}
int main()
{
    int X[5] = {10,9,8,7,6};

    int Y[5] = {5,4,3,2,1};
    
    int Z[10];

    int size = 0 ;
  
    size = sizeof(X)/sizeof(X[0]);
    cout<<"size  = " <<size<<endl; 
   
    Merge(X,Y,Z,size);
    return 0;
}