#include <iostream>
#include <assert.h>
using namespace std;
//因为参数里面使用的const变量所以这里的函数返回值也得是const
const char* strstrFun(const char* src,const char* sub)
{
    assert(src!= nullptr&&sub!= nullptr);
    const char* psrc;
    const char*psub;
    while (*src)
    {
        psrc=src;
        psub=sub;
        do
        {
            if(!*psub)
                return src;
        } while(*psub++==*psrc++);
        src++;
    }
    return nullptr;
}
int main() {
    char src[]="hello world";
    char sub[]="llo";
    cout <<strstrFun(src,sub)<<endl;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}