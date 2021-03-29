#include <iostream>
using namespace std;
typedef struct node Node;
struct node
{
        int data;
        Node *next;
};

Node *create_node(int item,Node*next)
{
        Node *new_node= new node;
        if(new_node==NULL)
        {
                cout<<"error"<<endl;
                return 0;
        }
        new_node->data=item;
        new_node->next=next;
        return new_node;
}
Node *prepend(Node *head,int item)
{
        Node *new_node= create_node(item,head);
        return new_node;

}
Node *append(Node *head,int item)
{
        Node *new_node=create_node(item,NULL);
        if(head == NULL)
        {
                return new_node;
        }
        Node *current_node=head;
        while(current_node->next!=NULL)
        {
                current_node=current_node->next;

        }
        current_node->next=new_node;
        return head;
}


void search_item(int item,Node*head)
{
        Node *current_node=head;
        while(current_node!=NULL)
        {
                if(current_node->data == item)
                {
                        cout<<"\nFound"<<endl<<endl<<endl;
                        break;
                }
                current_node=current_node->next;

        }

}

void print_linklist(Node*head
                    ){
        Node* current_node=head;
        cout<<"link list:";
        while(current_node!=NULL)
        {
                cout<<current_node->data<<endl;
                current_node=current_node->next;

        }
}

Node *remove_node(Node *head,Node *node)
{
        if(node==head)
        {
                head=node->next;
                delete(node);
                return head;
        }
        Node *current_node=head;
        while(current_node!=NULL)
        {
                if(current_node->next==node)
                {
                        break;
                }

                current_node=current_node->next;

        }
        if(current_node==NULL)
        {
                return head;
        }
        current_node->next=node->next;
        delete(node);
        return head;
}

int main()
{
        Node *n1,*head,*n2;
        n1=create_node(10,NULL);
        head=n1;

        print_linklist(head);
        head=prepend(head,20);
        print_linklist(head);

        head=append(head,30);
        print_linklist(head);
        head=append(head,40);

        print_linklist(head);
        search_item(20,head);
        head=remove_node(head,n1);
        print_linklist(head);

        n2=head;
        head=remove_node(head,n2);
        print_linklist(head);

        n2=head;
        head=remove_node(head,n2);
        print_linklist(head);

        return 0;
}
