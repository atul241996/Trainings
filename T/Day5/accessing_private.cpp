#include<iostream>
#include <memory>
using namespace std;
class myclass
{
	int a,b;
public :
		void set(int m,int n)
		{
			a=m;
			b=n;
		}
		void show()
		{
			cout<<a<<" "<<b<<endl;
		}
};

struct mystruct
{
	int a,b;
};

void main()
{
	myclass ob;
	ob.set(22,33);
	ob.show();
	mystruct *p;
	p=(mystruct *)&ob;
	p->a=99;
	p->b=199;
	ob.show();
}