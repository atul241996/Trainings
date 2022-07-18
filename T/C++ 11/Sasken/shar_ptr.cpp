#include<iostream>
#include<memory>
using namespace std;

int main()
{
shared_ptr<int> p1(new int(5));
shared_ptr<int> p2 = p1; //Both now own the memory.
cout<<"data p1 "<<*p1<<endl;
cout<<"data p2 "<<*p2<<endl;
p1.reset(); //Memory still exists, due to p2.
//cout<<"data p1 "<<*p1<<endl;
cout<<"data p2 "<<*p2<<endl;
p2.reset(); //Deletes the memory, since no one else owns the memory
//cout<<"data p1 "<<*p1<<endl;
cout<<"data p2 "<<*p2<<endl;

}
