// constcast.cpp -- using const_cast<>
#include <iostream>
using namespace std;

class B
{
};
class D : public B
{
};
class C
{
};

int main()
{
B ob1,*p1;
D ob2,*p2;
C ob3,*p3;

p1=static_cast<B *>(&ob2);
//p1=static_cast<B *>(&ob3);
}