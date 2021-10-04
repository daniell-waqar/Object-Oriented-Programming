#include <iostream>

using namespace std;

int main()
{

    int radius;

    float v;

    double pi = 3.1415;     //constant value

    cout<<"Enter radius of sphere : ";

    cin>>radius;

    v = (4 * pi * radius*radius*radius)/3;   //formula for volume of sphere

    cout<<"Volume of sphere is : "<<v<<endl;

}