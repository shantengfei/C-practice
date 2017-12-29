#include <iostream>
using namespace std;
class Person
{

public:
    Person(int var=-1)
    {
        m_nprt=var;
        m_npub=var;
        m_npro=var;
    }
    void eat()
    {
        cout<<"person eat"<<endl;
    }

private:
    int m_nprt;
public:
    int m_npub;
protected:
    int m_npro;
    int getprotected()
    {
        return m_npro+3;
    }
};
class student: private Person
{
public:
    void study()
    {
        cout<<"student study"<<endl;
    }
    int getpub()
    {
        return m_npub;
    }
    int getpro()
    {
        return m_npro;
    }
//    int getprt()
//    {
//        return m_nprt;
//    }
};
int main() {
    Person P;
    student s;
    P.eat();
    s.study();
 //   s.eat();
    //int i=s.getprt();
    int j=s.getpub();
    int k=s.getpro();
    int m=s.getprotected();
  //  P=s;
cout<<j<<"k="<<k<<endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}