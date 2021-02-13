#include<iostream>
using namespace std;
int main()
{
    float data=56.34;
    float *ptr;
    ptr=&data;


    cout<<data<<"\n"<<*ptr<<"\n"<<ptr;

    return 0;
}
