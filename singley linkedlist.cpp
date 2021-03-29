#include<iostream>
#include<cstdlib>  //header file for malloc;
using namespace std;

typedef struct mylist
{
    int data;
    struct mylist *next;

} node;

int main()
{
    node *first=(node*)malloc(sizeof (node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));
    node *fourth=(node*)malloc(sizeof(node));
    node *fifth=(node*)malloc(sizeof(node));

    first->data=4;
    second->data=2;
    third->data=3;
    fourth->data=8;
    fifth->data=9;

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;

    return 0;
}
