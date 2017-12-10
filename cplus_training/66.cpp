#include<stdio.h>
#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b,c;
    cout<<"please input a\n";
    cin>>a;
    cout<<"please input b\n";
    cin>>b;
    cout<<"please input c\n";
    cin>>c;
    if(a>b)
    {
        swap(*(&a),*(&b));
    }
    if(a>c)
    {
        swap(*(&a),*(&c));
    }
    if(b>c)
    {
        swap(*(&c),*(&b));
    }
    cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c<<"\n";
    cout<<a<<"<="<<b<<"<="<<c<<endl;
    return 0;
}