#include<iostream>
using namespace std;

int main(){

    float centigrade,fahrenheit;

    cout<<"Enter the temperature in centigrade: ";
    cin>>centigrade;
    

    fahrenheit = (centigrade*1.8)+32;

    cout<<"The temperature in fahrenheit is: "<<fahrenheit<<endl;


    return 0;
}