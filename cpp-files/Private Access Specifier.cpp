

#include <iostream> 
using namespace std;

class Circle
{   
public:
    double r;
    double calculate_area()
    {
        return 3.14*r*r;
    }



};

int main()
{
    Circle obj;

    obj.r = 5.5;    // accessing public data member outside class

    cout << "Radius of Circle : " << obj.r << endl;

    cout << "Area of Circle : " << obj.calculate_area() << endl;

    return 0;
}

