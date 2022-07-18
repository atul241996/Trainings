#include<iostream>
#include<string>
#include <memory>
using namespace std;
void remodel(string &str)
{
string *ps = new string(str);
//auto_ptr<string> ps(new string(str));
cout<<"data is "<<*ps;
// delete ps; NO LONGER NEEDED
return;
}


void main()
{
	string mystr("HELLO SASKEN BANGLORE");
	remodel(mystr);
}