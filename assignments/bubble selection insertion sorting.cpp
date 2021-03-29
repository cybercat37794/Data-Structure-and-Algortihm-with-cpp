#include<iostream>
using namespace std;


//bubble sorting
void bubbleSort(int x,int *a)
{
    int i,j,temp;
    for(i=1; i<x; ++i)
    {
        for(j=0; j<(x-i); ++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}


//selection sorting
int a[30], n;

void selection_sort()
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}


//insertion sort
void InsertionSort(int a[], int n)
{
    int j, p;
    int tmp;
    for(p = 1; p < n; p++)
    {
        tmp = a[p];
        for(j = p; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}


int main()
{

    int options;

    cout<<"choose any option"<<endl<<endl;
    cout<<"press1 for bubble sort"<<endl;
    cout<<"press2 for selection sort"<<endl;
    cout<<"press3 for insertion sort"<<endl;

    cin>>options;

    switch (options)
    {

    case 1:
    {
        //bubble sorting
        cout<<"Bubble Sort: "<<endl;

        int a[100],n,i;
        cout<<"Enter array size: ";
        cin>>n;
        cout<<"Enter array elements: "<<endl;

        for(i=0; i<n; ++i)
        {
            cin>>a[i];
        }
        bubbleSort(n,a);

        cout<<"Bubble sorted: ";
        for(i=0; i<n; ++i)
        {
            cout<<" "<<a[i];
        }


        break;
    }


    case 2:
    {
        //selection sorting
        int i;
        cout<<"Selection Sort:"<<endl;
        cout<<"Enter array size: ";
        cin>>n;
        cout<<"Enter array elements: ";
        for(i=0; i<n; i++)
            cin>>a[i];
        selection_sort();
        cout<<"Selection sorted: ";
        for(i=0; i<n; i++)
            cout<<" "<<a[i];



        break;
    }


    case 3:
    {
        //insertion sorting
        cout<<"Insertion Sort"<<endl;
        int i, n, a[10];
        cout<<"Enter array size: ";
        cin>>n;
        cout<<"Enter the elements: ";
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        InsertionSort(a,n);
        cout<<"Insertion sorted:  ";
        for(i = 0; i < n; i++)
            cout<<" "<<a[i];
        cout<<"\n";

        break;
    }

    default :
    {
        cout<<"Invalid input";
    }

    }
    return 0;
}
