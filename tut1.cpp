#include<iostream>
#include <iomanip>
using namespace std; 

class Employee 
{
    private: 
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
};

int main() {  
    Employee hari;
    hari.d = 34;
    hari.e = 89;
    // hari.a = 34; // shows error as it is private
    hari.setData(1,4,3);
    hari.getData();
    return 0;
}   

