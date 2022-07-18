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

private:
  //variable to store the instance of singleton
  static aSingletonClass *instance_;
  //default constructor should be private to prevent instantiation
  aSingletonClass() {};
  //destructor should be made private so no one can delete this accidently
  ~aSingletonClass() {};
  //We also need to prevent copy being created of the object
  aSingletonClass(const aSingletonClass&);
}; //mandatory or else error in compiling


aSingletonClass* aSingletonClass::instance_ = NULL;

int main()
{
  aSingletonClass *someVar1 = NULL;
 aSingletonClass *someVar2 = NULL;
 aSingletonClass *someVar3 = NULL;
//aSingletonClass someobj;
  //Create Instance
  someVar1 = aSingletonClass::getInstance();
cout<<long(someVar1)<<endl;  
	someVar2 = aSingletonClass::getInstance();
cout<<long(someVar2)<<endl;  
 someVar3 = aSingletonClass::getInstance();
 cout<<long(someVar3)<<endl;  
  //delete the Singleton class
  aSingletonClass::deleteInstance();

  return 0;
}
