#include <iostream>
#include <assert.h>
using namespace std;
void* memcpyFun(void* strDest,const void* strSrc,size_t size)
{
    assert((strDest!= nullptr)&&(strSrc!= nullptr));
    char* strDestTemp=(char*)strDest;
    char* strSrcTemp=(char*)strSrc;
    while(size-->0)
    {
        *strDestTemp++=*strSrcTemp++;

    }
    return strDest;

}
int main() {
    char strSrc[]="hello";
    char strDest[20]={0};
    memcpyFun(strDest,strSrc,3);
    cout<<strDest<<endl;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}