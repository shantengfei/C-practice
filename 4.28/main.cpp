#include <iostream>
char*mystrcat(char* dest, const char* src)
{
    char* temp= nullptr;
    temp=dest;
    while (*dest++);
    dest--;
    while (*dest++=*src++);
    return temp;

}
using namespace std;
int main() {
    char* dest= nullptr;
    char* str1="Hello";
    char* str2="world";
    dest=(char*)malloc(256);
    *dest='\0';
    mystrcat(mystrcat(dest,str1),str2);
    cout<<dest<<endl;
    free(dest);
    dest= nullptr;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}