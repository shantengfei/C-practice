#include <iostream>
#include <assert.h>
using namespace std;
int strlen1(const char* src)
{
    int len=0;
    assert(src!= nullptr);
    while (*src++!='\0')
        len++;
    return len;

}
int strlen2(const char* src)
{
    assert(src!= nullptr);
    //const类型的char指针复制时必须是const char*
    const char* temp=src;
    while(*src++!='\0');
    return (src-temp-1);
}

int main() {
    char src[]="hello";
    cout<<strlen2(src)<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}