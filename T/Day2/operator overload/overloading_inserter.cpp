
#include <iostream>
using namespace std;
class Time
{
private:
int hours;
int minutes;
public:
Time();
Time(int h, int m = 0);
Time operator+(const Time & t);
friend void operator<<(ostream &, const Time &);
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
Time Time::operator+(const Time &t)
{
Time sum;
sum.minutes = minutes + t.minutes;
sum.hours = hours + t.hours + sum.minutes / 60;
sum.minutes %= 60;
return sum;
}
void operator <<(ostream & os, const Time & t)
{
os << t.hours << " hours, " << t.minutes << " minutes"<<endl;
}

void main()
{
Time coding(2, 40);
Time fixing(5, 55);
Time total;
cout << "coding time = ";
cout<<coding;
cout << "fixing time = ";
cout<< fixing;
total = coding + fixing;   // operator notation
cout << "coding + fixing = ";
cout<<total;

}

