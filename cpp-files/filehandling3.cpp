#include<iostream>
#include <fstream>
using namespace std;
int main() {
    fstream FileName;
    FileName.open("FileName.txt", ios::in);
    if (!FileName) {
        cout<<"File doesn’t exist.";
    }
    else {
        char x;

        while (1) {
            FileName>>x;
            //line = FileName.getLine();
            if(FileName.eof())
                break;
            cout<<x;
        }
    }
    FileName.close();
    return 0;
}
