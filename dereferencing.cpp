#include<iostream>
using namespace std;
int main()
{
    float data;

    float *ptr;

    ptr =&data;

    *ptr =200;

    cout<<*ptr;

    return 0;
}
