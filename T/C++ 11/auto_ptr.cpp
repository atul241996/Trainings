#include<iostream>
#include<string>
#include <memory>
using namespace std;
void remodel(string &str)
{
string *ps1 = new string(str);
auto_ptr<string> ps(ps1);
int n=10;
n=n/0;
cout<<"data is "<<*ps1<<endl;
// delete ps1; 
return;
}


int main()
{
	string mystr("HELLO SASKEN BANGLORE");
	remodel(mystr);
}
