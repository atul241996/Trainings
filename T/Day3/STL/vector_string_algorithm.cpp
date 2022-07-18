#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
  string someString="ABC";
  vector<string> someVector;

  someVector.push_back(someString);

  string::iterator itBegin = someString.begin();
  string::iterator itEnd = someString.end();

  while(next_permutation(itBegin, itEnd)) 
  {
    someVector.push_back(string(itBegin, itEnd));
  }
  copy(someVector.begin(), someVector.end(), ostream_iterator<string>(cout, "\n"));

  return 0;
}