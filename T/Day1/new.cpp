#include <iostream>
#include <new>
using namespace std;
int main()
{
int *p;

p = new int; // allocate space for an int
if(p==NULL)
cout << "Allocation Failure\n";
else
{
*p = 100;
cout << "At " << p << " ";
cout << "is the value " << *p << "\n";
delete p;
}
return 0;
}