#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;

} node;

void insert(node *s,int data)  //insert function
{
    while(s->next !=NULL)
    {
        s=s->next;

    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;

}

void search(node *s,int data)  //searching function
{
    int count=0;
    while(s->next !=NULL)
    {
        if(s->next->data==data)
        {
            count++;
        }
        s=s->next;
    }
    cout<<"total"<<" "<<count<<" "<<"result found"<<endl;
}

void deleteNode(node *s,int data)  //delete function
{
    while(s->next != NULL)
    {
        if(s->next->data==data)
        {
            s->next=s->next->next;
            return;

        }

        s=s->next;
    }
}

void display(node *s)  //display function
{
    while(s->next != NULL)
    {
        cout<<s->next->data<<endl;
        s = s->next;
    }
}

int main()
{
    node *first = (node*) malloc(sizeof(node));
    first->next=NULL;

    insert(first, 9);//data insertion
    insert(first, 5);//data insertion
    insert(first, 7);//data insertion
    insert(first, 3);//data insertion
    insert(first, 8);//data insertion
    insert(first, 6);//data insertion

    display(first);//display data

    search(first, 7);//search data

    deleteNode(first, 8);//delete data

    display(first);//display data

    return 0;
}
