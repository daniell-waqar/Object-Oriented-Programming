#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number :";
    cin >> num;

    for(int i = 1; i<= num*2; i++)
    {
        if(i % 2 == 0)       // check number is  divisible by 2
        
            cout << i << " is Even\n";
            
    }
       cout << "=========" << endl;

    for(int i = 1; i<= num*2; i++)
    {
        if(i % 2 != 0)        // check number is not divisible by 2
        
            cout << i << " is Odd\n";
            
    }

    return 0;
}