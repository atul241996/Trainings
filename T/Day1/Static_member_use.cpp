#include <iostream.h>
class counter_test
  {
    public:
     static int count;
     counter_test ( ) { count++; }
     ~counter_test ( ) { count--;}
   };
int counter_test::count;
void f( ); 
int main( )
 {
   counter_test ob1;
   cout << objects in existence:  “ << counter_test::count << “\n”;
   counter_test ob2;
   cout << objects in existence:  “ << counter_test::count << “\n”;
   f( ); 
   cout << objects in existence:  “ << counter_test::count << “\n”;
   return 0; }
void f( )
 {
    counter temp;
    cout << objects in existence:  “ << counter_test::count << “\n”;
    // temp is destroyed when f( ) returns
  }
