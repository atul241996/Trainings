#include<iostream.h>
class base
  {
protected:
	int i, j;
public:
	void set( int a, int b)
	{
	i = a;
	j = b;
	}
	void show( )
	{
	cout << i << "  " << j << "\n";
	}
  };

class derived1 : private base
  {
private:
	int k;
public:
	void setk ()
	{
	k = i * j;
	}
	void showk( )
	{
	cout << k << "\n";
	}
};

class derived2 : private derived1
 {
private:
	int m;
public:
	void setm ( )
	{
	m = i - j;
	} // i and j private in derived1, will not compile

	void showm()
	{
	cout << m << "\n";
	}
};

int main( )
 {
   derived1 ob1;
   derived2 ob2;
   ob1.set (1, 2); // error, can’t use set( )
   ob1.show( ); //error, can’t use show( )
   ob2.set(3, 4); // error, can’t use set( )
   ob2.show(); // error, can’t use show( )
   return 0;
  }

