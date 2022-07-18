#include<iostream.h>
#include<conio.h>
class base
{
private :
	int i;
	int j;

public :
	void set(int a,int b)
	{
	i=a;
	j=b;
	}
	void show()
	{
	cout<< i << "     " <<j <<endl;
	}
	};

class derived : private base
	{
	int k;

public :
	derived(int x)
	{
	k=x;
	}

	void showk()
	{
	cout << "k in derived class" << k << endl;
	}
	 };

	 void main()
	 {
	 base b1;
	 derived d1(100);
	 b1.set(100,200);
	 b1.show();
	d1.set(123,345);
	d1.show();
	 d1.showk();

	 }