#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <forward_list>
#include <list>

using namespace std;

int main () {
    vector<int> v1;
    string s1="hello";
    v1.push_back (1);

    auto it=v1.begin ()+1;
    v1.push_back (2);
    v1.push_back (3);

    v1.insert (it,5,10);
    auto it1=v1.begin ();
    v1.insert (it1,4);                 //这里在insert之后迭代器就不能正常使用了，一定要注意,但是在插入后重新申请一个迭代器的话就可以正常使用了
//    for(const auto iterator:v1)
//        cout<<(iterator)<<endl;
//    std::cout << "Hello, World!" << std::endl;
    list<int> l1;
    l1.push_back (1);
    l1.push_back (2);
    l1.push_back (3);
    l1.push_front (4);
    for(auto it:l1)
        cout<<it<<endl;
    return 0;
}