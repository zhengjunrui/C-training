#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 50
using namespace std;

int main()
{
    char c[N],a;
    int len,i;
    cout<<"input letter\n";
    gets(c);
    len = strlen(c);
    for(i=0;i<len;i++)
    {
        if(c[i]<='z'&&c[i]>='a')
        {
            c[i]-=32;
        }
    }
    cout<<c<<endl;
    return 0;
}