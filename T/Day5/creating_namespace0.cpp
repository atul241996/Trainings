#include <iostream>
#include<vector>
using namespace std;
//using namespace std;
namespace mynamespace {
void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	std::cout<<"MY NAMESPACE swap"<<std::endl;
}
}
using namespace mynamespace;
int main()
{

	
	int x=10,y=20;
	swap(x,y);
	
	swap(x,y);
}