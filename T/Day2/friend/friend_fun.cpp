#include <iostream>
using namespace std;

class myclass {
int a, b;

public:

void set_ab(int i, int j)
{
a = i;
b = j;
}
friend int sum(myclass &);
};

int sum(myclass &x)
{
return x.a + x.b;
}

int main()
{
myclass n;
n.set_ab(3, 4);
cout << sum(n)<<endl;
return 0;
}