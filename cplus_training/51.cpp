#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"input the number a\n";
    cin>>a;
    cout<<"input the number b\n";
    cin>>b;
    c = a&b;
    cout<< "c = a&b = " << c <<endl;
    return 0;
}