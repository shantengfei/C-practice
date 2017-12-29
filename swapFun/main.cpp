#include <iostream>
#include <cstring>
//通过数组下标进行访问
char* swap1(const char* str)
{
    size_t len=strlen(str);
    char* temp=new char[len+1];
    strcpy(temp,str);
    for(size_t i =0;i<len/2;i++)
    {

        char c=temp[len-1-i];
       temp[len-1-i]=temp[i];   //这样复制貌似不行?
        temp[i]=c;
    }

    return temp;
}
//通过指针进行访问
char* swap2(const char* str)
{
    size_t len=strlen(str);
    char* temp= new char[len+1];
    strcpy(temp,str);
    char* origin=temp;
    char* end=temp+strlen(str)-1;
    while(end>temp)
    {
        char t=*temp;
        *temp=*end;
        *end=t;
        --end;
        ++temp;
    }
    return origin;
}
char* swap3(const char* str)
{
   size_t len=strlen(str);
    char* temp=new char[len+1];
    strcpy(temp,str);
    char* origin=temp;
    char* end=temp+strlen(str)-1;
    while (temp<end)
    {
        *temp^=*end;
        *end^=*temp;
        *temp^=*end;
        ++temp;
        --end;
    }
    return  origin;
}

char* swap4(const char* str)
{
    size_t len=strlen(str);
    char* temp=new char[len+1];
    strcpy(temp,str);
    char* origin=temp;
    char* end=temp+strlen(str)-1;
    while (temp<end)
    {
        *temp+=*end;
        *end=*temp-*end;
        *temp=*temp-*end;
        ++temp;
        --end;
    }
    return  origin;
}

char* swap5(char* str,size_t len)
{
    if(len<1)
        return str;
    char t=*str;
    *str=*(str+len-1);
    *(str+len-1)=t;
    return (swap5(str+1,len-2)-1);
}

int main() {
  char* str="123456";
 char*   str1=swap1(str);
   char* str2=swap2(str);
 char* str3=swap3(str);
    char* str4=swap5(str,strlen(str));
    std::cout<<str4<<std::endl;
   // std::cout << "Hello, World!" << std::endl;
    return 0;
}