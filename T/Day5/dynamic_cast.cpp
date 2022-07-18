// Demonstrate dynamic_cast.
#include <iostream>
using namespace std;
class Base {
public:
virtual void f() { cout << "Inside Base\n"; }
};
class Derived : public Base {
public:
void f() { cout << "Inside Derived\n"; }
};
int main()
{
Base *bp, b_ob;
Derived *dp, d_ob;
dp = dynamic_cast<Derived *> (&d_ob);
if(dp) {
cout << "Cast from Derived * to Derived * OK.\n";
dp->f();
} else
cout << "Error"<<endl;

bp = dynamic_cast<Base *> (&d_ob);
if(bp) {
cout << "Cast from Derived * to Base * OK.\n";
bp->f();
} else
cout << "Error"<<endl;

bp = dynamic_cast<Base *> (&b_ob);
if(bp) {
cout << "Cast from Base * to Base * OK.\n";
bp->f();
} else
cout << "Error"<< endl;

dp = dynamic_cast<Derived *> (&b_ob);
if(dp)
cout << "Cast from Base * to Derived * OK.\n";
else
cout << "Cast from Base * to Derived * is not OK."<<endl;

}