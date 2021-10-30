#include <iostream>
#include <fstream>

using namespace std;

void vowelwords()
{
    ifstream fin;
    
    string myFile = "FIRST.TXT";
    fin.open(myFile,ios::in);

    ofstream fout;
    string myOwnFile = "SECOND.TXT";
    fout.open(myOwnFile,ios::out);
    
    
    char term[20];

    while(!fin.eof())
	{
		fin >> term;
		if(term[0]=='a'||term[0]=='e'||term[0]=='i'||
            term[0]=='o'||term[0]=='u')
            {
                fout << term <<" ";
            }
			
	}
        

    fin.close();
    fout.close();
   

}

int main()
{
    vowelwords();

    return 0;
}
