#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int countword()
{
    ifstream fin;

    string word;
    int count = 0;

    string myFile = "STORY.TXT";

    fin.open(myFile.c_str());

    while(fin >> word){

        if((word == "the") || (word == "The"))
            count += 1; 
    }

    cout << count << endl;
    return count;
       
    fin.close();

}

int main()
{
    countword();
    return 0;
}

