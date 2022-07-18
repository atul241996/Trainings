
#include <iostream>
 
using namespace std;
 
class classA
{
  public:
    int valueX;
    int valueY;
 
    classA() { valueX = 0; valueY = 0;}
 
};
 
int main()
{
  classA *a = new classA();
  a->valueX = 10;
  a->valueY = 30;
  cout << "Value of X = " << a->valueX << " Value of Y = "  << a->valueY << endl;
 
  void *aClassVoid = reinterpret_cast<void*>(a);
 
  a = reinterpret_cast<classA*>(aClassVoid);
 
  cout << "Value of X = " << a->valueX << " Value of Y = "  << a->valueY << endl;
 
  aClassVoid = reinterpret_cast<void*>(a);

  classA *AP = reinterpret_cast<classA*>(aClassVoid);
 
  cout << "COME BACK To me !! Value of X = " << AP->valueX << " Value of Y = "  << AP->valueY << endl;
 
   return 0;
}