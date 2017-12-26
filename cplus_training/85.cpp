#include<iostream>
using namespace std;

int main()
{
    int num,a,i;
    long int b,j;
    cout<<"input a number\n";
    cin>>num;
    a=9;
    b=9;
    i=1;
    j=1;
    while(a%num!=0)
    {
        a+=9;
        i++;
        
    }
    while(b%num!=0)
    {
        j*=10;
        b+=9*j;
        
    }    
    cout<<num<<" = "<<i<<" * 9\n";
    cout<<b<<endl;
    return 0;
}