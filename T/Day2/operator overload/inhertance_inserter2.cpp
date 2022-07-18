
#include <iostream>
using namespace std;
class Time
{
protected:
int hours;
int minutes;
public:
Time();
Time(int h, int m = 0);
virtual void print()
{
cout << hours << " hours, " << minutes << " minutes"<<endl;
}
friend void operator<<(ostream &,  Time &);
};

Time::Time()
{
hours = minutes = 0;
}
Time::Time(int h, int m )
{
hours = h;
minutes = m;
}

class DTime: public Time
{
	int days;

public: 
	DTime(int d, int hr, int min): Time(hr, min)
	{
		days=d;
	}
	void print()
	{
cout << days<<" days, "<<hours << " hours, " << minutes << " minutes"<<endl;
	}
//friend void operator<<(ostream &, const DTime &);

};

void operator <<(ostream & os,  Time & t)
{
t.print();

}
//void operator <<(ostream & os, const DTime & t)
//{
//os << t.days<<" days, "<<t.hours << " hours, " << t.minutes << " minutes"<<endl;
//}

void main()
{
Time t1(2, 40);
DTime t2(1, 5,55);
Time &r =t2;
cout<<t1;
cout<<t2;
cout<<r;

}

