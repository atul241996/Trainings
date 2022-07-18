
#include <windows.h>
#include <process.h>
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
  void printSomething(char *name, int count)
  {
    std::cout << name << " loop " << count << std::endl;
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

}; 
aSingletonClass* aSingletonClass::instance_ = NULL;

void Func1(void *);
void Func2(void *);

int main()
{
  HANDLE hThreads[2];

  aSingletonClass *someVar = NULL;
  //Create Instance
  someVar = aSingletonClass::getInstance();

  //Create two threads and start them
  hThreads[0] = (HANDLE)_beginthread(Func1, 0, NULL);
  hThreads[1] = (HANDLE)_beginthread(Func2, 0, NULL);

  //Makes sure that both the threads have finished before going further
  WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);

  cout << "Main exit" << endl;
  return 0;
}

void Func1(void *P)
{
  int Count;

  for (Count = 1; Count < 11; Count++)
  {
    aSingletonClass::getInstance()->printSomething("Func1", Count);
	for(int i=0;i<1000;i++)
			for(int j=0;j<1000;j++);

  }
  return;
}

void Func2(void *P)
{
  int Count;

  for (Count = 10; Count > 0; Count--)
  {
    aSingletonClass::getInstance()->printSomething("Func2", Count);
  for(int i=0;i<1000;i++)
			for(int j=0;j<1000;j++);
  }
  return;
}