// Set a new terminate handler.
#include <iostream>
#include <cstdlib>
#include <exception>
using namespace std;
void my_Thandler() {
cout << "Inside new terminate handler\n";
//abort();
//exit(0);
}
int main()
{
// set a new terminate handler
set_terminate(my_Thandler);
try {
cout << "Inside try block\n";
throw 100; // throw an error
}
catch (double i) { // won't catch an int exception
// ...
}
return 0;
}