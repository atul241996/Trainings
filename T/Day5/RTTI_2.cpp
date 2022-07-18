#include <iostream>
#include <typeinfo>
using namespace std;
class Mammal {
public:
virtual bool lays_eggs() { return false; }// Mammal is polymorphic
// ...
};
class Cat: public Mammal {
public:
// ...
};
class Platypus: public Mammal {
public:
bool lays_eggs() { return true; }
// ...
};
int main()
{
Mammal *p, AnyMammal;
Cat cat;
Platypus platypus;
p = &AnyMammal;
cout << "p is pointing to an object of type ";
cout << typeid(*p).name() << endl;
p = &cat;
cout << "p is pointing to an object of type ";
cout << typeid(*p).name() << endl;
p = &platypus;
cout << "p is pointing to an object of type ";
cout << typeid(*p).name() << endl;
return 0;
}