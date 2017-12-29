#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    node* next;
}node;
node* create()
{
    int i,temp;
    node *head= nullptr;
    node* p= nullptr;
    node* q= nullptr;
    head=(node*)malloc(sizeof(node));
    while (1)
    {
        cout<<"put in"<<endl;
        cin>>temp;
        if(temp==0)
            break;
        p=(node*)malloc(sizeof(node));
        if(p== nullptr)
            break;
        p->data=temp;
        if(++i==1)
            head->next=p;
        else
            q->next=p;
        q=p;
    }
    q->next= nullptr;
    return head;

}
int main() {
//    std::cout << "Hello, World!" << std::endl;
    node* ptr= nullptr;
    ptr=create();
    cout<<ptr->next->data<<endl;
    return 0;
}