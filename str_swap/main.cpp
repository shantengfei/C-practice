#include <iostream>
#include <string.h>
float fa;
void swap(char *&x,char *&y)
{
    char *temp;
    temp=x;
    x=y;
    y=temp;

}
float& f(float r)
{
    fa=r*r;
    return fa;
}

using namespace std;
int main()
{
    char* a="waht is a";
    char* b="BBBBB";
    cout<<a<<endl;
    cout<<b<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    //定义默认参数
    float& f(float=5);
    char str[]="helloo";
    printf("%s\n",str);
//    printf("%s",a);
    float& x=f();
    float y=f();
//    cout<<"f="<<fa<<endl;
//    cout<<"y="<<y<<endl;
//    cout<<"x="<<x<<endl;
    return 0;
}