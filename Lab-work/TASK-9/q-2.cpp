#include <iostream>
using namespace std;

class complex    // Class Complex
{   
    float r;       //private data members of the class
    float i;

   public:
    void set(float,float);     //function that set the values of real and imaginary
    void disp();             //function that show the values of real and imaginary
    complex sum(complex);    //function that return sum of two complex numbers

};

void complex::set(float r,float i)    
{
    this-> r  = r;     //set values
    this-> i  = i;
}


void complex ::disp()
{
    cout << " " << r << " + " << i << "i" << endl;      //display values
}

complex complex ::sum(complex comp)
{
    complex temp;
    temp.r = r + comp.r;     //sum of real parts of complex numbers
    temp.i = i + comp.i;     //sum of imaginary parts of complex numbers
    return temp;
}

int main()
{
    complex c1;    //instance of the class
    complex c2;
    complex c3;
    c1.set(4,5);    //functions call
    c2.set(5,12);
    c3 = c1.sum(c2);
    cout << "z1 = ";
    c1.disp();
    cout << "\nz2 = ";
    c2.disp();
    cout << "\nz1 + z2 = ";
    c3.disp();
    return 0;
   

}