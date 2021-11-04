#include <iostream>
#include <cmath>
using namespace std;

int z = 100;
int function_test(int );
//int function_test(int x, int y=0);
int function_test();     //function prototype

int main() {

  int x = 10;
  //cout << "The value of x is " << x << endl;
  cout << function_test(x) << endl;
  cout << function_test() << endl;
  //cout << "The value of x is " << x << endl;

  cout << "The value of z is " << z << endl;
  return 0;

}


int function_test(int x) {

   x = 20;
  cout << "Function received value: " << x << endl;

  return pow(x,2);

}

int function_test() {

  return pow(z,2);

}
