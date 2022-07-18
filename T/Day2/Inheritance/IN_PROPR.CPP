#include<iostream.h>

class base
{
protected:
	int i, j;
public:
	void setij( int a, int b)
	{
	i = a;
	j = b;
	}

void showij()
	{
    cout << i << "  " << j << "\n";
	}
	};

class derived : protected base
	{
private:
     int k;
public:

	void setk()
	{
	setij(10,12);
	k = i * j;
	}

	void showall( )
	{
	cout << k << "\n";
	showij( );
	}
};

int main( )
 {
   derived ob;
  // ob.setij(); // illegal, setij( ) is protected member of derived
   ob.setk( ); // OK, public member of derived
   ob.showall( ); // ok, public member of derived
  // ob.showij( ); illegal, showij( ) is protected member of derived
    return 0;
  }
