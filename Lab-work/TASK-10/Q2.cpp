#include <iostream>
#include <cstring>
using namespace std;

class Test
{
    char paper[20];
    int marks;
    public:
    Test () // Function 1
    {
        strcpy (paper, "Computer");
        marks = 0;
    }
    Test (char p[]) // Function 2
    {
        strcpy(paper, p);
        marks = 0;
    }
    Test (int m) // Function 3
    {
        strcpy(paper,"Computer");
        marks = m;
    }
    Test (char p[], int m) // Function 4
    {
        strcpy (paper, p);
        marks = m;
    }
};
//i:
int main()
{
    Test t1;
    Test t2("Pakistan");
    Test t3(75);
    Test t4("Noble",10);
}
//ii:
//Constructor Overloading (Polymorphism)