// Using a structure to define a class.
#include <iostream>
#include <cstring>
using namespace std;

struct mystr 
{
char str[255];

void buildstr(char *s)
{
if(!*s) *str = '\0'; // initialize string
else strcat(str, s);
}

void showstr()
{
cout << str << "\n";
}
} ;

int main()
{
mystr s;
s.buildstr(""); // init
s.buildstr("Hello ");
s.buildstr("there!");
s.showstr();
return 0;
}