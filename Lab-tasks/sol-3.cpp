// printing pattern of numbers

#include <iostream>
using namespace std;

void trianglePattern(int n) // This function will print right angle triangle with numbers increased by one
{
    // Initializing
    int x = 1;

    for(int i=1; i<=n; i++)  // for number of rows
    {
        for(int j=1; j<=i; j++)  // for number of columns
        {
            // printing numbers with space
            cout<<x<<" ";

            // Incrementing number
            x++;

        }
        // Ending line after each row
        cout<<endl;
    }
}

int main()
{
    // function call
    trianglePattern(5);
    return 0;
}
