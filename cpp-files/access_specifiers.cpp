#include <iostream>
using namespace std;

class Employee {
    int pay_rate;

    public:
    // these are called setters and getters
    void set_pay_rate(int pay_rate) {
        if(pay_rate > 14) {
            this->pay_rate = pay_rate;
        } else {
            cout << "Pay rate "<< pay_rate <<" not acceptable. Not setting ... " << endl;
        }
    }

    int get_pay_rate() {
        return pay_rate;
    }
};





int main() {
    Employee a;

    // a.pay_rate = 10;   // error

    a.set_pay_rate(15);
    cout << "Current pay rate: " << a.get_pay_rate() << endl;

    a.set_pay_rate(11);
    cout << "Current pay rate: " << a.get_pay_rate() << endl;

    a.set_pay_rate(20);
    cout << "Current pay rate: " << a.get_pay_rate() << endl;

    // return 0;


    /// ---------
    

}
