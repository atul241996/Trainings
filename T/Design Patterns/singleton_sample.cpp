#include <iostream>
using namespace std;

class aSingletonClass
{
public:
  //method to get Instance of class
  static aSingletonClass *getInstance( void )
  {
    //Note that the class is only created when this method is called first time
    if(!instance_)
      instance_ = new aSingletonClass;
    return instance_;
  }
  //method to delete Instance of class
  static void deleteInstance( void )
  {
    if(instance_)
      delete instance_;
    instance_ = NULL; //important as this can create dead reference problems
  }
void show()
  {
	cout<<a<<"  "<<b<<"   "<<c<<endl;
  }
private:
  //variable to store the instance of singleton
  static aSingletonClass *instance_;
  //default constructor should be private to prevent instantiation
  aSingletonClass() {
    a=0;
  b=0;
  c=0;
  cout<<"constructor"<<endl;
  };
  
  //destructor should be made private so no one can delete this accidently
  ~aSingletonClass() {
  cout<<"destroctor"<<endl;
  };
  //We also need to prevent copy being created of the object
  aSingletonClass(const aSingletonClass &);
  int a,b,c;
}; //mandatory or else error in compiling


aSingletonClass * aSingletonClass::instance_ = NULL;

int main()
{
  aSingletonClass *ptr1,*ptr2,*ptr3;
  ptr1=aSingletonClass::getInstance();
  ptr1->show();
  cout<<"address ptr1 = "<<long(ptr1)<<endl;
ptr2=aSingletonClass::getInstance();
 cout<<"address ptr2 = "<<long(ptr2)<<endl;
 ptr2->show();
 ptr3=aSingletonClass::getInstance();
  cout<<"address ptr3 = "<<long(ptr3)<<endl;
  ptr3->show();
 aSingletonClass::deleteInstance();

 
 return 0;
}
