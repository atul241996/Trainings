#include <iostream>
using namespace std;
int main()
{
cout << "Start\n";
try { // start a try block
cout << "Inside try block\n";
throw 100; // throw an error
cout << "This will not execute";
}
catch (double i) { // won't work for an int exception
cout << "Caught an exception -- value is: ";
cout << i << "\n";
}
cout << "End";
return 0;
}