#include<stdio.h>
//#include "51_52.h"
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"input the number a\n";
    cin>>a;
    cout<<"input the number b\n";
    cin>>b;
    c = a&b;
    cout<< "c = a&b = " << c <<endl;
    d = a|b;
    cout<< "d = a|b = " << d <<endl;
    e = a^b;
    cout<< "e = a^b = " << e <<endl;
    return 0;
}