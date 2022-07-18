#include <iostream>
#include <new>
using namespace std;
int main()
{

p = new int (87); // initialize to 87
if(p==NULL)
cout << "Allocation Failure\n";
else
{
cout << "At " << p << " ";
cout << "is the value " << *p << "\n";
delete p;
}
return 0;
}