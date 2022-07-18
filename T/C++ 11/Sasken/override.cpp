#include<iostream>
using namespace std;
class B 
{
public:
virtual void f(int) {std::cout << "B::f" << std::endl;}
};
class D:public B
{
public:
virtual void f(int) override final {std::cout << "D::f" << std::endl;}
};

class D1:public D
{
public:
virtual void f(int) override {std::cout << "D1::f" << std::endl;}
};

int main()
{
D d;
d.f(10);
B *p;
p=&d;
p->f(10);
D1 d1;
p=&d1;
p->f(100);
}
