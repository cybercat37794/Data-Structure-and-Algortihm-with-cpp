#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int value)
{
    int first = 0;
    int last = n - 1;
    int middle;

    while(first<=last)
    {
        middle=(first+last)/2;

        if (arr[middle]==value)
            return middle;

        else if (arr[middle]>value)
            last=middle-1;

        else
            first =middle+1;

    }
    return -1;
}
int main(void)
{
    int arr[] = {2,3,4,10,40,50,55,60};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 50;
    int result = binarySearch(arr,n-1,x);
    if(result == -1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index "<< result<<"\n";

    return 0;

}
