#include <iostream>
#include <cstring>
void loop(char* str,int n)
{
    size_t i=0;
    char* temp=(char*)malloc(n*sizeof(char));
    size_t length=strlen(str);
//    char* str=str;
    for( i=0;i<n;i++)
        temp[i]=str[length-n+i];
    for(i=length-1;i>=n;i--)
        str[i]=str[i-n];
    for(i=0;i<n;i++)
        str[i]=temp[i];
    free(temp);
}
int main ()
{
//    char* str="hello";
//    str[0]=str[1];
    char* str=(char*)malloc(9*sizeof(char));
    std::cin >> str;
    loop(str,2);
    std::cout << str << std::endl;

    //int *int= nullptr;
    return 0;
}