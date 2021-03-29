#include <iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *prev, *next;
}*nodeptr;

nodeptr head=NULL, tail=NULL;
nodeptr ptr;

void addData(int item)
{
    nodeptr newNode= new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    newNode->prev=NULL;

    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        ptr=head;
    }
    else
    {
        newNode->prev=tail;
        tail=newNode;
        ptr->next=newNode;
        ptr=newNode;
    }
}

void displayFromFirst(nodeptr p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void displayFromLast(nodeptr p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->prev;
    }
}

void insertMiddle(int node,int item, nodeptr p)
{
    nodeptr curr;
    nodeptr newNode= new ListNode;
    newNode->data=item;
    newNode->prev=NULL;
    newNode->next=NULL;

    while(p->data!=node && p->next!=NULL)
    {
        p=p->next;
        curr=p->next;
    }
    if(p->data==node)
    {
       newNode->prev=p;
       newNode->next=p->next;
       p->next=newNode;
       curr->prev=newNode;
    }
    else
    {
        cout<<"not found"<<endl;
    }
}

int main()
{
    int n, item,i,node;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter Item: ";
        cin>>item;
        addData(item);
    }
    cout<<"Displaying from First "<<endl;
    displayFromFirst(head);
    cout<<endl;
    cout<<"Displaying from Last "<<endl;
    displayFromLast(tail);

    cout<<"After which node you want to insert: ";
    cin>>node;
    cout<<"Enter item: ";
    cin>>item;
    insertMiddle(node,item,head);
    cout<<endl;

    cout<<"Displaying from First "<<endl;
    displayFromFirst(head);
    cout<<endl;
    cout<<"Displaying from Last "<<endl;
    displayFromLast(tail);
}
