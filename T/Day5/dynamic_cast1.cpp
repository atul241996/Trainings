#include <iostream>
#include <cstdlib>
using namespace std;
class B
{
public : 
	 virtual void f1()
	 {
	 }
};
class D1 : public B
{
	int somedata,a,b,c;
public : 
	D1(){somedata=0;}
	void D1fun()
	{
		cout<<"D1 ::fun() "<<somedata<<a<<b<<c<<endl;
	}
};
class D2 : public B
{
};

int main()
{
//B *b=new B;
//D1 *d1=(D1 *)new B;
D1 *d1=dynamic_cast<D1 *>(new B);
if(d1!=NULL)
d1->D1fun();
}