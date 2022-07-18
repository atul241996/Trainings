#include <iostream>
#include <new>
using namespace std;
int main()
{
int *p, i;
p = new int [10]; // allocate 10 integer array
if(p==NULL)
cout << "Allocation Failure\n";
for(i=0; i<10; i++ )
*(p+i) = i;
for(i=0; i<10; i++)
cout << *(p+i) << " ";
delete [] p; // release the array
return 0;
}