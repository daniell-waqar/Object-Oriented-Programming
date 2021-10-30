#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int fact = 1, n,i,j;
    float x,val = 1 ,result = 1;

    cout << "Enter the value of x :";
    cin >> x;

    cout << "Enter a positive integer : ";
    cin >> n;

    int sign = -1;
    
    for(int i = 2; i<=n; i++);
    {
        
        for(int j=1;j<=i;j++)
        {
            val *= x;
            fact *= j;
        }
         
    }
    result += sign * val/fact;
    sign *= (-1);

        
    cout<<"cos "<<x<<"="<<result << endl;
        

    return 0;

}