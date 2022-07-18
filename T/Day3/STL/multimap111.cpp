#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
map<string,float> stocks; // create empty container
//insert some elements
stocks["BASF"] = 369.50;
stocks["VW"] = 413.50;
stocks["Daimler"] = 819.00;
stocks["BMW"] = 834.00;
stocks["Siemens"] = 842.20;
//print all elements
map<string,float> ::iterator pos;
for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;
}
cout << endl;
//boom (all prices doubled)
for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
pos->second *= 2;
}
//print all elements
for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;
}
cout << endl;

}