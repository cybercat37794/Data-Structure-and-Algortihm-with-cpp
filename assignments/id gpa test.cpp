#include <iostream>
#include<iomanip>
using namespace std;

int c;
int lDepth;
int rDepth;

struct node
{
    int data;
    float cgpa;
    node* left;
    node* right;
};

int countID;

int maxDepth(struct node *node)
{

if(node==NULL)
    return 0;
else
{
    int lDepht=maxDepth(node->left);
    int rDepht=maxDepth(node->right);

    if(lDepth>rDepth)
        return(lDepth+1);
    else return(rDepth+1);
}
}

struct node* getNode(int data,float cgpa)
{
    node* newNode=new node();
    newNode->data=data;
    newNode->cgpa=cgpa;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void inorder(struct node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        cout<<root->cgpa<<" "<<setprecision(5)<<endl;
        inorder(root->right);

        countID++;

    }
}

node* findMin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

struct node* Insert(struct node* root, int data,float cgpa)
{
    if (root == NULL)
        return getNode(data,cgpa);

    if (data < root->data)
        root->left  = Insert(root->left, data,cgpa);
    else if (data > root->data)
        root->right = Insert(root->right, data,cgpa);

    return root;
}

bool Search(node*root,int value)
{
    if(root==NULL)
        return false;
    else if(root->data == value)
    {
        return true;
    }
    else if(value < root->data)
        Search(root->left,value);

    else if(value > root->data)
        Search(root->right,value);


    cout<<"searched ID: "<<value<<endl;
}

node* Delete( node* root,int value)
{
    Search(root,value);
    if(root==NULL)
        return root;
    else if(value< root->data)
    {
        root->left= Delete(root->left,value);
    }
    else if(value> root->data)
    {
        root->right= Delete(root->right,value);
    }

    // Node deletion
    else
    {
        //case 1: Leaf Node
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            root=NULL;
            return root;
        }
        //case 2: one child
        else if(root->left==NULL)
        {
            struct node* temp=root;
            root=root->right;
            delete temp;
            return root;
        }
        else if(root->right==NULL)
        {
            struct node* temp=root;
            root=root->left;
            delete temp;
            return root;
        }
        //case 3: 2 child
        else
        {
            struct node*temp=findMin(root->right);
            root->data=temp->data;
            root->cgpa=temp->cgpa;

            root->right=Delete(root->right,temp->data);
            root->right=Delete(root->right,temp->cgpa);
        }
    }
    return root;

}

int main()
{
   // int getHeight;

    node* root=NULL;
    root=Insert(root,20,4.00);//1
    Insert(root,15,3.99);//2
    Insert(root,25,2.99);//3
    Insert(root,18,3.81);//4
    Insert(root,10,3.51);//5
    Insert(root,16,3.41);//6
    Insert(root,19,3.33);//7
    Insert(root,17,3.12);//8
    Insert(root,12,3.19);//9

    //getHeight++;

    cout<<"Before Deletion: "<<endl;
    cout<<"Inorder: "<<endl;

    inorder(root);
    cout<<endl;
    //cout<<"Height: "<<getHeight<<endl<<endl;
    cout<<"height: "<<maxDepth(root)<<endl;
    cout<<"Number of Students: "<<countID<<endl<<endl;
    Delete(root,14);

    if(c=true)
    {
        cout<<"Node Deleted"<<endl;
        cout<<"\nAfter Deletion: "<<endl;
        cout<<"Inorder: "<<endl;
        inorder(root);
        cout<<endl;
    }
    else
        cout<<"Node Not Found"<<endl;

    return 0;

}

