#include<iostream.h>

class base
{
private:
	int i;
public:
	void set_i( int num)
	{
	i = num;
	}
	int get_i( )
	{
	return i;
	}
};

class derived : public base
{
private:
	int j;
public:
	void set_j( int num)
	{
	j = num;
	}
	int get_j( )
	{
	return j;
	}
};

int main( )
 { base *bp,b;
   derived d,*dp;
   bp = &d; // base pointer points to derived object
   bp->set_i(100); //access inherited members from derived object
   cout << bp->get_i( ) << " ";
   dp->set_j(22); //ERROR
  cout << dp->get_j( ); // ERROR
  return 0; }
