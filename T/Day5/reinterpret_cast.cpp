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
B *ob1;
D *ob2;
C *ob3;
ob1=reinterpret_cast<B *>(ob2);
ob1=reinterpret_cast<B *>(ob3);
}