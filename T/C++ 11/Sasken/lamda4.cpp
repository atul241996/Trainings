#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// function to sort vector, lambda expression is for sorting in
// non-decreasing order Compiler can make out return type as
// bool, but shown here just for explanation
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

sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool
{
return a > b;
});
printVector(v);

// function to count numbers greater than or equal to 5
int count_5 = count_if(v.begin(), v.end(), [](int a)
{
return (a >= 5);
});
cout << "The number of elements greater than or equal to 5 is : "<< count_5 << endl;

}
