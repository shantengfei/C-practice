#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main () {
    string s1="waht";
    string s2(s1);
    string s3=s1;
    string s4("the");
    string s5(5,'f');
    string s6(2,'k');
    vector<int> v1;
   string v2("what the fuck");
    if(v2.begin ()!=v2.end ())
    {
        auto it=v2.begin ();

        *it=toupper (*it);
            std::cout <<*it << std::endl;
    }


    return 0;
}
