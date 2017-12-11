#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"input a:\n";
    cin>>a;
    b = a>>4;
    c = ~(~0<<4);
    a = b&c;
    cout<<"the value of a(from 4 to 7) is "<<a<<endl;
    return 0;
}