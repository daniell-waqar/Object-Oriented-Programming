#include <iostream>
using namespace std;

class batsman
{
    int code;          //private data member of the class
    string name;
    int innings;
    int notout;
    int runs;

    int batavg;

    int calcavg();     //private method  to calculate runs/(innings-notout)
  public:
    void readData(int,string,int,int,int);     //public member fuctions of the class
    void displayData();

};

void batsman ::readData(int code,string name,int innings,int notout,int runs)
{
    this->code = code;   //assigning values to data members
    this->name = name;
    this->innings = innings;
    this->notout = notout;
    this->runs = runs;
    calcavg();     //private method called by indirectly(or with the help of public method)

}

int batsman::calcavg()
{
    batavg = runs/(innings-notout);    //avrage formula
}

void batsman::displayData()
{
    cout << "Batsman code: " << code<< endl;

    cout << "Batsman name: " << name<< endl;

    cout << "Innings: " << innings<< endl;

    cout << "Notout in innings: " << notout<< endl;

    cout << "Runs: "<< runs<< endl;

    cout << "Batsman average: " << batavg << endl;

}

int main()
{
    batsman b1;   //b1 in an instance of class batsman
    b1.readData(10,"Afridi",6,2,217);    //function call
    b1.displayData();     //function call
}


