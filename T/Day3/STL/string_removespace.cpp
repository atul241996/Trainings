#include<iostream>
#include<string>

using namespace std;

string removeAllSpaces(string& s)
{
 int pos=0;
  string newStr(s);
 bool spacesLeft = true;

 while(spacesLeft)
 {
   pos = newStr.find(" ",pos);
   if(pos != -1)
   {
     newStr.erase(pos, 1);
   }
   else
     spacesLeft = false;
 }

 return newStr;
}

int main()
{
 string aString("This string   has      multiple spaces    problem!");

 cout<<"Original : "<<aString<<endl;
 cout<<"Modified : "<<removeAllSpaces(aString)<<endl;

 return 0;
}