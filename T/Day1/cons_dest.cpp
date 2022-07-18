#include <iostream>
using namespace std;
class myclass {
public:
int who;
myclass(int id)
{
cout << "constructing
 " << id << "\n";
who = id;
}

~myclass()
{
cout << "Destructing " << who << "\n";
}
};

void fun();

int main()
{
myclass local_ob1(1);
fun();
cout << "This will not be first line displayed.\n";
myclass local_ob2(3);
return 0;
}


void fun()
{
myclass local_ob2(2);
cout<<"inside fun"<<endl;
}