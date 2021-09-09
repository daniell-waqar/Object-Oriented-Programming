#include <iostream>
using namespace std;

void trianglePattern(int n) // This function will print right angle triangle with numbers
{
    for(int i=1; i<=n; i++)  // for number of rows
    {
        for(int j=1; j<=i; j++)  // for printing pattern
        {
            cout<< j;
        }
     cout<<endl;
    }
}

int main()
{

    trianglePattern(5);  // function call
    return 0;


}
