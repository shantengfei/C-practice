#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    node* next;
}node;
typedef struct queue
{
    node* front;            //队头
    node* rear;             //队尾
}MyQueue;
MyQueue* createQueue()
{
    MyQueue*q=(MyQueue*)malloc(sizeof(MyQueue));
    if(q== nullptr)
    return nullptr;
    q->front=q->rear= nullptr;
    return q;
}
MyQueue* enqueue(MyQueue* q,int data)
{
    node* newq= nullptr;
    newq=(node*)malloc(sizeof(node));
    if (newq== nullptr)
        return nullptr;
    newq->data=data;
    newq->next= nullptr;
    if(q->rear== nullptr)
        q->front=q->rear=newq;
    else
    {
        q->rear->next=newq;
        q->rear=newq;
        return q;
    }
}
MyQueue* dequeue(MyQueue*q)
{
    node* ptr=q->front;
    if(ptr== nullptr)
        return nullptr;
    else
    {
        q->front=q->front->next;
        if(q->front== nullptr)
        {
            q->rear= nullptr;
        }
        free(ptr);
    }
    return q;
}
int length(MyQueue*q)
{
    if(q->front== nullptr)
        return 0;
    int length{};
    node* ptr=q->front;
    if(ptr!= nullptr)
        length=1;
    while (ptr!= q->rear)
    {
        ptr=ptr->next;
        length++;
    }
    return length;
}
void printQue(MyQueue* q)
{
    node* ptr=q->front;
    if(ptr== nullptr)
        return;
    while (ptr!=q->rear)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;              //判断条件不能打印尾节点，这里打印尾节点
}


int main() {
    int len{};
    MyQueue*q=createQueue();
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    len=length(q);
    cout<<"length is"<<len<<endl;
    printQue(q);
    dequeue(q);

    dequeue(q);
    cout<<length(q)<<endl;
    dequeue(q);
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}