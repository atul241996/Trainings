#include <iostream>
#include <set>
using namespace std;
int main()
{
set<int,greater<int> > coll1; // empty set container
//insert elements in random order
coll1.insert(4);
coll1.insert(3);
coll1.insert(5);
coll1.insert(1);
coll1.insert(6);
coll1.insert(2);
coll1.insert(5);
//iterate over all elements and print them
set<int,greater<int>>::iterator pos;
for (pos = coll1.begin(); pos != coll1.end(); ++pos) {
cout << *pos << ' ';
}
cout << endl;
//assign elements to another set with ascending order
set<int> coll2(coll1.begin(),coll1.end());
//print all elements of the copy
set<int>::iterator pos1;
for (pos1 = coll2.begin(); pos1 != coll2.end(); ++pos1) {
cout << *pos1 << ' ';
}//remove all elements up to element with value 3
cout<<endl;
coll2.erase(coll2.begin(), coll2.find(3));
//print all elements
for (pos1 = coll2.begin(); pos1 != coll2.end(); ++pos1) {
cout << *pos1 << ' ';
}
}