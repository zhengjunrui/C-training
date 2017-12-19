#include<iostream>
using namespace std;

int sushu(int n);

int main()
{
    int s=1;
    int i;    
    while(s%2!=0)
    {
        cout<<"input a odd number\n";
        cin>>s;
    }
    for(i=2;i<s;i++)
    {
        if(sushu(i)&&sushu(s-i))
            break;
    }
    if(s-i<=0)
    {
        cout<<"it cannot be added by sushu"<<endl;
        return 0;
    }
    cout<<s<<" = "<<i<<" + "<<s-i<<endl;
    return 0;
}

int sushu(int n)
{
    int i;
    if(n==1)
        return 0;
    if(n!=2)
    {
        if(n%2==0)
            return 0;
    }

    if(n>2)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                return 0;
        }
    }
    return n;
}