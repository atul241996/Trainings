#include<iostream>
using namespace std;
class temp
{
	int x,y;
public :
	temp(int m,int n)
	{
		x=m;
		y=n;
	}
	void show()
	{
		cout<<"x and y values are "<<x<<" "<<y<<endl;
	}
friend temp operator +(int,temp &);
};

temp operator +(int a, temp &ob)
{
int n1=ob.x+a;
int n2=ob.y+a;
temp xx(n1,n2);
return xx;
}


void main()
{
temp ob1(10,20),ob2(0,0);
cout<<"before adding"<<endl;
ob1.show();
ob2.show();
ob2=3+ob1;
cout<<"after adding"<<endl;
ob1.show();
ob2.show();
}