#include <iostream>
#include <stdlib.h>
#include <cstring>

void loop(char* str,int n)
{
    size_t i=0;
    char* temp=(char*)malloc(n);
    size_t length=strlen(str);
    char* head=str;
    for( i=0;i<n;i++)
        temp[i]=str[length-n+i];
    for(i=length-1;i>n;i--)
        head[i]=head[i-n];
    for(i=0;i<n;i++)
        head[i]=temp[i];
    //当函数传入的指针指向的是敞亮字符串时，这里尝试修改常量字符串会出现错误
    free(temp);
}
int main() {
   // char* str="hello";
    char* str=(char*)malloc(8);
    std::cout<<"请输入一个小于7个字符长度的字符串"<<std::endl;
    std::cin>>str;
    int n=2;
    loop(str,n);
    std::cout << str << std::endl;
    return 0;
}