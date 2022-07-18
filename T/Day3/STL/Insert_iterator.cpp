// Demonstrate insert_iterator.
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
vector<int> v;
vector<int>::iterator itr;
int i;
for(i=0; i<5; i++)
v.push_back(i);
cout << "Original array: ";
itr = v.begin();
while(itr != v.end())
cout << *itr++ << " ";
cout << endl;
itr = v.begin();
itr += 2; // point to element 2
// create insert_iterator to element 2
insert_iterator<vector<int> > i_itr(v, itr);
// insert rather than overwrite
*i_itr++ = 100;
*i_itr++ = 200;
cout << "Array after insertion: ";
itr = v.begin();
while(itr != v.end())
cout << *itr++ << " ";
return 0;
}