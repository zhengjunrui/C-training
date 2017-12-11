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
    const int m = 4;
    const int n = 9;
    int a[n+1];
    int i,j,k;
    cout<<"input "<<n<<" number in the array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-m-1;i>=0;i--)
    {
        k=i;
        for(j=0;j<m;j++)
        {
            swap(a[k],a[k+1]);
            k++;
        }
    }
    cout<<"now the sequence of the array is\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}