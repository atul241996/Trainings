#include<iostream.h>
class base
{
public:
	base()
	{
	cout << "Constructing base\n";
	}

	~base()
	{
	cout << "Destructing base\n";
	}
	};

class derived : public base
{
public:
	derived( )
	{
	cout << "Constructing derived\n";
	}

	~derived( )
	{
	cout << "Destructing derived\n";
	}
};

class derived1 : public derived
{
public:
	derived1( )
	{
	cout << "Constructing derived1\n";
	}

	~derived1( )
	{
	cout << "Destructing derived1\n";
	}
};


int main( )
{
     derived1 ob;  // do nothing but construct and destruct ob
      return 0;
}
