//
// Created by shantengfei on 17-12-25.
//

#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;


class String {
public:
    String();               //默认构造函数
    String(int n,char c);   //构造函数
    String(const char* source); //构造函数
    String(const String& s);    //复制构造函数
    String& operator =(char* s);    //重载赋值运算符，实现字符串赋值
    String& operator =(const String& s);    //重载赋值运算符，实现对象赋值
    ~String();
    char&operator[](int i);             //重载[],实现数组运算
    const char&operator[](int i)const;  //实现数组运算，对象为常量
    String&operator+=(const String& s); //对象相加
    String&operator+=(const char*s);    //实现字符串相加
    friend ostream&operator <<

};


#endif //INC_5_36_STRING_H
