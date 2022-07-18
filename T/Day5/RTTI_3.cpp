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
// Demonstrate typeid with a reference parameter.
void WhatMammal(Mammal &ob)
{
cout << "ob is referencing an object of type ";
cout << typeid(ob).name() << endl;
}
int main()
{
Mammal AnyMammal;
Cat cat;
Platypus platypus;
WhatMammal(AnyMammal);
WhatMammal(cat);
WhatMammal(platypus);
return 0;
}