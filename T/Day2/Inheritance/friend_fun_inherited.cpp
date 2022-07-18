#include<iostream>

using namespace std;
class fps
 {
 private:
    int f;
    
 public:
   void setf(int x)
   {
	   f=x;
   }
friend void fun( );
};



class mks : public fps
  {
  private:
     int m;
     
public:
  void setm(int p)
  {
	  m=p;
  }
 };

void fun( )
 {
  mks o;
  o.m=20;
 }


 int main()
 {
 fun();
 return 0;
 }