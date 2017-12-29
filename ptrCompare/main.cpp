#include <iostream>

using namespace std;
int main() {
    char str1[] = "abc";
    char str2[] = "abc";
    const char str3[] = "abc";
    const char str4[] = "abc";
    const char *str5 = "abc";
    const char *str6 = "abc";
    char *str7 = "abc";
    char *str8 = "abc";
    cout << ( str1 == str2 ) << endl;   //比较的是地址
    cout << ( str3 == str4 ) << endl;   //比较的是地址
    cout << ( str5 == str6 ) << endl;   //后面三行指针指向的是同一个字符串常量，所以是相等的
    cout << ( str6 == str7 ) << endl;
    cout << ( str7 == str8 ) << endl;

    return 0;
}