#include <iostream>
void mysort(char* str,int num)
{

    size_t i=0;
    size_t j=0;
    int temp=0;
    for(i;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(str[i]<str[j])
            {
                str[i]+=str[j];
                str[j]=str[i]-str[j];
                str[i]=str[i]-str[j];
            }
        }
    }
}
void foo(char* str)
{
    char temp;
    int len=0;
    char* end;
    char* start= nullptr;
    if(str==nullptr)
    {
    //    return nullptr;
    }
    start=str;
    while (*str++);//关注一下到底是怎么循环的
    len=str-start-1;
    end=str-2;
    len/=2;
    str=start;
    mysort(str,len);
    while (*(start+len))
    {
//        temp=*end;
//        *end=*start;
//        *start=temp;
//        ++start;
//        --end;
        temp=*(start+len);
        *(start+len)=*start;
        *start=temp;
        ++start;
    }
    //return str;
}

int main() {
    char* str= (char*)malloc(20);
    std::cout<<"输入"<<std::endl;
    std::cin>>str;
    foo(str);
    std::cout <<str<< std::endl;
    return 0;
}