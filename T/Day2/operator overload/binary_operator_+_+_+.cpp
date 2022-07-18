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
temp operator +(temp &);
};
temp temp :: operator +(temp &ob)
{
int n1=x+ob.x;
int n2=y+ob.y;
temp xx(n1,n2);
return xx;
}


void main()
{
temp ob1(10,20),ob2(0,0),ob3(1,2),ob4(100,200);
cout<<"before adding"<<endl;
ob1.show();
ob3.show();
ob2.show();
ob2=ob3+ob1+ob4;
cout<<"after adding"<<endl;
ob1.show();
ob3.show();
ob2.show();
}