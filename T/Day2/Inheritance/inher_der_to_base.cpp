#include<iostream>
using namespace std;
class B
{
protected :
int a;
public :
	B(int p)
	{
		a=p;
		cout<<"Base class B constructor "<<endl;
	}
	void show()
	{
		cout<<"value of a is "<<a<<endl;
	}
};

class D1 : public B
{
protected: 
	int x,y;
public :
	D1(int m,int n,int o) :B(o)
	{
		x=m;
		y=n;
		cout<<"Derived class D1 constructor "<<endl;
	}
	
};




void main()
{
D1 o(10,20,100);
o.show();
}