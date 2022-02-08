#include <iostream>
#include <string>
using namespace std;

class memberType
{
    string name;
    int ID;
    int no_of_books_bought;
    double amount_spent;

  public:
    memberType();
    memberType(string,int,int,double);
    void setName(string);
    string getName() const;
    void showName();
    void modifyName(string);

    void setID(int);
    int getID() const;
    void showID();
    void modifyID(int);

    void setNumofBooksBought(int);
    int getNumofBooksBought() const;
    void showNumofBooksBought();
    void modifyNumofBooksBought(int);

    void setAmountSpent(double);
    double getAmountSpent() const;
    void showAmountSpent();
    void modifyAmountSpent(double);

    
};

memberType ::memberType()
{
    name = "";
    ID = 0;
    no_of_books_bought = 0;
    amount_spent = 0;

}
memberType ::memberType(string name,int ID,int no_of_books_bought,double amount_spent)
{
    this-> name = name;
    this->ID = ID;
    this-> no_of_books_bought = no_of_books_bought;
    this->amount_spent = amount_spent;

}

void memberType ::setName(string name)
{
    this-> name = name;
}

string memberType ::getName() const
{
    return name;
}
void memberType ::showName()
{
    cout << "Name of person: " << name << endl;
}
void memberType ::modifyName(string Name)
{
    name = Name;
    cout << "Modified name: " << name << endl;
}

void memberType ::setID(int ID)
{
    this->ID = ID;
}
int memberType :: getID() const
{
    return ID;
}
void memberType ::showID()
{
    cout << "ID of person: "<< ID<< endl;
}
void memberType ::modifyID(int a)
{
    ID = a;
    cout << "Modified ID: " << ID << endl;
}

void ::memberType :: setNumofBooksBought(int no_of_books_bought)
{
    this-> no_of_books_bought = no_of_books_bought;
}
int memberType ::getNumofBooksBought() const
{
    return no_of_books_bought;
}
void memberType :: showNumofBooksBought()
{
    cout << "Number of books bought: " << no_of_books_bought << endl;
}
void memberType :: modifyNumofBooksBought(int n)
{
    no_of_books_bought = n;
    cout << "Modified number of books bought: " << no_of_books_bought << endl;
}
void memberType ::setAmountSpent(double amount_spent)
{
    this->amount_spent = amount_spent;
}
double memberType ::getAmountSpent() const
{
    return amount_spent;
}
void memberType ::showAmountSpent()
{
    cout << "Amount spent: " << amount_spent << endl;
}

void memberType ::modifyAmountSpent(double p)
{
    amount_spent = p;
    cout << "Modified Amount spent: " << amount_spent << endl;
}



int main()
{
    memberType m1;
    memberType m2("Hassan",0750,6,400.5);
    m1.setName("Waqar");
    m1.getName();
    m1.showName();
    m1.modifyName("Ahmed");
    m1.setID(1111);
    m1.getID();
    m1.showID();
    m1.modifyID(2222);
    m1.setNumofBooksBought(8);
    m1.getNumofBooksBought();
    m1.showNumofBooksBought();
    m1.modifyNumofBooksBought(12);
    m1.setAmountSpent(80.25);
    m1.getAmountSpent();
    m1.showAmountSpent();
    m1.modifyAmountSpent(112.5);
    

    

}
