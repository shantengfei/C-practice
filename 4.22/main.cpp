#include <iostream>
#include <cstring>

char* bigAddFun(const char* num1, const char* num2)
{
    int c=0;
    int i=strlen(num1)-1;       //指向第一个加数最低位
    int j=strlen(num2)-1;       //只想第二个加数最低位
    int maxlenth=strlen(num1)>strlen(num2)?strlen(num1)+1:strlen(num2)+1;
    char* result=(char*)malloc(maxlenth+1);
    //char* result=new char[maxlenth+1];
    int k;
    if(result== nullptr)
    {
        exit(1);
    }
    result[maxlenth]='\0';
//    k=strlen(result);             //在malloc函数刚刚分配的内存后直接使用strlen是不能获得这个字符串的长度的！
    k=maxlenth-1;
    while ((i>=0)&&(j>=0))
    {
        result[k]=((num1[i]-'0')+(num2[j]-'0')+c)%10+'0';
        c=((num1[i]-'0')+(num2[j]-'0')+c)/10;
        --i;
        --j;
        --k;
    }
    while ((i>=0))
    {
        result[k]=((num1[i]-'0')+c)%10+'0';
        c=((num1[i]-'0')+c)/10;
        --i;
        --k;
    }
    while ((j>=0))
    {
        result[k]=((num2[j]-'0')+c)%10+'0';
        c=((num2[j]-'0')+c)/10;

        --j;
        --k;
    }
    result[0]=c+'0';
    if(result[0]!='0')
        return result;
    else
        return result+1;

}

int main() {
    char * num1="123";
    char* num2="956";
    char* num3=bigAddFun(num1,num2);
    std::cout << num3 << std::endl;
 //   free(num3);
  //  num3= nullptr;
    return 0;
}