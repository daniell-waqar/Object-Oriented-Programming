

#include <iostream>
using namespace std;



class BOOK
{
    private:
            int bookno;
            char booktitle[20];
            float bookprice;

            float TOTAL_COST(int N)
            {
                return (N*bookprice);
            }
    public:
        void INPUT()
        {
            cout<<"Enter Book No ";
            cin>>bookno;
            cout<<"Enter Book Title ";
            cin>>booktitle;
            cout<<"Enter Book Price ";
            cin>>bookprice;
        }
        void PURCHASE()
        {
            int n;
            cout<<"Enter No of Copies ";
            cin>>n;
            cout<<"Total cost is "<<TOTAL_COST(n)<<endl;
        }
};

int main()
{
    BOOK b1;
    
    b1.INPUT();
    b1.PURCHASE();

    return 0;
}