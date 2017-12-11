#include<iostream>
#include<stdio.h>
using namespace std;

void length(char *c)
{
    char *p=c;
    while(*p!='\0')
    {
        p++;
    }
    cout<<"the length of the string is "<<p-c<<endl;
}

int main()
{
    const int N=50;
    char str[N];
    cout<<"input the string\n";
    cin>>str;
    //char str[]="www.runoob.com";
    length(str);
    return 0;
}