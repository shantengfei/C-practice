#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
 const char* search( const char* str1,const char* str2)
{
    int i,j;
     const char* long_str,*short_str;
    char* sub_str= nullptr;
    if((str1== nullptr)||(str2== nullptr))
        return nullptr;
    if(strlen(str1)>strlen(str2))
    {
        long_str=str1;
        short_str=str2;
    }
    else
    {
        long_str=str2;
        short_str=str1;
    }
    if(strstr(long_str,short_str)!= nullptr)
    {
        return short_str;
    }
    sub_str=( char*)malloc(sizeof(char)*(strlen(short_str)+1));
    for(i=strlen(short_str)-1;i>0;i--)
    {
        for(j=0;j<strlen(short_str)-i;j++)
        {
            memcpy(sub_str,&short_str[j],i);
            sub_str[i]='\0';                    //注意这里的sub_str指针一定要加字符串结束标志，由于改动了指针地址的内容，所以不能为const指针
            if(strstr(long_str,sub_str));
            return sub_str;                 //可以返回非const指针
        }
    }
    return NULL;

}
int main() {
    char*str1=(char*)malloc(256);
    char*str2=(char*)malloc(256);
   const char* common_str=NULL;
    cin>>str1;
    cin>>str2;
    common_str=search(str1,str2);
    std::cout << common_str<< std::endl;
    return 0;
}