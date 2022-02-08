#include <iostream>
using namespace std;

class Rectangle  // Class Rectangle
{ 
    float length;  //private data members of the class
    float width;

  public:
    
    Rectangle();  //Default constructor
    void setlength(float);  //function that set the length of the rectangle
    void setwidth(float);    //function that set the width of the rectangle
    void show() const;      //function that show the length and width of the rectangle
    float area() const;     //function that will calculate Area of the rectangle
    float perimeter() const;   //function that will calculate Perimetyer of the rectangle
    int sameArea(Rectangle);     //function will return true if two Rectangle have same area

};

Rectangle::Rectangle()     //Default constructor will initialize with 0
{
    length = 0.0;
    width = 0.0;
}

void Rectangle::setlength(float length)    
{   
    if(length >=0.0)      //value will be assign if it positive

        this-> length = length;
    
    else
    
        this->length = 0.0;   //otherwise it should be zero
}

void Rectangle::setwidth(float width)
{   
    if(width >=0.0)       //value will be assign if it positive

        this-> width = width;
    
    else
    
        this->width = 0.0;     //otherwise it should be zero
}

void Rectangle::show() const
{
    cout <<"length = " <<length <<" " << "width = "<<width << endl;     //displaying length and width
}

float Rectangle ::area() const
{
    float Area = length*width;     //calculating Area
    return Area;                //return Area
}

float Rectangle::perimeter() const
{ 
    float result = (2*(length+width));    //calculating Perimater
    return result;                   //return Perimeter
}

int Rectangle::sameArea(Rectangle r2)
{
	float area1 = length * width;        //calculating area of first reactangle
	float area2 = r2.length * r2.width;  //calculating area of second rectangle
	if (area1 == area2)           //check if both rectangle have same area return true otherwise false
    {
        return 1;
    }

	return 0;
}

int main()
{
    Rectangle rec1;      //instance of the class
    Rectangle rec2;
    rec1.setlength(5);
    rec1.setwidth(2.5);    //functions call
    rec2.setlength(5);
    rec2.setwidth(18.9);
    rec1.area();
    rec1.perimeter();


    cout << "First rectangle: " << endl;
    rec1.show();
	cout << "Area = " << rec1.area() <<" " << "Perimeter = " << rec1.perimeter() <<"\n\n";

	cout << "Second rectangle: " << endl;
    rec2.show();
	cout << "Area = " << rec2.area() <<" " << "Perimeter = " << rec2.perimeter() <<"\n\n";

    if (rec1.sameArea(rec2))
    {
        cout << "both Rectangle have the same area" << endl;
    }
	else
    {
        cout << "both Rectangle do not have the same area" << endl << endl;
    }

    cout <<"---------------------------------------"<< endl;
	rec1.setlength(15);
	rec1.setwidth(6.3);

	cout << "First rectangle: " << endl;
    rec1.show();

	cout << "Area = " << rec1.area() <<" " << "Perimeter = "<< rec1.perimeter() <<"\n\n";

	cout << "Second rectangle: "<< endl;
    rec2.show();

	cout<< "Area = " << rec2.area() <<" " << "Perimeter = "<< rec2.perimeter() << "\n\n";
	if (rec1.sameArea(rec2))
    {
        cout << "Rectangles have the same area" << endl;
    }

	else
    {
        cout << "Rectangles do not have the same area" << endl;
    }

	return 0;
}