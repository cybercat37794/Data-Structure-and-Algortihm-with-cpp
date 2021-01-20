#include<iostream>
using namespace std;


//bubble sorting
void bubbleSort(int x,int a[])

{
    int swaps=0;
    int i,j,temp;
    for(i=1; i<x; ++i)
    {
        for(j=0; j<(x-i); j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps++;
            }
    }
    cout<<"swaps: "<<swaps<<endl;
}


int main()
{
    //bubble sorting
    int k;
    int count=0;
    for(k=0; k<1000; k++)
    {


        int a[1000],x,i;
        cout<<"\nEnter the size of the array: ";

        cin>>x;
        cout<<"Enter array elements: "<<endl;

        for(i=0; i<x; ++i)
        {
            cin>>a[i];
            count++;
        }
        bubbleSort(x,a);

        cout<<"Bubble sorted: "<<endl;

        for(i=0; i<x; ++i)
        {
            cout<<" "<<a[i];
        }
        cout<<"\ncomparison: "<<count<<endl;

    }
    return 0;
}
