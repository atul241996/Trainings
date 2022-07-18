#include<iostream>
using namespace std;
class B
{
protected :
int x;
public :
	B()
	{
		cout<<"Base class B constructor "<<endl;
	}
	~B()
	{
		cout<<"Base class B destructor "<<endl;
	}
};

class D1 : public B
{
protected: 
	int y;
public :
	D1()
	{
		cout<<"Derived class D1 constructor "<<endl;
	}
	~D1()
	{
		cout<<"Derived class D1 destructor "<<endl;
	}
};

class D2 :  public B
{

protected :
	int z;
public :
	D2()
	{
		cout<<"Derived class D2 constructor "<<endl;
	}
	~D2()
	{
		cout<<"Derived class D2 destructor "<<endl;
	}
};

class D3 : public D1, public D2
{

protected :
	int m;
public :
	D3()
	{
		cout<<"Derived class D3 constructor "<<endl;
	}
	~D3()
	{
		cout<<"Derived class D3 destructor "<<endl;
	}
};



void main()
{
D3 o;
}