#include <iostream>
#include <assert.h>
#include <cstring>
using namespace std;
bool isRevStr(const char* src)
{
    int len;
const  char* end;
    assert(src!= nullptr);
    len=strlen(src);
    end=src+len-1;
    for(size_t i=0;i<=len/2;i++)
    {
        if(*(src+i)!=*(end-i))
        {
            return false;
           // break;
        }
    }
    return true;
}
int main() {
    char src[]="leel";

    std::cout << isRevStr(src) << std::endl;
    return 0;
}