#include<iostream>
#include<string>

using namespace std;

int main()
{
  string s1 = "Hello is that Tom? Are you ok Tom? Take Care tom!";
  string s2 = "Tom";
  string s3 = "William";
  cout << "s1 = " << s1 << endl;
  //Find s2 and replace by s3
  bool flag = true;
  int found=0;
  while(flag)
  {
    found = s1.find(s2,found+s2.length());
    if(found != -1)
    {
      s1.replace(found, s2.length(), s3);
    }
    else
    {
      flag = false;
    }
  }
  cout << "s1 = " << s1 << endl;
  return 0;
}