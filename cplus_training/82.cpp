#include<iostream>
#include<stdlib.h>
using namespace std;

int changing(char *num)
{
    char *a;
    a=num;
    int N=0,test;
    while(*a!='\0')
    {
        test=*a-'0';
        if(test>7||test<0)
        {
            cout<<"error!"<<endl;
            exit(0);
        }
        N = N * 8 + *a - '0';
        //cout<<*a<<endl;
        a++;
    }
    return N;
}

int main()
{
    char *a;
    cout<<"input a octal number"<<endl;
    cin>>a;
    int Num;
    Num=changing(a);
    cout<<Num<<endl;
    return 0;
}