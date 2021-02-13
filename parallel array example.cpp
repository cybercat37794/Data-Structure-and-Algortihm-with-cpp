#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int id[SIZE];
    double average[SIZE];
    char grade[SIZE];

    for (int i=0;i<SIZE;i++)
    {
        cout<<"student id: "<<id[i]<<endl;
        cout<<"average: "<<average[i]<<endl;
        cout<<"grade: "<<grade[i]<<endl;

    }
    return 0;
}
