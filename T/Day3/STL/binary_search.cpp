#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
vector <string> names;
string name;

while(true)
{ 
cout <<"Input a name and quit to stop " <<endl;
   cin >>name;
if(name == "quit")
	break;
else
   names.push_back(name);  
}
sort(names.begin(),names.end());
cout<<"sorted list "<<endl;
for(int i=0;i<names.size();i++)
cout<<names[i]<<endl;

cout<<"enter string to be searched";
string search;
cin>>search;
if(binary_search(names.begin(),names.end(),search))
cout<<"string "<<search<<" found"<<endl;
else
cout<<"string "<<search<<" not found"<<endl;

return 0;
}
