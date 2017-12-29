#include <iostream>
int max(int x,int y)
{ std::cout<<"function called"<<std::endl;
    return 0;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int (*p)(int,int);
    int max(int x,int y);
    p=&max;
    int i=(*p)(1,2);
    return 0;
}