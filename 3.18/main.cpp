#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#define MAXCOUNT 200
using namespace std;
char* transform(char* str)
{
    int len=strlen(str);
    char* buf=new char[len+1];
    char* p=str;
    char*q=p+1;
    int count=1;
    while(*q) {
        if (*p == *q) {
            count++;
            p++;
            q++;
        } else {
            //  itoa(count,buf,10);
            sprintf(buf, "%d", count);
            int nbits = strlen(buf);
            strcat(buf, q);
            *q = '\0';
            strcat(str, buf);
            q += nbits;
            p = q;
            q = p + 1;
            count = 1;
        }
    }
        sprintf(buf,"%d",count);
        strcat(str,buf);
        delete[]buf;
        buf= nullptr;
        return str;


}
int main() {
    char str[MAXCOUNT]="aaabb";
   // cin>>str;
   // str="aabbb";
    cout<<transform(str)<<endl;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}