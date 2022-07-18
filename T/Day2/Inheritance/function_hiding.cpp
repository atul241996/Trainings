
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
public:
	void fun2() = delete;
	void fun3()
	{
		cout << "in fun3" << endl;
	}
};


void main()
{
	Y ob;
	ob.fun1();
	//ob.fun2();
	ob.fun3();
}