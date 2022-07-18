#include <iostream>
using namespace std;
void warning()
{
	cout<<"\n insufficient memory"<<endl;
	exit(0);
}
void * operator new(size_t size,int setval)
{
	void *t;
	cout<<"size value = "<<size<<endl;
	if(size <=100)
	{
	t=malloc(size);
	if(t==NULL)
		warning();
	memset(t,setval,size);
	return t;
	}
	else
		return NULL;
}

void operator delete(void *p)
{
	cout<<"overloaded delete"<<endl;
	free(p);
}
int main()
{
	char *data=new ('M')char[130];
	if(data == NULL)
		warning();
	cout<<"first allocation  "<<long(data)<<endl;
	for(int i=0;i<100;i++)
		cout<<*(data+i)<<endl;
	delete data;
}