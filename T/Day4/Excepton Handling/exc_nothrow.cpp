#include<iostream>

using namespace std;

int main()
{
  try
  {
    char* p = new char[0x7fffffff];
    if (!p)
    {
      cout<<"Memory allocation for q failed. NULL returned."<<endl;
    }
  }
  catch(...)
  {
    cout<<"Exception caught by ..."<<endl;
  }

  char* q = new (std::nothrow) char[0x7fffffff];
  if (!q)
  {
    cout<<"Memory allocation for q failed. NULL returned."<<endl;
  }

  return 0;
}