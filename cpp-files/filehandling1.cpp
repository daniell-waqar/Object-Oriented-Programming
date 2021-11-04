#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream FileHanlde;
    FileHandle.open("FileName", ios::out);
    if (!FileHandle){
        cout<<"Error while creating the file";
    }
    else{
        cout<<"File created successfully";
        FileHandle.close();
    }
    return 0;
}
