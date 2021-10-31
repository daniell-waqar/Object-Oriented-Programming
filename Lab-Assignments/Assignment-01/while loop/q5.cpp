#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    char opr;

    while(1)
    {

        cout << "Enter first number\t";
        cin>>n1;

        cout << "Enter second number\t";
        cin>>n2;

        cout << "Enter the operator (+,-,*,/,%)\t";
        cin>>opr;

    
        if(opr == '+')
        {
            cout<< n1 << " + " << n2 << " = "  << n1 + n2 <<"\n";
        }
        else if (opr == '-')
        {  
            cout<< n1 << " - " << n2 << " = "<< n1 - n2 <<"\n";
        }
        else if (opr == '*')
        { 
            cout<< n1 << " * " << n2 << " = " << n1 * n2 <<"\n";
        }
        else if (opr == '/')
        {
            cout<< n1 << " / " << n2 << " = " << n1 / n2 <<"\n";
        }
        else if (opr == '%')
        {
            cout<< n1 << " % " << n2 << " = " << n1 % n2 <<"\n";
        }
        else
        {
            cout << "Invalid inputs!\n";
        }

        
        char ch;

        cout<<"\nDo you want to do another calculation(y/n)?";
        cin>>ch;

        if (ch =='y')
        {
            continue;
        }
            
        
        else if(ch =='n')
        {
            break;
        }
            
         
    }

    cout << "=== Exit while loop!=== " <<endl;
    return 0;
        
}