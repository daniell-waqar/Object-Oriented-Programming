#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float x = 1.5;
    cout << "Sine value of x=1.5: " << sin(x) << endl;
    cout << "Cosine value of x=1.5 : " << cos(x) << endl;
    cout << "Tangent value of x=1.5 : " << tan(x) << endl;
  
    double y = 4.0;
    cout << "Square root value of y=4.0 : " << sqrt(y) << endl;
  
    int z = -2;
    cout << "Absolute value of z=-2 : " << abs(x) << endl;
    cout << "Power value: " << pow(x, y) << endl;
  
    x = 3.0;
    y = 4.0;
    cout << "Hypotenuse  x=3.0 and"
         << " y=4.0 : " << hypot(x, y) << endl;
  
    x = 3.12;
    cout << "Floor value of x=3.12 is : " << floor(x) << endl;
  
    x = -3.57;
    cout << "Absolute value of x=-3.57 is : " << fabs(x) << endl;
  
    x = 2.0;
    cout << "Arc Cosine value of x=2.0 : " << acos(x) << endl;
    cout << "Arc Sine value of x=2.0 : " << asin(x) << endl;
    cout << "Arc Tangent value of x=2.0 : " << atan(x) << endl;
  
    y = 6.3;
    cout << "Ceiling value of y=6.3 : " << ceil(y) << endl;
  
    x = 57.3; // in degrees
    cout << "Hyperbolic Cosine of x=57.3 : " << cosh(x) << endl;
    cout << "Hyperbolic tangent of x=57.3 : " << tanh(x) << endl;
  
    y = 10.0;
    // Natural base with 'e'
    cout << "Log value of y=10.0 is : " << log(y) << endl;
  
    return 0;
}
 
 