#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node * root = NULL;

//Defining a function to add a node after a previous node
int insertData(int num)
{
    //create node
    node *nn=new node;
    nn->data=num;
    nn->left= NULL;
    nn->right=NULL;

    if(root == NULL)
    {
        root=nn;
    }
    else
    {
        node *child=root,*parent;
        while(child!=NULL)
        {
            parent=child;
            if(child->data < num)child=child->right;
            else if(child->data > num) child=child->left;
            else if(child->data == num)
            {
                cout<<num<< " is a duplicate data!!!\n\n";
                return 0;
            }
        }
        if(parent->data < num)parent->right=nn;
        else parent->left=nn;
    }
    return 1;
}


void visit(node *parent)
{
    if(root == NULL)cout<<"Tree does not exist!\n\n";
    if(parent!=NULL)
    {
        visit(parent->left);
        cout<<parent->data<< " ";
        visit(parent->right);
    }
}

int SearchData(int data)
{


    int depth = 0;
    node *temp = new node;
    temp = root;
    // Run the loop untill temp points to a NULL pointer.
    while(temp != NULL)
    {
        depth++;
        if(temp->data == data)
        {
            cout<<"\nData found at depth: "<<depth<<endl;
            return 0;
        }
        // Shift pointer to left child.
        else if(temp->data > data)
            temp = temp->left;
        // Shift pointer to right child.
        else
            temp = temp->right;
    }

    cout<<"\nData not found"<<endl;
    return 0;

    //implement search function, return 0 if not found or 1 if found
}

int deleteData(int num)
{
    //implement delete function, return 1 if deleted or 0 if not found
}



int main()
{
   // int q;
    //for(q=0; q<100; q++)
   //{

        // Keeping some elements into an array
        int a[7]= {9,11,4,3,7,15,1};
        int data;

        for(int i=0; i<7; i++)insertData(a[i]);
        visit(root);
        cout<<endl;

        cout<<"choose any option: "<<endl;
        cout<<"(1) Search data"<<endl;
        cout<<"(2) Delete data"<<endl;

        int number;
        cin>>number;

        switch (number)
        {
        case 1:
            cout<<"search any data"<<endl;
            cin>>data;
            SearchData(data);

            break;
        case 2:
            cout<<"delete any data";
            cin>>data;

            break;

        default:
            cout<<"invalid input!!"<<endl;
        }
   //}

    return 0;
}
