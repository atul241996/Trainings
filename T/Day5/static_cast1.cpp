#include <iostream>
using namespace std;
class B
{
};
class D1 : public B
{
};
class D2 : public B
{
};

int main()
{
D1 *b=new D1;
D1 *d1=static_cast<D2 *>(b);
}