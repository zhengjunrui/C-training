#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int v1=20;
    int *ip=NULL;
    ip = &v1;
    //int v2[10];
    cout<<"the address of v1 is "<<ip<<"\n";
    cout<<"the value of v1 is "<<v1<<"\n";
    cout<<"dig the value from the address of v1 is "<<*ip<<"\n";
    return 0;
}