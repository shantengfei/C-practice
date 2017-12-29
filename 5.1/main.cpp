#include <iostream>
#include <stdio.h>
#define BIT_MASK(pos) (0x01<<pos)
int BIT_reset(unsigned int* val, unsigned char pos)
{
    if(pos>= sizeof(unsigned int)*8)
        return 0;
    *val&= ~(BIT_MASK(pos));
    return 1;
}
int main() {
    unsigned int val=6;
    unsigned char pos=2;
    BIT_reset(&val,pos);
    std::cout<<val<<std::endl;
    int i=5.01;
    float f=5;
//    printf("%f\n",5);
//    printf("%lf\n",5.01);
//    printf("%f\n",f);
//    printf("%d\n",5.01);
//    printf("%d",i);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}