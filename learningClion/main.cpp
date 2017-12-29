#include <iostream>
//#include "method.h"
#include "cmake-build-debug/method.h"

#include <stdio.h>



int main () {
  int num1=1,num2=2;
    swap<int>(num1,num2);
 printf ("num1:%d,num2:%d\n",num1,num2);

    return 0;
}

#pragma clang diagnostic pop