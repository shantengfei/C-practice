#include <iostream>
using namespace std;
class Base
{
public:
    virtual void g(int i=10){cout<<"i="<<i<<endl;}

};
class Derived:public Base
{
public:
    virtual  void g(int i=20){cout<<"i="<<i<<endl;}
};

int main() {
    Base b;
    Derived d;
    Base* pb=new Derived;
    pb->g();
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}