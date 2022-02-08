#include<iostream>
using namespace std;

class TEST {
private:

    int TestCode;
    string Description;
    int NoCandidates;

    int CALCNTR() {

        return (NoCandidates/100+1);

    }

public:

    void SCHEDULE();

    void DISPTEST();

};

 

void TEST::SCHEDULE () {

        cout<<"Enter TestCode: ";
        cin>> TestCode;

        cout<<"Enter Description: ";

        cin>> Description;

        cout<<"Enter NoCandidate: ";

        cin >> NoCandidates ;

        int no_of_centers = CALCNTR();

        cout<<"*********************************"<<endl;

}

void TEST ::DISPTEST() {

        cout<<"TestCode: "<<TestCode<<"\n" 

        <<"Description: "<<Description<<"\n" 

        <<"NoCandidates "<<NoCandidates<<"\n"

        <<"number_of_centers "<<CALCNTR()<<endl;

}

int main()

{

    TEST t1;
    t1.SCHEDULE();
    t1.DISPTEST();
    return 0;

}