#include <iostream>
using namespace std;

void bubbleSort(int arr[8])
{
        int i,j,temporary;
        for(j=1; j<=8; j++)
        {
                for(i=0; i<=i-j-1; i++)
                {
                        if(arr[i]>arr[i+1])  //this is an assending order code, for desending order '>'will be '<'
                        {
                                temporary=arr[i];
                                arr[i]=arr[i+1];
                                arr[i+1]=temporary;
                        }
                }
        }
}
int main()
{
        int arr[8]={5,6,77,3,4,5,2,4};
        int i;

        for(i=0; i<8; i++)
        {
                cout<<arr[i]<<endl;
        }

        return 0;
}
