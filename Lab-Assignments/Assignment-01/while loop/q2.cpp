#include <iostream>

using namespace std;

int main()
{
    int num,i = 1,n;

    cout << "Enter a number :";
    cin >> num;

    while(i<= num)
    {   
        for(int n = num; n <= num; ++n)
        {
            if(i % 2 == 0)       // check number is  divisible by 2
        
            cout << i << " is Even\n";
            
        }
        
    }
       cout << "=========" << endl;

    
    while(i>= num)
    {
        if(i % 2 != 0)        // check number is not divisible by 2
        
            cout << i << " is Odd\n";
            
    }

    return 0;
}