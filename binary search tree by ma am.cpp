#include <iostream>
using namespace std;

typedef struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
}*treeptr;

treeptr root, ptr;

void makeRoot(int itm)
{
    root=new TreeNode;
    root->data=itm;
    root->left=NULL;
    root->right=NULL;
}
void makeNode(int itm)
{
    ptr=root;
    treeptr np= new TreeNode;
    np->data=itm;
    np->left=NULL;
    np->right=NULL;

    while(ptr!=NULL)
    {
        if(ptr->data==itm)
        {
            cout<<"Enter data again or 0 for exit: ";
            cin>>itm;
            if(itm==0)
            {
               break;
            }
            else
            {
                np->data=itm;
                ptr=root;
            }
        }
        else if(itm<ptr->data)
        {
            if(ptr->left==NULL)
            {
                ptr->left=np;
                break;
            }
            else
            {
                ptr=ptr->left;
            }
        }
        else
        {
            if(ptr->right==NULL)
            {
                ptr->right=np;
                break;
            }
            else
            {
                ptr=ptr->right;
            }
        }
    }
}

void inorder(treeptr p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}

void preorder(treeptr p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(treeptr p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" ";
    }
}

int main()
{
    int x;
    root=NULL;
    while(1)
    {
        cout<<"Enter data or 0 for exit: "<<endl;
        cin>>x;
        if(x==0)
            break;
        else
        {
            if(root==NULL)
            {
                makeRoot(x);
            }
            else
            {
                makeNode(x);
            }
        }

    }

    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;
}
