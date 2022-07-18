// Using a structure to define a class.
#include <iostream>
#include <cstring>
using namespace std;

struct mystruct 
{
int a,b;

void set(int m,int n)
{
a=m;
b=n;
}

void show()
{
cout << a << b<<endl;
}
} ;

int main()
{
mystruct ob1;
ob1.set(10,20);
ob1.show();
ob1.a=200;
ob1.b=300;
ob1.show();
return 0;
}