#include <iostream>
#include <strstream>
using namespace std;
int main()
{
char s[] = "10 Hello 0x75 42.73 OK";
istrstream ins(s,sizeof(s));
int i;
char str[80];
float f;
// reading: 10 Hello
ins >> i;
ins >> str;
cout << i << " " << str << endl;
// reading 0x75 42.73 OK
ins >> hex >> i;
ins >> f;
ins >> str;
cout << hex << i << " " << f << " " << str;
return 0;
}