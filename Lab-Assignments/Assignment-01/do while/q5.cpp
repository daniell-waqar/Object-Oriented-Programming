#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    char opr;

    do
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

        
        string ch;

        cout<<"\nDo you want to do another calculation(yes/no)?";
        cin>>ch;

        if (ch =="yes")
        {
            continue;
        }
            
        
        else if(ch =="no")
        {
            break;
        }
            
         
    }

    while(1);

    cout << "=== Exit while loop!=== " <<endl;
    return 0;
        
}