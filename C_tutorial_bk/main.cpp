#include <iostream>
#include <cstring>
void loop(char* str,int n)
{
    size_t i=0;
    char* temp=(char*)malloc(n);
    size_t length=strlen(str);
    char* head=str;
    for( i=0;i<n;i++)
        temp[i]=str[length-n+i];
    for(i=length-1;i>=n;i--)
        head[i]=head[i-n];
    for(i=0;i<n;i++)
        head[i]=temp[i];
    free(temp);
}
int main ()
{
    char* str="hello";
    loop(str,2);
    std::cout << str << std::endl;

 //int *int= nullptr;
    return 0;
}