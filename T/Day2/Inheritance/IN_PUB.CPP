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

	class derived : public base
	{
	int k;

public :
	void setk(int x)
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
	 derived d1;
	 d1.set(123,345);
	 d1.show();
	 d1.setk(234);
	 d1.showk();

	 }