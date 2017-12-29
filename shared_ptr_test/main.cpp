#include <iostream>
#include <memory>
//注意智能指针的几个初始化方式
using namespace std;
int main() {
    shared_ptr<string>spName=make_shared<string>("wang");
    int* p=new int(1);
    shared_ptr<int> spnum(p);
    shared_ptr<int> spI(new int(2));
    std::cout << *spnum<< std::endl;
    cout<<*spName<<endl;
    cout<<*spI<<endl;
    spI.reset(new int(5));
    if(spName!=NULL)
        cout<<"spName is null"<<endl;
     if(spName!=false)
        cout<<"spName is false"<<endl;
    return 0;
}