#include <iostream>
#include <assert.h>
using namespace std;
int mystrcmp(const char* str, const char* dst)
{
    int value;
    assert(str!= nullptr&&dst!= nullptr);
    while (!(value=*(unsigned char*)str-*(unsigned char*)dst)&&*dst)
    {
        ++str;
        ++dst;
    }
    if(value>0)
        return 1;
    else if(value<0)
        return -1;
    else return 0;
}
int main() {
    char str[]="1";
    char dst[]="255";
    std::cout <<mystrcmp(str,dst)<< std::endl;
    return 0;
}