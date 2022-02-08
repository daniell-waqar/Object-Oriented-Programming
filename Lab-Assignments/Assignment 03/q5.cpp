#include<iostream>
using namespace std;

class time{
	private:
	
	int hours;
	int minutes;
	public:
		time();
		void settime(int , int );
		void showtime();
		time sum(time);
};
time::time()
{
	hours=0;
	minutes=0;
}
void time::settime(int h, int m)
{
	hours=h;
	minutes=m;
}

void time::showtime()
{
	cout<<hours<<" : "<<minutes<<endl;
}
time time::sum(time t)
{
	time T;
	T.hours= hours + t.hours;
	T.minutes=minutes + t.minutes;
	return T;
}

int main()
{
	time t1;
	time t2;
	time t3;
	t1.settime(3,54);
	t2.settime(1,23);
	t3=t1.sum(t2);
	t3.showtime();
	return 0;
}

