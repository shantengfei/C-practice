#include <iostream>
#define PI 3.1415926
using namespace std;
class shape
{
public:
    shape()
    {

    }
    ~shape()
    {

    }
    virtual void draw()=0;
    virtual double area()=0;

};

class rectangle:public  shape
{
public:
    rectangle():a(0),b(0){}
    rectangle(double x, double y):a(x),b(y){}
    virtual void draw()
    {
        cout <<"rectangle area"<<area()<<endl;
    }
    virtual double area()
    {
        return a*b;
    }

private:
    double a;
    double b;
};

class square:public rectangle
{
public:
    square():a(0){}
    square(double x):a(x){}
    virtual void draw()
    {
        cout<<"square area"<<area()<<endl;
    }
    virtual double area()
    {
        return a*a;
    }

private:
    double a;
};

class circle:public shape
{
public:
    circle(double x):r(x){}
    virtual void draw()
    {
        cout<<"show circle"<<area()<<endl;
    }
    virtual double area()
    {
        return PI*r*r;
    }

private: double r;
};
int main() {
    rectangle rect(10,20);
    square sq(30);
    circle cir(10);
    shape *p;
    p=&rect;
    cout<<p->area()<<endl;
    p->draw();

    p=&sq;
    cout<<p->area()<<endl;
    p->draw();

    p=&cir;
    cout<<p->area()<<endl;
    p->draw();
 //   std::cout << "Hello, World!" << std::endl;
    return 0;
}