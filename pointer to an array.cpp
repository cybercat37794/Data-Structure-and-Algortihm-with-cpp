#include<iostream>
using namespace std;
int main()
{
    double balance[5]={100,1000,1200,1500,2000};
    double *p;
    p=balance;

    cout<<"array values using pointer"<<endl;
    int i;
    for(i=0;i<5;i++){
    cout<<*(p+i)<<endl;
    }
    return 0;

}
