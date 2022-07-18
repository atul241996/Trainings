#include<iostream>
#include<memory>
using namespace std;

int main()
{
unique_ptr<int> p1(new int(5));
//unique_ptr<int> p2 = p1; //Compile error.
unique_ptr<int> p3 = move(p1); //Transfers ownership. p3 now owns the memory and p1 is rendered invalid.
cout<<"p3 data "<<*p3<<endl;
cout<<"p1 data "<<*p1<<endl;
//p3.reset(); //Deletes the memory.
p1.reset(); //Does nothing.
//cout<<"p3 data "<<*p3<<endl;

}
