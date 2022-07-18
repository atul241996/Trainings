#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
// Function to print vector
void printVector(vector<int> v)
{
  // lambda expression to print vector
for_each(v.begin(), v.end(), [](int i)
	{
	std::cout << i << " ";
	});
	cout << endl;
}
int main()
{
vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
printVector(v);
//below snippet find first number greater than 4
//find_if searches for an element for which
//function(third argument) returns true
vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i)
	{
	return i > 4;
	});
cout << "First number greater than 4 is : " << *p << endl;
printVector(v);
}
