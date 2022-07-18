#include<iostream>
using namespace std;

 int main()
 {
 int num1,num2,res;
 char ch;
do
{
 cout<<"enter two numbers \n"<<endl;
	cin>>num1>>num2;
	 try
	 {
		 if(num2==0)
			 throw "divide by zero error";
	res=num1/num2;
	cout<<"result ="<<res<<endl;

	 }
	 catch(char *err)
	 {
		 cout<<err<<endl;
		 cout<<"exception handled "<<endl;
	 }
cout<<"do u want continue"<<endl;
cin>>ch;
}while(ch=='y');	 
	 return 0;
 }