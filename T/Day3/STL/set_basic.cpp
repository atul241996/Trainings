// list.cpp -- using a list
#include <iostream>
#include <set>
#include <iterator>
#include<algorithm>
#include<string>
int main()
{
using namespace std;
const int N = 6;
string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
set<string> A(s1, s1 + N); // initialize set A using a range from array
ostream_iterator<string, char> out(cout, " ");
copy(A.begin(), A.end(), out);
}