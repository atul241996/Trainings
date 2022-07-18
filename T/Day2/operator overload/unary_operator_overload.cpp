#include<iostream>
using namespace std;

class unary
{
	int x,y;
public :
	unary(int m,int n)
	{
		x=m;
		y=n;
	}
	void show()
	{
		cout<<"x and y values are "<<x<<" "<<y<<endl;
	}
unary operator ++();
unary operator ++(int);
};

unary unary :: operator ++()
{
x++;
y++;
unary xx(x,y);
return xx;
}

unary unary :: operator ++(int)
{
unary xx(x,y);
x++;
y++;
return xx;
}
void main()
{
unary ob1(10,20),ob2(0,0);
cout<<"before increamenting"<<endl;
ob1.show();
ob2.show();
ob2=ob1++;
cout<<"after increamenting"<<endl;
ob1.show();
ob2.show();
}