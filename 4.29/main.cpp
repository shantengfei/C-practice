#include <iostream>
using namespace std;
int strlength(const char* src)
{
    int count=0;
    const char* temp=src;
    while(*temp)
    {
        if((*temp<0)&&(*(temp+1)<0||*(temp+1)>63))
        {
            src++;
            temp+=3;
            count++;
        } else
        {
            temp++;
            count++;
        }
    }

    int length=temp-src-2;
//    return length;
    return count;
}
int main() {
    char* src="hello们";
    int length=strlength(src);
    cout<<length<<endl;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}