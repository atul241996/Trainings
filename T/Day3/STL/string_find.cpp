#include <iostream>
#include <string>

using namespace std;
 
int main()
{
  string someString("Tom is not in. Infact Tom is not going to be in Tomorrow or day after Tomorrow");
  string findTheString("Tom");
 
 int position = 0;
 
  position = someString.find(findTheString);
  cout<<"First position of " << findTheString << " is " << position << endl;
 
  //We want to find all the next positions which is after position + findTheString.length()
while(1)
  {
    position = someString.find(findTheString, (position + findTheString.length()));
    if(position==-1)
		break;
	cout<<"Next position of " << findTheString << " is " << position << endl;
  }  
 
  return 0;
}