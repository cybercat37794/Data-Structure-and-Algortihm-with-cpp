#include <iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;

    cout<<"enter number of values: "<<endl;
    cin>>size;

    ptr = new int[size]; //dynamic variable decleared here

    cout<<"enter values to store: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>ptr[i];
    }

    cout<<"values in the array "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<ptr[i]<<endl;
    }

    return 0;
}
