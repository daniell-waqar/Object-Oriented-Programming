#include <iostream>
using namespace std;

int main(){

    int a[3][3],b[3][3],c[3][3];

    cout << "Enter elements into array: " << endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {   
            cout << "a["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];

            cout << "b["<<i<<"]["<<j<<"] = ";
            cin >> b[i][j];
        }
    }

    cout << "\nValues of array a\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nValues of array b\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\nValues of Array c (Resultant array) after addition of Array a and b\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}