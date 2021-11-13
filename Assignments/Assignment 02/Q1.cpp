#include <iostream>
using namespace std;

void swap_num(int *n1, int *n2);
 

 
int main() {

   int n1, n2;
 
   
   cout<<"First number before swapping: ";
   cin>>n1;
   cout<<"Second number before swapping: ";
   cin>>n2;

   swap_num(&n1, &n2);
   cout<<"\nFirst number after swapping: "<< n1;
   cout<<"\nSecond number after swapping: "<<n2;
   
 
   
}

void swap_num(int *n1, int *n2)
{
      int n;

      n = *n1;
      *n1 = *n2;
      *n2 = n;
      
}
 