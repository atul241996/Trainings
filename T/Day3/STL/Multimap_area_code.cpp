// multmap.cpp -- use a multimap
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<int, string> Pair;
typedef multimap<int, string> MapCode;
int main()
{
multimap<int, string> codes;

codes.insert(pair<int, string>(415, "San Francisco"));
codes.insert(pair<int, string>(510, "Oakland"));
codes.insert(pair<int, string>(718, "Brooklyn"));
codes.insert(pair<int, string>(718, "Staten Island"));
codes.insert(pair<int, string>(415, "San Rafael"));
codes.insert(pair<int, string>(510, "Berkeley"));
cout << "Number of cities with area code 415: "<< codes.count(415) << endl;
cout << "Number of cities with area code 718: "<< codes.count(718) << endl;
cout << "Number of cities with area code 510: "<< codes.count(510) << endl;
cout << "Area Code City\n";
multimap<int, string>::iterator it;
for (it = codes.begin(); it != codes.end(); ++it)
cout << " " << (*it).first << " "<< (*it).second << endl;
int N;
cout<<"enter a area code "<<endl;
cin>>N;
cout <<"Cities with Area Code "<<N<<"are "<<endl;
for (it = codes.begin(); it != codes.end(); ++it)
{
	if((*it).first==N)
cout << " " << (*it).first << " "<< (*it).second << endl;
}
return 0;
}