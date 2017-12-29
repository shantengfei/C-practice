#include <iostream>
#include <cstring>
char* deletechar(char* str, char c)
{
    if(str==nullptr)
        return nullptr;
    char* head= nullptr;
    char* ptr= nullptr;
    ptr=head=str;
    while (*ptr++)
    {
        if(*ptr!=c)
        {
            *str++=*ptr;
        }
    }
    *str='\0';
    return head;
}
int main() {
    char* str= (char*)malloc(20);
    char * output= (char*)malloc(20);
    char c;
    std::cin>>str;
    std::cout<<"输入删除的字母"<<std::endl;
    std::cin>>c;
    output=deletechar(str,c);
    std::cout << output<< std::endl;
    return 0;
}