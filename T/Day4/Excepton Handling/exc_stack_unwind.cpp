#include <iostream>
using namespace std;

class  X
{
public :
	X()
	{
		cout<<"con"<<endl;
	}

	~X()
	{
		cout<<"des"<<endl;
	}
};
void fun2()
{
X ob1;
throw 1;
}
void fun1()
{
	X ob;
	fun2();
}

int main()
{
cout << "Start\n";
try { // start a try block
cout << "Inside try block\n";
fun1();
}
catch (...) { // catch an error
cout << "Caught an exception -- value is: ";
//cout << i << "\n";
}
cout << "End";
return 0;
}