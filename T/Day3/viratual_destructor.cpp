#include <iostream>
using namespace std;
class Base
{
   	public:
      	Base(){ cout<<"Constructing Base"<<endl;}
      	
     // this is a destructor:
	~Base(){ cout<<"Destroying Base"<<endl;}
};

class Derive: public Base
{
        public:
       	Derive(){ cout<<"Constructing Derive"<<endl;}
       	
       	~Derive(){ cout<<"Destroying Derive"<<endl;}
 };

void main()
{
    	Base *basePtr = new Derive;
        
        delete basePtr;
}