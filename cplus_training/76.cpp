#include<iostream>
#include<stdlib.h>
using namespace std;

double formula(int a)
{
    double sum;
    double i;
    if(a%2==0&&a!=0)
    {
        for(i=2;i<=a;i+=2)
        {
            sum += 1/i;
        }
    }
    if(a==0) 
    {
        cout<<"error!"<<endl;
        exit(0);
    }
    if(a%2==1)
    {
        for(i=1;i<=a;i+=2)
        {
            sum += 1/i;
        }
    }
    return sum;
}

int main()
{
    double (*add)(int);    //记得地址类加括号
    int i;
    double sum;
    cin>>i;
    add = formula;
    sum = (*add)(i);
    cout<<sum<<endl;
    return 0;
}