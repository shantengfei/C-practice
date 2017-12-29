#include <iostream>
#include <stdlib.h>
using namespace std;
void intToString(int n,char* str)
{
    char temStr[10]={0};
    int temInt{};
    bool isbig=true;
    int i=0;
    if(n<0)
    {
        temInt=-n;

        isbig=false;
    }
//    if(str==NULL)
//    {
//        cout<<"error"<<endl;
//    }
    while(temInt!=0)
    {
        temStr[i]=temInt%10+'0';
        temInt/=10;
        i++;
    }
    if(!isbig)
    {
        temStr[i]='-';
//        i++;
    }

     int k=0;
    while(i>=0)
    {
        str[k]=temStr[i];
        k++;
        i--;
    }


}
int main() {
   int num=1203;
    char nump[10]={};
    cout<<"please input number"<<endl;
    cin>>num;
    cout<<num<<endl;
    intToString(num,nump);
    cout<<"the string is "<<nump<<endl;

    return 0;
}