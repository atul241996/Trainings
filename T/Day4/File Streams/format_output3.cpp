#include<iostream>
using namespace std;
void main()
{
cout.setf(ios::scientific,ios::floatfield);
cout << 15.25 << "\n"; // displays output in scientific notation
cout.unsetf(ios::scientific);//change to fixed
cout << 15.25 << "\n"; // display fixed format
cout.width(20);
cout.setf(ios::right,ios::adjustfield);
cout<<"hello"<<endl;   // displays left -justified output.
}

