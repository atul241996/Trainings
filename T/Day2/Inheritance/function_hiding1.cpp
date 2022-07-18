
#include <iostream>
using namespace std;
class X
{
public:
	void fun1()
	{
		cout << "in fun1" << endl;
	}

	void fun2()
	{
		cout << "in fun2" << endl;
	}
};

class Y : public X
{
	using X::fun1;
public:
	void fun3()
	{
		cout << "in fun3" << endl;
	}
};

class Z : public Y
{
	public:
		using Y::fun1;

	void fun4()
	{
		cout << "in fun4" << endl;
	}
};

void main()
{
	Y ob;
	ob.fun1();
	ob.fun2();
	ob.fun3();

}