#include <iostream>
using namespace std;
class Person
{
public:
    virtual void print()
    {
        cout<<"Person"<<endl;
    }
};
class chinese: public Person
{
public:
    void print()
    {
        cout<<"chinese"<<endl;
    }
};
void printPerson(Person& person)
{
    person.print();
}

int main() {
    Person  p;
    chinese c;
    printPerson(p);
    printPerson(c);
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}