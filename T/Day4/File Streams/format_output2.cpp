#include <iostream>
using namespace std;
void main()
{
	cout.width(8);
cout << 15 << "\n"; // displays 15 with two leading spaces
cout << 15 << "\n"; // displays 15 with no leading spaces

cout.fill('^');
cout.width(10);
cout << 20 << "\n"; // displays ^^^^20
cout.precision(5);
cout<<122.54545454<<endl;
}