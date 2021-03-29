#include<iostream>
using namespace std;


#define stack_size 10
int top=-1;
char stack[stack_size];

void push(char X)
{

    if (top>stack_size-1)
        cout<<"overflow!\n";
    else
    {
        top++;
        stack[top]=X;


    }

}
char pop()
{
    char X='!';
    if(top<0)
    {
        cout<<"Underflow!\n";
        return X;
    }
    else
    {

        X=stack[top];
        top --;

    }
    return X;


}

int priority (char op)
{

    if (op == '+' || op == '-')
    {
        return 1;
    }
    if (op == '*' || op == '/')
    {
        return 2;
    }
    if (op == '^' )
    {
        return 3;
    }
    return 0;
}

char topElement()
{
    return stack [top];
}

int main()
{
    char infix[30],postfix[30];
    cout<<"enter expression"<<endl;

    int n=13,i;
    for(i=0; i<n; i++)
    {
        cin>>infix[i];
    }
    int k=0;
    for (i=0; i<n; i++)
    {

        char t,s=infix[i];
        if(s=='+' || s=='-'||s=='*'||s=='/')
        {

            while(priority(topElement())>=priority(s))
            {
                t=pop();
                postfix[k++]=t;
            }
            push(s);
        }
        else if (s== '(')
        {
            push('(');
        }
        else if(s==')')
        {
            while(topElement()!='(')
            {
                //cout<<"top="<<topElement()<<endl;
                t=pop();
                //cout<<"t="<<t<<endl;
                postfix[k++]=t;
            }
            pop();
        }
        else
        {
            postfix[k++]=s;
        }
    }
    char t=pop();
    while(t!='!')
    {
        postfix[k++]=t;
        t=pop();
    }

    for(i=0; i<k; i++)
    {
        cout<<postfix[i];
    }

}
