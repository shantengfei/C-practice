#include <iostream>
#include <cstring>

using namespace std;
typedef struct node
{
    int data;
    node* next;
}node;
node* create()
{
    int i{},temp{};
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

int length(node* ptr)
{
    if(ptr->next== nullptr)
        return 0;
    int length{};
    node* ptrTemp=ptr->next;
    while(ptrTemp!= nullptr)
    {
        length++;
        ptrTemp=ptrTemp->next;
    }
    return length;
}

void prntfEle(node* ptr)
{
    if(ptr->next== nullptr)
    {
        cout<<"空"<<endl;
    }
    node* ptrtemp=ptr->next;
    while(ptrtemp!=nullptr)
    {
        cout<<ptrtemp->data<<endl;
        ptrtemp=ptrtemp->next;
    }
}

node* search(node* ptr,int pos)
{
    if(pos<0)
    {
        cout<<"不是正确的位置"<<endl;
        return nullptr;
    }
    if(pos==0)
    {
        return ptr;
    }
    node* ptrtemp=ptr->next;
    if(ptrtemp== nullptr)
    {
        cout<<"empty link"<<endl;
        return NULL;
    }
    while (--pos)
    {
        ptrtemp=ptrtemp->next;
        if(ptrtemp== nullptr)
        {

            cout << "incorrect pos" << endl;
            break;
        }
    }
    return ptrtemp;
}

node* insert(node* ptr,int pos,int data)
{
   // int data=data;
    node* ptrTemp= nullptr;
    if(pos<0)
    {
        cout<<"no pos"<<endl;
        return nullptr;
    }
    node* newele=(node*)malloc(sizeof(node));
    if(newele== nullptr)
        return nullptr;
    if(pos==0)
    {
        ptr->next=newele;
        newele->data=data;
        newele->next=ptr->next;
    }
    if(pos>0)
    {
        ptrTemp=search(ptr,pos);
        if(ptrTemp!= nullptr)
        {
            newele->next=ptrTemp->next;
            ptrTemp->next=newele;
            newele->data=data;
        }
    }
    return ptr;
}
node* deleNode(node* ptr,int pos)
{
    node* p=ptr->next;
    node* item= nullptr;
    if(p== nullptr)
    {
        cout<<"empty"<<endl;
        return nullptr;
    }
    p=search(ptr,pos-1);
    if(p!= nullptr&&p->next!= nullptr)
    {
        item=p->next;
        p->next=item->next;
        delete item;
    }
    return ptr;
}

node* inverse(node* ptr)
{
    if(ptr== nullptr)
    {
        cout<<"empty"<<endl;
        return nullptr;
    }
    if(ptr->next== nullptr)
        return ptr;
    node* ptrI=ptr->next;
    node* ptrJ=ptrI->next;
    node* ptrK;
    ptrI->next= nullptr;

    while (ptrJ!= nullptr)
    {
        ptrK=ptrJ->next;
        ptrJ->next=ptrI;
        ptrI=ptrJ;
        ptrJ=ptrK;

    }
    ptr->next=ptrI;
    return ptr;
}

node* searchMid(node* head)
{
    node* ptr=head->next;
    node* mid=ptr;
    int i{},j{};

    if(ptr==nullptr)
    {
        return nullptr;
    }
    while(ptr!= nullptr)
    {
        if(i/2>j)
        {
            j++;
            mid=mid->next;
        }
        i++;
        ptr=ptr->next;
    }
    return mid;
}

node* InsertSort(void)
{
    int data=0;
    node *head= nullptr,*New= nullptr,*Cur= nullptr,*Pre= nullptr;
    while (1)
    {
        cout<<"put in please"<<endl;
        cin>>data;
        if(data==0)
            break;
        New=(node*)malloc(sizeof(node));
        if(New== nullptr)
            return nullptr;
        New->data=data;
        New->next= nullptr;
        if(head== nullptr)          //不清楚为什么头结点会有数据
        {
             head=New;
             continue ;
        }
        if(New->data<=head->data)
        {
            //head前插入节点
            New->next=head;
            head=New;
            continue;
        }
        Cur=head;           //Cur的位置为什么在这里
        while (New->data>Cur->data&&Cur->next!=nullptr)
        {
            Pre=Cur;
            Cur=Cur->next;
        }
        if(New->data<=Cur->data)
        {
            Pre->next=New;
            New->next=Cur;
        } else
            Cur->next=New;
    }
    return head;
}
bool IsLoop(node* head,node* start)
{
    node* p1=head, *p2=head;
    if(head== nullptr||head->next== nullptr)
        return false;
    while(p2!= nullptr&&p2->next!= nullptr&&p1!=p2)
    {
        p1=p1->next;
        p2=p2->next->next;

    }
    if(p1==p2)
    {
         start=p1;
        return true;
    } else
        return false;

}
//有序单链表合并
node* insertNode(node*head, node* item)
{
    node* p=head;
    node*q= nullptr;
    while (item->data>p->data&&p!= nullptr)
    {
        q=p;
        p=p->next;
    }
    if(p==head)
    {
        item->next=head;
        return item;
    }
    q->next=item;
    item->next=p;
    return head;
}
node* merge(node* head1,node* head2)
{
    node* head;
    node*p;
    node* nextP;
    if(head1== nullptr)
        return head2;
    else if(head2== nullptr)
        return head2;
    if(length(head1)>length(head2))
    {
        head=head1;
        p=head2;
    }
    else
    {
        head=head2;
        p=head1;
    }
    while (p!= nullptr)
    {
        nextP=p->next;
        head=insertNode(head,p);
        p=nextP;
    }
    return head;
}
//递归实现
node* MergeRecursive(node* head1, node* head2)
{
    node* head= nullptr;
    if(head1== nullptr)
    {
        return head2;
    }
    if(head2== nullptr)
    {
        return head1;
    }
    if(head1->data<head2->data)
    {
        head=head1;
        head->next=MergeRecursive(head1->next,head2);
    }
    else
    {
        head=head2;
        head->next=MergeRecursive(head1,head2->next);
    }
    return head;
}
//约瑟夫问题8.12
node* nodeCreate(int n)
{
    if(n==0)
    {
        return nullptr;
    }

    int id=1;
    node* ptr= nullptr;
    node* p_node=new node[n];
   if(p_node==nullptr)
       return nullptr;
    else
   {
       memset(p_node,0,n* sizeof(node));
   }
    ptr=p_node;
    while (id<n)
    {
        p_node->data=id;
        p_node->next=p_node+1;
        p_node=p_node->next;
        id++;
    }
    p_node->data=n;
    p_node->next=ptr;           //实现循环链表的建立
    return ptr;
}

int main() {
//    node* ptr= nullptr;
//    ptr=create();
 //   int len=length(ptr);
   // cout<<"长度是"<<len<<endl;
 //   node* ele=search(ptr,3);
 //   cout<<ele->data<<endl;
  //  ptr=insert(ptr,3,100);

  //  ptr=deleNode(ptr,3);
 //   ptr=inverse(ptr);

 //  prntfEle(ptr);
//   ptr=searchMid(ptr);
//    cout<<ptr->data<<endl;

//    std::cout << "Hello, World!" << std::endl;
    node* newLink=InsertSort();
   // prntfEle(newLink);
//    bool Loop=false;
//    node* start=newLink->next->next->next->next;
//    start->next=newLink->next;
//    node* loopStart= nullptr;
//    Loop=IsLoop(newLink,loopStart);
//    cout<<Loop<<endl;
                                                        //约瑟夫问题
    node* List= nullptr;
    int n=20;
    int m=6;
    node* pIter= nullptr;
    List=nodeCreate(n);
    pIter=List;
    m%=n;
    while (pIter!=pIter->next)
    {
        int i=1;
        for(i;i<m-1;i++)                            //这里到m-1前方便进行删除，
        {
            pIter=pIter->next;
        }
        cout<<pIter->next->data<<endl;
        m=pIter->next->data;
        pIter->next=pIter->next->next;
        pIter=pIter->next;                      //将第m个节点跳过去，但是这里还没有删除

    }
    return 0;
}