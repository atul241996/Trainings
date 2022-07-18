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


class derived : public base
 {
 private:
	 int k;
 public:
	void setk()
	{
	 k = i * j;
	 } // access to protected members
void showk( )
	{
	cout << k << "\n";
	}
	};
int main( )
  {
    derived ob;
    ob.set(1,2); //OK, known to derived
    ob.show( ); // OK, known to derived
    ob.setk( );
    ob.showk( );
    return 0;
    }
