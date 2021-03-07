#include<iostream>
using namespace std;

int dequeue()
{
    if(front==-1||front>rear)
        cout<<"queue is empty";
    else
    {
        int x=queue[front];
        front++;
        noElements--;
        return x;
    }
}
