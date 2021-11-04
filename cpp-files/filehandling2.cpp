#include<iostream>
#include<fstream>
using namespace std;
int main() {
    fstream FileName;
    FileName.open("FileName.txt", ios::out);
    if (!FileName) {
        cout<<" Error while creating the file ";
    }
    else {
        cout<<"File created and data got written to file" << endl;
        FileName<<"Lets see what happens now";
        FileName.close();
    }
    return 0;
}
