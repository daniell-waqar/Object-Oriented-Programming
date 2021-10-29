#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main()
{

    int num;        //store random number
 
    //random();    //call it to generate random number
    for(int i=0; i<5; i++)
    {
        num = rand()%100; // To get random number
        cout << num << "\t";    
    }
    return 0;
}