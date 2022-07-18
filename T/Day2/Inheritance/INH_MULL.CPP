#include<iostream.h>
#include<conio.h>
class TRBase
{
public:
     TRBase( )
     {
     cout<<"constructor base"<<endl ;
     }
     ~TRBase()
     {
     cout<<"destructor base" <<endl;
     }
};

class TRDerived:public TRBase
{
public:
	TRDerived()
	{
	 cout<<"constructor derived 1"<<endl ;
	 }
	 ~TRDerived()
	 {
	  cout<<"destructor derived 1" <<endl;
	 }
};

class TRDerived2: public virtual TRBase

{

 public:
	 TRDerived2()
	 {
	 cout<<"constructor derived 2" <<endl;
	 }
	 ~TRDerived2()
	 {
	   cout<<"destructor derived 2" <<endl;
	 }
};




class TRDerived3:public TRDerived,public TRDerived2
{

	public: TRDerived3()
	{
	cout<<"constructor derived 3" <<endl;
	}

	~TRDerived3()
	{
	cout<<"destructor derived 3" <<endl;
	}
};


main()
{      clrscr();
	TRDerived3 obj2;
}



