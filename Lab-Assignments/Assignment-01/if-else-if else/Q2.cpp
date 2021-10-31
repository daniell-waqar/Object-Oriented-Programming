/* Take value of temperature from user and find status of weather accordingly.*/

#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter the temperature : ";
    cin >> temp;

    if(temp < 0)

        cout << "Freezing weather" << endl;

    else if(temp >= 0 && temp < 10)

        cout << "Very cold weather" << endl;

    else if(temp >= 10 && temp < 20)

        cout << "Cold weather" << endl;

    else if(temp >= 20 && temp < 30)

        cout << "Normal temperature" << endl;
    
    else if(temp >= 30 && temp < 40)

        cout << "Its Hot" << endl;

    else if(temp >= 40)

        cout << "Its very Hot" << endl;

    return 0;
}