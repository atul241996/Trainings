#include <iostream>
#include <set>
#include <string>
using namespace std;
class emp
{
	int eid;
	double sal;
	string name;
public :
	void getdata()
	{
		cout<<"enter name"<<endl;
		cin>>name;
cout<<"enter eid"<<endl;
		cin>>eid;
		cout<<"enter salary"<<endl;
		cin>>sal;
	}

	void showdata()
	{
	cout<<name <<"   "<<eid<<"   "<<sal<<endl;
	}
	bool operator < (const emp &e) const
	{
		return (eid<e.eid);
	}

};



int main()
{
set<emp > employee; // empty set container
emp ob;
char ch;
do
{
	ob.getdata();
	employee.insert(ob);
	cout<<"want insert another object(y/n)?"<<endl;
	cin>>ch;
}while(ch=='y');

set<emp> ::iterator it;
for(it=employee.begin(); it!=employee.end();it++)
{
	(*it).showdata();
}
}
