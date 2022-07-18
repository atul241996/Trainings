#include <iostream>
#include<vector>
//using namespace std;
namespace myspace {
class vector {
int count;
public:
vector(int n) {
	cout<<"my vector in myspace"<<endl;
	count = n;
}
void show() 
{
cout<<"Hello vector "<<count<<endl;
}
};
}
using namespace myspace;
int main()
{
	
	myspace::vector v(5);
	v.show();
}