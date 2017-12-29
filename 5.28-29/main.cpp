#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"A default construction"<<endl;
    }
    virtual ~A()
    {
        cout<<"destruction"<<endl;
    }
    A(A &a)
    {
        data=a.data;
        cout<<"copy construction"<<endl;
    }
    A& operator=(const A &a)
    {
        cout<<"assignment"<<endl;
        return *this;
    }
    A(int i):data(i)
    {
        cout<<"parameter construction"<<endl;
    }

private:
    int data;
};
A fun()
{
    A a;
    return a;
}
A play(A a)
{
    return a;
}
int main() {
 //   A a;
   // a=fun();
    //std::cout << "Hello, World!" << std::endl;
    A a1;
    a1=play(5);
    A a2;
    a2=play(a1);
    return 0;
}