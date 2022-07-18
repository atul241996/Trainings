#include<iostream>
#include <memory>
using namespace std;
class myclass
{
	int a,b;

public :
		myclass(int m,int n)
		{
			a=m;
			b=n;
		}
	
	
		void setData(int m, int n)
		{
			a=m;
			b=n;
		
		}
		void show()
		{
			cout<<a<<" "<<b<<endl;
		}
};




void main()
{
	myclass ob1(22,33);
	myclass ob2=ob1;
	cout<<"ob1 data "<<endl;
	ob1.show();
	cout<<"ob2 data "<<endl;
	ob2.show();
	cout<<"=============================="<<endl;
	ob1.setData(101,202);
	cout<<"ob1 data "<<endl;
	ob1.show();
	cout<<"ob2 data "<<endl;
	ob2.show();

}