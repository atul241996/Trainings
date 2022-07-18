//error1.cpp -- using the abort() function
#include <iostream>
#include <cstdlib>
using namespace std;
double hmean(double a, double b);
int main()
{
double x, y, z;
cout << "Enter two numbers: ";
while (cin >> x >> y)
{
z = hmean(x,y);
cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
std::cout << "Enter next set of numbers <q to quit>: ";
}
std::cout << "Bye!\n";
return 0;
}
double hmean(double a, double b)
{
if (a == -b)
{
std::cout << "untenable arguments to hmean()\n";
std::abort();
}
return 2.0 * a * b / (a + b);
}