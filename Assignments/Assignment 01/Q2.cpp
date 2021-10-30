#include <iostream>
#include <fstream>

using namespace std;

void countdisplayAlphabet()
{
    ifstream fin;

    char x;
    int count = 0;

    string ourFile = "OUT.TXT";

    fin.open(ourFile,ios::in);
    
    while(true)
    {   
        
        fin.get(x);
        if(isalpha(x))
            ++count;
        if(fin.eof())
            break;
        

    }
    cout << "\nNumber of alphabets is\t" << count <<endl;



    fin.close();
}

int main()
{
    countdisplayAlphabet();
    return 0;
}