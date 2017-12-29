#include <iostream>
#include <assert.h>
using namespace std;
char* strCpy(char* strDest,char*strSrc)
{
    assert((strDest!=NULL)&&(strSrc!=NULL));
    //定义一个临时存储目的字符串的指针，这样存储的就是目的指针的首地址，便于返回
    char* strDestCopy=strDest;
    while((*strDest++=*strSrc++)!='\0');
    return strDestCopy;
}
int getlen(const char* strSrc)
{
    int len=0;
    //++运算符
    while(*strSrc++!='\0')
        len++;
    return len;
}
int main() {
   // std::cout << "Hello, World!" << std::endl;
    char strSrc[]="Hello World!";
    char strDest[20];
    int len{0};
    len=getlen(strCpy(strDest,strSrc));
    cout<<strDest<<"lenth is "<<len<<endl;
    return 0;
}