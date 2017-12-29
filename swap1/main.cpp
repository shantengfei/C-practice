#include <iostream>
#include <assert.h>
using namespace std;
  void* swap1( char* src)
 {
     assert(src!= nullptr);
     char * start=src, *end=src, *ptr=src;
     while (*ptr++!='\0');
     end=ptr-2;
     while (start<end)
     {
         swap(*start++,*end--);
     }
     cout<<src<<endl;
     start=src;
     end=ptr-2;
     ptr=start;
     while(*ptr++!='\0')
     {
         if(*ptr==' '||*ptr=='\0')
         {
             end=ptr-1;
             while (start<end)
                 swap(*start++,*end--);
             start=ptr+1;
             end=ptr+1;
         }

     }
 }
int main()
{
    char src[]="what is the fuck";
    swap1(src);
    std::cout<<src<<std::endl;
    return 0;
}