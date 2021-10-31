#include <iostream>

using namespace std;

void pyramidPattern(int n)
{

    for(int i=n; i>=1 ; --i)
    {
        for(int j=1; j<= i; j++)
        {
            
             cout << j << " ";
        }
          
        cout << endl;
    }


   
}

int main()
{
    int num;

    cout<<"Enter numbers : ";
    cin>>num;

    pyramidPattern(num);

    cout<<endl;
    return 0;
}