// printing  Pyramid pattern with numbers increased by one

#include <iostream>
using namespace std;

void pyramidPattern(int n) // This function will print Pyramid pattern with numbers increased by one
{
    // Initializing
    int x = 1;

    for(int i=1; i<=n; i++)  // for number of rows
    {

        for(int k = n-i; k>=1; k--)
        {

            // printing space
            cout<<" ";
        }

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
    pyramidPattern(5);

    return 0;
}
