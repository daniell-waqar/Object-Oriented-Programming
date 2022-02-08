#include <iostream> 
using namespace std;

class Sample
{
  private:
    int x;
    double y;

  public :
    Sample(); //Constructor 1
    Sample(int); //Constructor 2
    Sample(int, int); //Constructor 3
    Sample(int, double); //Constructor 4
};

Sample::Sample()
{
    x = 0;
    y = 0;
    cout << "x = "<<x<< "  " << "y = "<<y<< endl;

}

Sample::Sample(int x)
{
    this->x = x;
    y = 0;
    cout << "x = "<<x<< "  " << "y = "<<y<< endl;
}

Sample::Sample(int a,int b)
{
    x = a;
    y = b;
    cout << "x = "<<x<< "  " << "y = "<<y<< endl;
}
Sample::Sample(int a,double b)
{
    x = a;
    y = b;
    cout << "x = "<<x<< "  " << "y = "<<y<< endl;
   
}

int main()
{
    Sample s1;
    Sample s2(5);
    Sample s3(2,3);
    Sample s4(3,5.6);
}

