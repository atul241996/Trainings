/* assert example */
#include <iostream>   

using namespace std;

// function with integer argument
void fun(int N) 
{ 
	cout << "fun(int)"; }

// Overloaded function with char pointer argument
void fun(char* s) 
{ cout << "fun(char *)"; }

int main()
{
	// Ideally, it should have called fun(char *),
	// but it causes compiler error.
	fun(nullptr);
}