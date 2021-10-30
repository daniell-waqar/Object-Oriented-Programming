#include <iostream>
using namespace std;

void input(int A[][3])
{
    for(int i = 0;i < 3; i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout << "arr["<<i<<"]" << "["<<j<<"] = ";
            cin>> A[i][j];
        }
    }
}

void display(int A[][3])
{
    for(int i = 0;i<3; ++i)
    {
        for(int j = 0;j<3; ++j)
        {
            cout << A[i][j] <<" ";
        }
        cout << endl;
    } 
}

int sum(int A[3][3])
{
    int s = 0;
    for(int i = 0;i<3; ++i)
    {
        for(int j = 0;j<3; ++j)
        {
            s += A[i][j];
        }
         
    } 

    cout << "Sum of all elements in matrix : " << s <<endl;
}


int sum_row(int A[3][3])
{   
    
    for(int i = 0;i<3; ++i)
    {  
        int rsum = 0;
        for(int j = 0;j<3; ++j)
        {
            rsum += A[i][j];
            
        }

        cout << "Sum of Row " << i+1 << ": " << rsum<<endl;

    }
}
int sum_col(int A[3][3])
{   
    
    for(int i = 0;i<3; ++i)
    {  
        int csum = 0;
        for(int j = 0;j<3; ++j)
        {   
            csum += A[j][i];
            
        }

        cout << "Sum of Column " << i+1 << ": " << csum<<endl;
    }
}

int transpose(int A[3][3])
{
    for(int i = 0;i<3; ++i)
    {
        for(int j = 0;j<3; ++j)
        {
            cout << A[j][i] <<" ";
        }
        cout << endl;
    } 
}
int main()
{

    //int A[3][3];
   //input( A);
   //display(A);
    //sum(A);
    //sum_row(A);
    //sum_col(A);
   // transpose(A);
   while(1)
   {

    int A[3][3];
     string ch,choice;
     cout<<"press 'a' for to take elements as input\npress 'b' for display\npress 'c' for sum of matrix \npress 'd' sum of row elements\npress 'e' for sum of column elements\npress 'f' for transpose of matrix\n";
     cin>>ch;
     if(ch=="a")
     input(A);
    else if (ch=="b")
    display(A);
    else if (ch=="c")
    sum(A);
    else if (ch=="d")
    sum_row(A);
    else if (ch=="e")
    sum_col(A);
    else if (ch=="f")
    transpose(A);
    cout<<"Continue (y/n)  ";
    cin>>choice;
    if(choice=="n")
    {
        break;
    }

    }
    return 0;
}



