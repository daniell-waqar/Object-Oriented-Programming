#include<iostream>

using namespace std;

class flight{

	int flight_num;
	string destination;
	float distance;
	float fuel;
	float calFuel()

	{
		if(distance<=1000)
		{
			return 500;
		}
		else if(distance>1000 && distance <=2000)
		{
			return 1100;
		}
		else if (distance>2000)
		{
			return 2200;
		}
	}
	public:

		flight();
		void feedInfo(int,string,float);
		void showInfo();
};

flight::flight()
{
	flight_num=0;
	destination="";
	distance=0.0;
	fuel=0.0;
}
void flight::feedInfo(int FN,string D,float s)
{
	flight_num=FN;
	destination=D;
	distance=s;
	fuel=calFuel();
}

void flight::showInfo()
{
	cout << "_________________________________\n"<< endl;
    
    cout<<"Flight number is : "<<flight_num<<endl;
	cout<<"Destination is : "<<destination<<endl;
	cout<<"Distance is : "<<distance<<" KM"<<endl;
	cout<<"Fuel are : "<<calFuel()<<endl;
}


int main()
{
	flight f;
	int FN;
	string des;
	float s;
	cout<<"Enter flight number : ";
	cin>>FN;
	cout<<"Enter destination : ";
	cin>>des;
	cout<<"Enter distance : ";
	cin>>s;
	f.feedInfo(FN,des,s);
	f.showInfo();
	return 0;

  
}


