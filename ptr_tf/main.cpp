#include <iostream>
using  namespace std;
int main() {
    char**s;
//          *s=  "hello";
    int **p3=0;
    int v1=1;
    int v2=2;
    int*p1=&v1;
    int*p2=&v2;
    const char * a="hello";
    char*const b = "world";
 //   cout<<*a<<endl;
//
   // *b[2]='k';
   //b[2]='k';
    cout<<*b<<endl;
//    a=&v2;
    cout<<*a<<endl;
    int*arryptr[2];
    int arr1[2]={1,2};
    int arr2[3]={3,4,5};
    arryptr[0]=arr1;
    arryptr[1]=arr2;
    cout<<arryptr[0][0]<<endl;
//    v1=*p3;
//    *p2=*p3;
//    v1=p2;
//    p2=*p1;
//    p1=*p3;
//    v1=*p1;
//    v1=p1;
//    p1=v1;
 //   p3=&p2;
   return 0;
}