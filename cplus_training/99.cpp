#include<iostream>
#include<string.h>
#define N 100
using namespace std;

int main()
{
    char a[N],b[N];
    int i,j,n,temp;
    cout<<"input a\n";
    cin>>a;
    cout<<"input b\n";
    cin>>b;
    strcat(a,b);    //��b�嵽a����
    n = strlen(a);
    cout<<n<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}