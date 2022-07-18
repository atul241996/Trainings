#include <iostream>
#include <set>
using namespace std;
int main()
{
//type of the collection
multiset<int> coll; //set container for int values
/* insert elements from 1 to 6 in arbitray order
*- value 1 gets inserted twice
*/
coll.insert(3);
coll.insert(1);
coll.insert(5);
coll.insert(4);
coll.insert(1);
coll.insert(6);
coll.insert(2);
/* print all elements
*- iterate over all elements
*/
multiset<int>::iterator pos;
for (pos = coll.begin(); pos != coll.end(); ++pos)
{
cout << *pos << ' ';
}
cout <<endl;
}