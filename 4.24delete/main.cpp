#include <iostream>
#include <cstring>
char* deleteFun(char* str,size_t pos,size_t len)
{
    char* p=str+pos-1;
    size_t length=strlen(str);
    if(str== nullptr)
        return str;
    if((pos<0)||(pos>length))
    {
        return str;
    }
    if((p+len-str)>length)          //  注意这里是p不是pos，指针的加减运算结束后为size_t
    {
        *p='\0';                    //直接将这意味赋值为结束符
    } else
    {
        while(*p&&*(p+len))          //这里这一步是将所有的后面前移通过后面的p+len来判断是否是到达最后的位置
        {
            *p=*(p+len);
            p++;
        }
        *p='\0';
    }
    return str;
}
int main() {
    char* str=(char*)malloc(20);
    std::cout<<"请输入"<<std::endl;
    std::cin>>str;
    char* str1=(char*)malloc(20);
            str1=deleteFun(str,3,10);
    std::cout << str1 << std::endl;
    return 0;
}