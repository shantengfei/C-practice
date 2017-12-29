#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    char *str[]={"welcome" ,"to", "Fortemedia","Nanjing"};
    char**p =str+1;
//    printf("0 %p\n",str[0]);
//    printf("1 %p\n",str[1]);
//    printf("2 %p\n",str[2]);
//    printf("3 %p\n",str[3]);
    str[0]=(*p++)+2;
//    printf("%p\n",*p);
   // printf("%p\n",str[3]);
//    printf("%p",str[0]);
    str[1]=*(p+1);
    str[2]=p[1]+3;
    str[3]=p[0]+(str[2]-str[1]);
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}