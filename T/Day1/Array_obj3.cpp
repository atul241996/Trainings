#include<iostream>
using namespace std;
class cl 
{
int i;
public:
cl() { i=0; } // called for non-initialized arrays
cl(int j) { i=j; } // called for initialized arrays
int get_i() { return i; }
};

int main()
{
cl a1[3] = {3, 5, 6}; // initialized
cl a2[34]; // uninitialized
}