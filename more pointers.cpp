#include<iostream>
using namespace std;
int main()
{
    int first_value=5;
    int second_value=10;

    int *pointer1;
    int *pointer2;

    pointer1=&first_value;
    pointer2=&second_value;

    *pointer1=10;
    *pointer1=*pointer2;

    pointer1=pointer2;
    *pointer1=20;

    cout<<"first value is "<<first_value<<endl;
    cout<<"second value is "<<second_value<<endl;

    return 0;
}
