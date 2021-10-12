#include <iostream>
using namespace std;

int main()
{
    float salary;
    
    cout << "Enter salary : ";
    cin>>salary;                     // Salary input from the user.

        // Conditions for the deduction rules.

    if(salary < 10000)
    {
        
        cout<<"No deduction Fund " << "Salary is : " << salary - 0 <<endl;
    }
    else if (salary >= 10000 && salary < 20000)
    {   
        
        cout<<"sallary is "<<salary<<" so the deduction of RS 1000 is decucted as fund new sallary is: "<<salary-1000<<endl;
        
    }
    else if (salary >= 20000)
    {   
        
        cout<<"sallary is "<<salary<<" so the deduction of 7% is decucted as fund new sallary is: "<<salary*0.7<<endl;
       
    }

    return 0;
    
}