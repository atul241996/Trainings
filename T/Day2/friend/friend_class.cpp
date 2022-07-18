#include<iostream>
using namespace std;

class A
{
private:
int X;
void setx(int p)
{
X=p;
}
void disx()
{
cout<<X;
}
friend class B;
};


class B
{
private:
int Y;
public:
void setxy()
{
A obj;
Obj.setx(10);//accessing private data of class A
Obj.disx();
obj.X=99;
Obj.disx();

}
};

void main()
{
B myobj;
myobj.setxy();
}