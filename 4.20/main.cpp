#include <iostream>
#include <assert.h>
#include <stack>
#include <cstring>
using namespace std;
 char* reverse(const char* s1, const char* token,char* s2)
{
    char* pReturn=new char[strlen(s1)+1];
    stack<char>stack1;
    const char* ptoken=token,*head=s1, *rear=s1;
    assert(s1&&token);
    while(*head!='\0')
    {
        while(*head!='\0'&&*ptoken==*head)
        {
            ptoken++;
            head++;
        }
        if(*ptoken=='\0')
        {
            const char* p;
            for(p=head-1;p>=rear;p--)
            {
                stack1.push(*p);
            }
            ptoken=token;
            rear=head;
        }
        else
        {
            stack1.push(*rear++);
            head=rear;
            ptoken=token;
        }
    }
 //
  //  char* pReturn=s2;
    int i=0;
    while (!stack1.empty())
    {
        pReturn[i++]=stack1.top();
        stack1.pop();
    }
    pReturn[i]='\0';
    return pReturn;
}
int main() {
    char s1[]="Hello, Hello World!";
    char token[]="Hello";
 //   char* pReturn=new char[strlen(s1)+1];
    char* s2= new char[strlen(s1)+1];
   s2=reverse(s1,token,s2);
 //   std::cout<<pReturn<<endl;
    std::cout<<s2<<endl;
  //  printf("%s",s2);
   // cout<<reverse(s1,token,s2)<<endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}