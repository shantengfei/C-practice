#include <iostream>
#include <cstring>

using namespace std;
class MyString
{
public:
    MyString(char* s)
    {
         str=new char[strlen(s)+1];
        strcpy(str,s);
    }
    ~MyString()
    {
        delete []str;
    }
MyString &operator = (MyString &string)
{
    if(this==&string)
    {
        return *this;
    }
    if(str!= nullptr)
    {
        delete[]str;
    }
    str=new char[strlen(string.str)+1];
    strcpy(str,string.str);
    return *this;
}
//    MyString &operator + (MyString &string)
//    {
//        char* temp=str;
//        str=new char[strlen(str)+strlen(string.str)+1];
//        strcpy(str,temp);
//        delete[]temp;
//        strcat(str,string.str);
//        return *this;
//    }
    MyString &operator + (MyString &string)
    {
        MyString* pString=new MyString("");
        pString->str=new char[strlen(str)+strlen(string.str)+1];
        strcpy(pString->str,str);
        strcat(pString->str,string.str);
        return *pString;
    }
void print()
    {
        cout<<str<<endl;
    }

private:
    char* str;
};
//
//MyString& operator +(MyString &left,MyString& right)
//{
//    MyString* pString=new MyString("");
//    pString->str=new char[strlen(left.str)+strlen(right.str)+1];
//    strcpy(pString->str,left.str);
//    strcat(pString->str,right.str);
//    return *pString;
//}


int main()
{
    MyString a("hello ");
    MyString b("world ");

    MyString c(" ");
    c=c + a;
    c.print();
    c=c+b;
    c.print();

    c=a+b;
    a.print();
    c.print();


   // std::cout<<"Hello, World!"<<std::endl;
    return 0;
}