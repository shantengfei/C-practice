#include<iostream>
#include <vector>
#include <cstring>
#include <memory>
#include <iomanip>

using namespace std;
using Pword=shared_ptr<string>;
using Pwords=vector<Pword>;

void swap(Pwords& pwords,size_t first,size_t second);
void sort(Pwords& pwords,size_t start,size_t end);
void extract(Pwords& pwords, const string& text, const string& separators);
void show_words(const Pwords& pwords);
size_t max_word_length(const Pwords& pwords);

int main () {
    Pwords pwords;
    string text;
    const string separator{" ,.!?\"\n"};
    cout<<"enter a string terminated by *:"<<endl;
    getline(cin,text,'*');
    extract (pwords,text,separator);
    if(pwords.empty ())
    {
        cout<<"no words in text"<<endl;
        return 0;
    }
    sort(pwords,0,pwords.size()-1);
    show_words (pwords);
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void extract(Pwords& pwords,const string& text,const string& separator)
{
    size_t start{text.find_first_not_of (separator)};
    size_t end{};
    while (start!=string::npos)
    {
        end=text.find_first_of (separator,start+1);
        if(end==string::npos)
            end=text.length ();
        pwords.push_back (make_shared <string>(text.substr (start,end-start)));
        start=text.find_first_not_of (separator,end+1);
    }
}

void swap(Pwords& pwords,size_t first,size_t second)
{
    Pword temp{pwords[first]};
    pwords[first]=pwords[second];
    pwords[second]=temp;
}

void sort(Pwords& pwords,size_t start,size_t end)
{
    if(!(start<end))
        return;
    swap(pwords,start,(start+end)/2);
    size_t current{start};
    for(size_t i{start+1};i<=end;i++)
    {
        if(*pwords[i]<*pwords[start])
            swap (pwords,++current,i);

    }
    swap (pwords,start,current);
    if(current>start)
        sort(pwords,start,current-1);
    if(current+1<end)
        sort(pwords,current+1,end);

}
size_t max_word_length(const Pwords& pwords)
{
    size_t max{};
    for(auto& pword:pwords)
    {
        if(max<pword->length ())
            max=pword->length ();

    }
    return max;
}
