#include <iostream>
using namespace std;
const int SIZE=100;
// this creates the class stack
class stack {
int stck[SIZE];
int tos;
public:
stack() { tos=0; }
void push(int i);
int pop(void);
operator int() { return tos; } // conversion of stack to int
};
void stack::push(int i)
{
if(tos==SIZE) {
cout << "Stack is full.\n";
return;
}
stck[tos] = i;
tos++;
}
int stack::pop()
{
if(tos==0) {
cout << "Stack underflow.\n";
return 0;
}
tos--;
return stck[tos];
}
int main()
{
stack stck;
int i, j;
for(i=0; i<20; i++) stck.push(i);
j = stck; // convert to integer
cout << j << " items on stack.\n";
cout << SIZE - stck << " spaces open.\n";
return 0;
}