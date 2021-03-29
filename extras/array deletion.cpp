#include<iostream>
using namespace std;

int main()
{
    int i,a[5],no,pos;
    cout<<"Enter Data in Array: ";
    for(i=0; i<5; i++)
    {
        cin>>a[i];
    }
    cout<<"\n\nStored Data in Array:  ";
    for(i=0; i<5; i++)
    {
        cout<<a[i];
    }
    cout<<"\n\nEnter poss. of Element to Delete: ";
    cin>>pos;
    if(pos>5)
    {
        cout<<"\n\nThis value is out of range: ";
    }
    else
    {
        --pos;
        for(i=pos; i<=4; i++)
        {
            a[i]=a[i+1];
        }
        cout<<"\n\nNew Data in Array: ";
        for(i=0; i<4; i++)
        {
            cout<<a[i];
        }
    }
    return 0;
}
