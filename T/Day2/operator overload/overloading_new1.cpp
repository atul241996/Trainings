// CPP program to demonstrate 
// Overloading new and delete operator 
// for a specific class
#include<iostream>
#include<string>
 
using namespace std;
class student
{
    string name;
    int age;
public:
    student()
    {
        cout<< "Constructor is called\n" ; 
    }
    student(string name, int age)
    {
		cout<<"parametrized constructor"<<endl;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout<< "Name:" << name << endl;
        cout<< "Age:" << age << endl;
    }
    void * operator new(size_t size)
    {
        cout<< "Overloading new operator with size: " << size << endl;
        void * p = ::new student(); 
		cout<<"hey hey"<<endl;
        //void * p = malloc(size); will also work fine
     
        return p;
    }
 
    void operator delete(void * p)
    {
        cout<< "Overloading delete operator " << endl;
        free(p);
    }
};
 
int main()
{
    student * p = new student("Yash", 24);
 
    p->display();
    delete p;
}
 
}