#include<iostream>
using namespace std;

// A is a template
class A{
    int a;
    public:
        // A & setData(int a){
        void setData(int a){
            this->a = a;
            // return *this;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main() {
    // this is a keyword which is a pointer which points to the object which invokes th member function
    A a;
    a.setData(8);
    a.getData();
    return 0;
}