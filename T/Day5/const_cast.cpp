// Demonstrate const_cast.
#include <iostream>
using namespace std;
void sqrval(const int *val)
{
int *p;
//p=val;
// cast away const-ness.
//p = const_cast<int *> (val);
*p = *val * *val; // now, modify object through v
}
int main()
{
int x = 10;
cout << "x before call: " << x << endl;
sqrval(&x);
cout << "x after call: " << x << endl;
return 0;
}