// Use ostream_iterator
#include <iostream>
#include <iterator>
using namespace std;
int main()
{
ostream_iterator<char> out_it(cout);
*out_it = 'X';
*out_it = 'Y';
*out_it = ' ';
char str[] = "C++ Iterators are powerful.\n";
char *p = str;
while(*p) *out_it = *p++;
ostream_iterator<double> out_double_it(cout);
*out_double_it = 187.23;
*out_double_it = -102.7;
return 0;
}