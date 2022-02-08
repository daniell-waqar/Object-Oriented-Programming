#include <iostream>
using namespace std;

class student
{

    int admno;               //private data member of the class
    string name;
    float eng,math,science;
    float total;
    float ctotal(); //private method  to calculate eng + math + science with float return type.

  public:
    void Takedata(int,string,float,float,float);       //public member fuctions of the class
    void Showdata();

};

void student ::Takedata(int no,string n,float e,float m,float s)
{   
    admno = no;
    name = n;
    eng = e;
    math = m;
    science = s;
    ctotal();   //private method called by indirectly(i.e with the help of public method)


}

float student ::ctotal()
{
    total = eng + math + science;    //sum of marks of each course and assign to total
    return total;                     //return total marks
}

void student ::Showdata()
{   
    cout<<"---------------------------------------------"<<endl;
    cout << "Admission number : " << admno << endl;
    cout << "Student name : " << name << endl;
    cout << "English marks : " << eng << endl;
    cout << "Math marks : " << math << endl;
    cout << "Sceince marks : " << science << endl;
    cout << "Total marks of the Student : " << total << endl;
}

int main()
{   

    student s1;     //s1 in an instance of class student
    s1.Takedata(1234,"Waqar",76.8,92.2,85.4);  //function call
    s1.Showdata();  //function call
}