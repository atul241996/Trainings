#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
 vector<std::string> lines;
 lines.reserve(5000); //Assuming that the file to read can have max 5K lines


 ifstream file;
 file.open("list1.cpp");
ofstream out("myfile.txt");
 if(!file.is_open())
 {
   cerr<<"Error opening file : "<<endl;
   return -1;
 }

 //Read the lines and store it in the vector
  string line;
 while(getline(file,line))
 {
   lines.push_back(line);
 }

 file.close();

 //Dump all the lines in output
  for(unsigned int i = 0; i < lines.size(); i++)
 {
   cout<<i<<". "<<lines[i]<<endl;
 }
  copy(lines.begin(),lines.end(),ostream_iterator<string>(out,"\n"));
 return 0;
}
