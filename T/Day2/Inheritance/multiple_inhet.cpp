#include <iostream>
#include <new>
#include <cstring>
using namespace std;
class A 
{
int x,y;
public:
void set() 
{
cout<<"class A set functions"<<endl;
}
};

class B 
{
int a,b;

public:
void set() 
{
cout<<"class B set functions"<<endl;
}
};



class C : public A , public B
{
	int z;
public  : 
	void show()
	{
		cout<<"show"<<endl;
	}
};

void main()
{
	C ob;
	ob.set();
}

