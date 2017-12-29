#include <iostream>
#include <cstring>
<<<<<<< HEAD
#pragma pack(2)
typedef unsigned char byte;
typedef unsigned int word;
//#define DEBUG
#define MAX(x,y) (((x)>(y))?(x):(y))
#define MIN(x,y) (((x)<(y))?(x):(y))
#define  STR(s) #s
#define  CONS(a,b) (int)(a##e##b)
#define WORD_LO(xxx) ((byte)((word)(xxx)&255))
#define WORD_HI(xxx) ((byte)((word(xxx)>>8)))
int value=0;
void Printvalue() {
printf("%d\n",value);
}
using namespace std;
int main() {/*
    cout<<WORD_HI(256)<<endl;
    cout<<WORD_LO(123)<<endl;*/
/*    const int X=1;
    int b=9;
    int C=20;
    const int* a1=&b;
    int* const a2=&b;
    const int* const a3=&b;
    byte a=WORD_HI(256);
    printf("a= %d\n",a);
    value=1;
    std::string str="what";
   std::cout<<STR(str)<<std::endl;
    cout<<CONS(2,3)<<endl;
#ifdef DEBUG
    Printvalue();
   std::cout <<value<<"定了了" << std::endl;
#endif
#ifndef DEBUG
    ::value=3;
    Printvalue();
    std::cout<<"未定义"<<std::endl;
#endif
    int A=1;
    int B=2;
    std::cout<<MAX(a,b)<<"    "<<MIN(a,b)<<std::endl;

    std::cout<<-value++<<std::endl;
    std::cout<<value<<std::endl;
    unsigned  int x=7;
    int y=-7;
    int c;
    unsigned int z;
    z=x+y;
    (z>10)?(c=1):(c=2);
    std::cout<<c<<" "<<z;*/
   /*  char str[]="hello";
    char* p=str;
    cout<<sizeof(str)<<" "<< sizeof(p)<<endl;*/
/*    class A{};
    class B{};
    class c:public A,public B{};
    class d:virtual public A{};
    cout<< sizeof(A)<<"  "<< sizeof(d)<<endl;*/
  /*  struct test{
        int a;
        char b;
    };
    char str[]="123456";
    cout<< sizeof(test)<<"  "<< strlen(str)<<endl;*/
/*int a=1;
    int b=20;
    int &rn=a;
    rn =100;
    b=(&a==&rn)?1:0;
    cout<<a<<endl;
    cout<<b<<endl;*/
//    int a=1;
//    int b=10;
//    int* p=&a;
//    int* &pa=p;
//    (*pa)++;
//    int &d=a;
//    d=b;
//   // &d=a;
//    cout<<"a="<< a<<" b="<<b<<" *p= "<<*p<<endl;
//    pa=&b;
//    (*pa)++;
//    cout<<"a="<< a<<" b="<<b<<" *p= "<<*p<<endl;

=======
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
>>>>>>> 78676879a57c113820536cc90c05e19da6136945
    return 0;
}