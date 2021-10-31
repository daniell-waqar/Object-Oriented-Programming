#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roll_no,marks,obtain_marks,total_marks = 400;
    int Eng,OOP,Calculus,Coal;
    float per;
    string name;

    cout << "Enter the name of student : ";
    cin >> name;

    cout << "Enter Roll number : ";
    cin >> roll_no;

    cout << "Enter English marks : ";
    cin >> Eng;

    cout << "Enter OOP marks : ";
    cin >> OOP;

    cout << "Enter Calculus marks : ";
    cin >> Calculus;

    cout << "Enter Coal marks : ";
    cin >> Coal;

    obtain_marks = Eng+OOP+Calculus+Coal;

    per = ((obtain_marks*100)/total_marks);

    cout << endl << endl << endl;

    cout << "---------------------------------------------" << endl;

    cout << "ＮＡＭＥ\t"                       << name << endl << endl;

    cout << "R O L L N O\t"                 << roll_no << endl << endl;

    cout << "ＥNGLISH Ｍａｒｋｓ  "          << Eng << endl << endl;

    cout << "OOP M A r K ꜱ \t"                      << OOP << endl << endl;

    cout << "C a L c u L u s MaRks "            << Calculus << endl << endl;

    cout << "C o A L MarkS\t"                   << Coal << endl << endl;

    cout << "================================================" << endl;

    cout << "Obtain Marks\t"                      << obtain_marks << endl;

    cout << "TOTAL MARKS\t"                        << total_marks << endl;

    cout << "Percentage \t"                       << per << endl;

    cout << endl << endl;

    cout << "             GOOD LUCK!" << endl;




    
}