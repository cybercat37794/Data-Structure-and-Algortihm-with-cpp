#include <iostream>
using namespace std;

//Defining the node
struct node {
        int data;
        node * link;
};

node *head=NULL;

//Defining a function to add a node after a previous node
node* addNode(int num, node * prev=NULL){
        // creating the node
        node *newNode = new node;
        newNode->data = num;
        newNode->link = NULL;
        //check if the LL is empty
        if(head == NULL)
                head = newNode;
        // adding node at head
        else if(prev==NULL) {
                newNode->link = head;
                head =newNode;
        }
        //adding node after previous
        else{
                node *temp=prev->link;
                prev->link =newNode;
                newNode->link = temp;
        }
        return newNode;
}

// Now implement a function named deleteNode to delete a node (data)


void show(){
        node * curr = head;
        while(curr != NULL) {
                cout<< curr->data << " ";
                curr = curr->link;
        }
        cout<<"\n\n";
}


int main(){
        // Keeping some elements into an array
        int a[5]={3,2,5,11,4};
        for(int i=0; i<5; i++) {
                //adding the elements at head
                addNode(a[i]);
        }
        show();

        // initializing another Linked List
        head =NULL;
        node * last=NULL;
        for(int i=0; i<5; i++) {
                //adding the elements after last node
                last=addNode(a[i],last);
        }
        show();

        // Call the function deleteNode here and show updated list

        return 0;
}
