#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // --> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex c1(3, 5);

    // Explicit call
    Complex a = Complex(4, 9);

    c1.printNumber();
    a.printNumber();

    return 0;
}