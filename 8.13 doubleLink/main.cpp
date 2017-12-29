#include <iostream>
using namespace std;
typedef struct DbNode
{
    int data;
    DbNode* left;
    DbNode* right;
}DbNode;
DbNode* createNode(int data)
{
    DbNode *pnode=(DbNode*)malloc (sizeof(DbNode));
    if(pnode== nullptr)
        return nullptr;
    pnode->data=data;
    pnode->left=pnode->right= nullptr;
    return pnode;
}
DbNode *creatList(int head)
{
    DbNode* pnode=(DbNode*)malloc(sizeof(DbNode));
    if(pnode== nullptr)
        return nullptr;
    pnode->data=head;
    pnode->left=pnode->right= nullptr;
    return pnode;
}
DbNode* appendNode(DbNode* head, int data)
{
    DbNode* p=head,*q= nullptr;
    DbNode*pNode= createNode (data);
    if(pNode== nullptr)
        return head;
    while (p!= nullptr)
    {
        q=p;
        p=p->right;
    }
    q->right=pNode;
    pNode->left=q;
    return head;
}
DbNode* douDirAppenNode(DbNode* head,int data)
{
    DbNode* ptr=createNode (data);
    DbNode* p=head, *q= nullptr;
    if(p== nullptr)
        return nullptr;
    q=p=head->right;
    while (p!=head)
    {
        q=p;
        p=p->right;
    }
    q->right=ptr;
    ptr->left=q;
    ptr->right=p;
    p->left=ptr;
    return head;
}

void printfEle(const DbNode* head)
{
    int data{};
    if(head== nullptr)
        return;
    const DbNode* p=head;
    while (p!= nullptr)
    {
        data=p->data;
        cout<<data<<endl;
        p=p->right;
    }
    //return;
}
void DouPrinEle(const DbNode* head)
{
    if(head== nullptr)
        return;
    cout<<head->data<<endl;
    const DbNode* p=head->right;
    while (p!= head)
    {
        cout<<p->data<<endl;
        p=p->right;
    }
}

int length(const DbNode* head)
{
    int count=0;
    if(head== nullptr)
        return count;
    const DbNode* ptr=head;
    while (ptr!= nullptr)
    {
        ptr=ptr->right;
        count++;
    }
    return count;
}
DbNode* search(DbNode* head,int data)
{
    if(head== nullptr)
        return nullptr;
    DbNode* ptr=head;
    while(ptr->right!= nullptr&&ptr->data!=data)
    {
        ptr=ptr->right;
    }
    if(ptr->data==data)
        return ptr;
    else if(ptr->right== nullptr)
        return nullptr;
}
void insert(DbNode* head,int data)
{
    DbNode*ptr=head;
    DbNode* newnode=createNode (data);
    if(ptr == nullptr)
    {
        return ;
    }
   else if(ptr->right== nullptr)
    {
        ptr->right=newnode;
        newnode->left=ptr;
    }
    else
    {
        newnode->right= ptr->right;
        ptr->right->left=newnode;
        ptr->right=newnode;
        newnode->left=ptr;

    }

}
DbNode* deleteNode(DbNode* head,int data)
{
if(head==nullptr)
{
 return nullptr;
}
   DbNode* ptr=search (head,data);
    if(ptr->left== nullptr)
    {
        head=ptr->right;
        if(head!= nullptr)
        head->left= nullptr;
    }
    if(ptr->right== nullptr)
    {
        ptr->left->right= nullptr;
      //  ptr->left= nullptr;
    }
    else
    {
        ptr->left->right=ptr->right;
        ptr->right->left=ptr->left;
    }
    free(ptr);
    return head;
}
DbNode* Insertsquence(DbNode* head,int data)
{
    DbNode* p= nullptr;
    DbNode* q= nullptr;
    DbNode* item=createNode (data);
    if(head== nullptr)
    {
        item->right=item->left=item;
        head=item;
    }
    if(data<head->data)
    {
        head->left->right=item;
        item->left=head->left;
      item->right=head;
        head->left=item;
        return item;
    }
    p=q=head->right;
   while(data>p->data&&p!=head)
   {
       p=p->right;
   }
    q=p->left;

    q->right=item;
    item->left=q;
    item->right=p;
    p->left=item;
    return head;
}
DbNode* GetLink(DbNode* head1,DbNode* head2)
{
    if(head1==nullptr||head2== nullptr)
        return nullptr;
    DbNode* ptr1=head1;
    DbNode* ptr2=head2;
    DbNode* newLink= nullptr;
    DbNode* item= nullptr;
    do
    {
        if((item=search (newLink,ptr1->data))!= nullptr)
        {
            ptr1=ptr1->right;
            continue;
        }
        do
        {
            if(ptr1->data==ptr2->data)
            {
                if(ptr1==head1)
                    newLink=createNode (ptr1->data);
                else
                    douDirAppenNode (newLink,ptr1->data);
                break;
            }
                ptr2=ptr2->right;
        }while (ptr2!=head2);


        ptr1=ptr1->right;
    }while (ptr1!=head1);
    return newLink;
}

DbNode* delDouDirNode(DbNode* head,int data)
{
   DbNode* ptr=head;
    DbNode* phead=head;
    DbNode* pright= nullptr;
   if(head== nullptr)
       return nullptr;
   if(head->data==data)
   {
       ptr=phead->right;
       if(head==head->right)
       {
           free(head);
           return nullptr;
       }
       else
       {
           phead->left->right=phead->right;
           phead->right->left=phead->left;
           free(phead);
           phead=ptr;

       }
   }
    ptr=head->right;
    while (ptr!=head)
    {
        if(ptr->data==data)
        {
            pright=ptr->right;
            ptr->right->left=ptr->left;
            ptr->left->right=ptr->right;
            free(ptr);
          ptr=pright;
        }

    }
    return phead;
}

void DleEuqal(DbNode* )
int main () {
//DbNode* head=creatList (0);
//    for(size_t i{1};i<10;i++)
//    {
//        head=appendNode (head,i);
//    }
////printfEle(head);
//    cout<<length (head)<<endl;
//DbNode* head=createNode (1);
//head->left=head->right=head;
//    douDirAppenNode (head,3);
//    douDirAppenNode (head,6);
//    douDirAppenNode (head,8);
//   DouPrinEle (head);
//    head=Insertsquence (head,0);
//    head=Insertsquence (head,4);
//    head=Insertsquence (head,10);
//    DouPrinEle (head);
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}