#include <iostream>
#include<vector>
using namespace std;
namespace myspace {
template <class T>
class vector {
T count;
public:
	vector(T n) {
	cout<<"my vector in myspace"<<endl;
	count = n;
}
void show() 
{
cout<<"Hello vector "<<count<<endl;
}
};
}
//using namespace myspace;
int main()
{
	
	vector<int> v(5);
}