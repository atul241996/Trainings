#include<iostream>
#include<fstream>
using namespace std;
class base
{
private:
	int i;
	char c;
	char ch[20];
	float f;
public :

	void getdata( )
		{
		cout << "Enter int:";
		cin >> i;
		cout << "Enter char :" ;
		cin >> c;
		cout << "Enter a string :";
		cin >> ch;
		cout << "Enter a float :";
		cin >> f;
		}
	void showdata()
		{
		cout << "Displaying Data"<<endl;
		cout << "intger i      =" << i<<endl;
		cout << "char is       =" << c<<endl;
		cout << "string is     =" << ch<<endl;
		cout << "float is      =" << f<<endl;
		}
  };
void  main( )
{
base file1,file2;
  //get data and write to the file
file1.getdata();
fstream file("a11.txt", ios::trunc|ios::in|ios::out);
file.write((char *)&file1,sizeof(file1));
file.seekg(0,ios::beg);
file.read((char *)&file2,sizeof(file2));
file2.showdata();
}
