#include <iostream>
using namespace std;


int main(){

  int num1, num2;
  float result;

  cout << "Enter two numbers:" << endl;
  cin >> num1 >> num2;

  result = num1 + num2;

  cout << "Result is " << result << endl;

  int x = 10;
  char y = 'a';


  y = x + y;
  int z1 = y*2;

  cout << z1 << endl;
                                          // y implicitly converted to int.
                                                      // ASCII value of 'a' is 97


 float z = (float)x / 3;

  cout << "Value of z is" << z << endl;
  cout << "Value of z/2 is" << z/2 << endl;
                                    // if both operands are int, the result will be int

  cout << "x = " << x << endl
       << "y = " << y << endl
       << "z = " << z << endl;

  double val = 1.2;


  int sum = (int)val + 1;                              //explicit conversion

  cout << "Sum = " << sum << endl;



return 0;

}
