#include<iostream>
using namespace std;

int rear;
void enqueue(int x)
{
    if(rear==size-1)
        cout<<"queue is full";
    else
    {
        rear++;
        queue[rear]=x;
        if(front==-1)
            front++;
        noElements++;
    }
}

