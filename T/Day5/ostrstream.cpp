#include <strstream>
#include <iostream>
using namespace std;
int main()
{
char str[80];
ostrstream outs(str, sizeof(str));
outs << "C++ array-based I/O. ";
outs << 1024 << hex << " ";
outs.setf(ios::showbase);
outs << 100 << ' ' << 99.789 << ends;
cout << str; // display string on console
return 0;
}