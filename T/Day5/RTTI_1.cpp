// A simple example that uses typeid.
#include <iostream>
#include <typeinfo>
using namespace std;

class myclass1 {
// ...
};
c
lass myclass2 {
// ...
};

int main()
{
int i, j;
float f;
char *p;
myclass1 ob1;
myclass2 ob2;
cout << "The type of i is: " << typeid(i).name();
cout << endl;
cout << "The type of f is: " << typeid(f).name();
cout << endl;
cout << "The type of p is: " << typeid(p).name();
cout << endl;
cout << "The type of ob1 is: " << typeid(ob1).name();
cout << endl;
cout << "The type of ob2 is: " << typeid(ob2).name();
cout << "\n\n";
return 0;
}