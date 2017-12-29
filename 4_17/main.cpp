#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
char* get2string(long num)
{
    int i=0;
    char *buffer= nullptr;
   // char buffer[33];
    char *temp= nullptr;
    buffer=(char*)malloc(33);
    temp=buffer;
    for(i=0;i<32;i++)
    {
        temp[i]=num&(1<<(31-i));
        temp[i]=temp[i]>>(31-i);
        temp[i]=(temp[i]==0)?'0':'1';
    }
    temp[33]='\0';
    return buffer;
}
char* get16string(long num)
{
    int i=0;
    char* buffer=(char*)malloc(11);
    char* temp= nullptr;
    buffer[0]='0';
    buffer[1]='x';
    buffer[10]='\0';
    temp=buffer+2;
    for(i=0;i<8;i++)
    {
        temp[i]=(char)(num<<4 * i>>28);
        temp[i]=temp[i]>=0?temp[i]:temp[i]+16;
        temp[i]=temp[i]<10?temp[i]+48:temp[i]+55;

    }
    return buffer;
}

int main() {
    char* ptwo= nullptr;
    char*psixteen= nullptr;
    int num =0;
    cin>>num;
    ptwo=get2string(num);
    psixteen=get16string(num);

    std::cout << ptwo << std::endl;
    cout<<psixteen<<endl;
    return 0;
}