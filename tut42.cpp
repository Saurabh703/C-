#include<iostream>
#include<math.h>
using namespace std;

class SimpleCalculator{
        int a, b;
    public:
        void set_input(){
            // a = num1;
            // b = num2;
            cout<<"Enter first number"<<endl;
            cin>>a;
            cout<<"Enter second number"<<endl;
            cin>>b;
        }
        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator{
    int a, b;
    public: 
        void set_inputofSci(){
        cout<<"Enter first number"<<endl;
            cin>>a;
            cout<<"Enter second number"<<endl;
            cin>>b;
}
        void performOperationsScientific(){
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{

};

int main() {
    HybridCalculator cal;
    cal.set_input();
    cal.performOperationsSimple();
    cal.set_inputofSci();
    cal.performOperationsScientific();
    return 0;
}