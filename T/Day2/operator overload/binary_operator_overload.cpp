#include<iostream>
using namespace std;
class test; //forward declarations
class temp
{
	int x,y;
public :
	temp(int m,int n)
	{
		x=m;
		y=n;
	}
	void show()
	{
		cout<<"x and y values are "<<x<<" "<<y<<endl;
	}
temp operator +(test &);
};

class test
{
public :
	int a,b;

	test(int c,int d)
	{
		a=c;
		b=d;
	}
	void show()
	{
		cout<<"a and b values are "<<a<<" "<<b<<endl;
	}
};

temp temp :: operator +(test &ob)
{
int n1=x+ob.a;
int n2=y+ob.b;
temp xx(n1,n2);
return xx;
}


void main()
{
temp ob1(10,20),ob2(0,0);
test ob3(15,25);
cout<<"before adding"<<endl;
ob1.show();
ob3.show();
ob2.show();
ob2=ob3+ob1;
cout<<"after adding"<<endl;
ob1.show();
ob3.show();
ob2.show();
}