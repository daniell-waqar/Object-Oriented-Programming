#include <iostream>
using namespace std;
void pyramidPattern(int n){
    for(int i=1; i<= n; i++){
        for(int j=1; i>= j; j++){
        cout<<"*";
   }

    cout<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter number of stars"<<endl;
    cin>>num;
    pyramidPattern(num);
    cout<<endl;
    return 0;
}
