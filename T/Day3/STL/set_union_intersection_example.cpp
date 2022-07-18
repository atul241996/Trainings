#include <set>
#include <algorithm>
#include <iterator>
#include<string>
#include<iostream>
int main()
{
using namespace std;
const int N = 6;
string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
string s2[N] = {"metal", "any", "food", "elegant", "deliver","for"};
set<string> A(s1, s1 + N);
set<string> B(s2, s2 + N);
ostream_iterator<string> out(cout, " ");
cout << "Set A: ";
copy(A.begin(), A.end(), out);
cout << endl;
cout << "Set B: ";
copy(B.begin(), B.end(), out);
cout << endl;
cout << "Union of A and B:\n";
set_union(A.begin(), A.end(), B.begin(), B.end(), out);
cout << endl;
cout << "Intersection of A and B:\n";
set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
cout << endl;
cout << "Difference of A and B:\n";
set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
cout << endl;
return 0;
}