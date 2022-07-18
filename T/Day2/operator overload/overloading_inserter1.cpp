
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
void operator <<(ostream & os)
{
os << hours << " hours, " <<minutes << " minutes"<<endl;
}
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

void main()
{
Time coding(2, 40);
Time fixing(5, 55);
Time total;
cout << "coding time = ";
coding<<cout;
cout << "fixing time = ";
fixing<<cout;
total = coding + fixing;   // operator notation
cout << "coding + fixing = ";
total<<cout;

}

