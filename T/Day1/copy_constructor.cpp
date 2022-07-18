#include<iostream>
#include <memory>
using namespace std;
class myclass
{
	int a,b;
	char *p;
public :
		myclass(int m,int n,char *str)
		{
			a=m;
			b=n;
			p=(char *)malloc(100);
			strcpy(p,str);
		}
	
	
		void setData(int m, int n,char *str)
		{
			a=m;
			b=n;
			strcpy(p,str);
		}
		void show()
		{
			cout<<a<<" "<<b<<" "<<p<<endl;
		}
};




void main()
{
	myclass ob1(222,333,"SOME DATA");
	myclass ob2(ob1);
	cout<<"ob1 data "<<endl;
	ob1.show();
	cout<<"ob2 data "<<endl;
	ob2.show();
	ob1.setData(101,202,"SOME NEW DATA");
	cout<<"ob1 data "<<endl;
	ob1.show();
	cout<<"ob2 data "<<endl;
	ob2.show();

}