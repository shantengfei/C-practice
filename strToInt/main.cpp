#include <iostream>
#include <math.h>
using namespace std;
double strToInt(const char* str)
{
    int doupoint=1;
    double temp=0;
    int flag=0;
    int douFlag=0;
    double douNum;
//    while(*str!=0)
//    {
//        if ((*str>='0'&&*str<='9'))
//        {
//            str++;
//        }
//        else if(*str=='.')
//        {
//            douFlag=1;
//            str++;
//        }
//    }
    if (*str=='-')
    {
        flag=1;
        str++;
    } else if(*str=='+')
    {
        flag=0;
        str++;
    }
//if( douFlag==0)
//{
//
//}

   while(*str!=0)
    {
        if(*str<'0'||*str>'9')
        {
            cout<<"not a number"<<endl;
            return -1;
        }
        if(!douFlag)
        {
            temp=temp*10+(*str-'0');
        }
     else
        {
            temp+=(*str-'0')*pow(0.1,doupoint);
            doupoint++;
        }
       str++;
        if(*str=='.')
        {
            douFlag=1;
            str++;
        }
    }
    if(flag==1)
    {
        temp=-temp;
    }
    return temp;
}

int main() {
    char num[10];
    double number1;
    cout<<"put a number"<<endl;
    cin.getline(num,20);
    number1=strToInt(num);
    std::cout << "the number is " <<number1<< std::endl;
    return 0;
}