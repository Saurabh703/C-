#include <iostream>
using namespace std;
/*
Syntax for initialize list in constructor:
constructor (argument-list): initialization-section
{
    assignment + other code;
}
*/

class Test
{
    int a; // here a is initialized first
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b) --> RED Flag this will create problems because a will be initialized first
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constrictor exceeded" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of is b " << b << endl;
    }
};

int main()
{
    Test t(4, 7);
    return 0;
}