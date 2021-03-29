#include<iostream>

using namespace std;

void B(int x,int *a){
    int i,j,temp;
        for(i=1;i<x;++i)
    {
        for(j=0;j<(x-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
  }


int main()
{
    int a[50],n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";

    for(i=0;i<n;++i){
        cin>>a[i];
      }
      B(n,a);

        cout<<"Array after bubble sort:";
    for(i=0;i<n;++i){
        cout<<" "<<a[i];
    }



    /*binary search*/
    int value,first,last,middle,search;
    cout<<"\n\nEnter a number to find :";
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(a[middle] < search)
		{
			first = middle + 1;

		}
		else if(a[middle] == search)
		{
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}


    return 0;
}
