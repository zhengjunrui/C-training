/*#include<stdio.h>
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
    //cout<<"Hello world!"<<endl;
    const int N = 9;
    int a[N+1];
    int i,min,max,s,l;
    cout<<"please input "<<N<<" number\n";
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    
    max = a[0];
    cout<<"original array is \n";
    for(i=0;i<N;i++)
    {
        cout<<a[i]<<" ";

        if(a[i]>max)
        {
            max = a[i];
            l = i;
        }
    }
    cout<<"\n";

    swap(&a[0],&a[l]);
    //cout<<"now the array is \n";
    //for(i=0;i<N;i++)
    //{
    //    cout<<a[i]<<" ";
    //}
    //cout<<"\n";
    min = a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            s = i;
        }        
    }
    //cout<<a[0]<<"\n";
    swap(&a[N-1],&a[s]);
    cout<<"now the array is \n";
    for(i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i,j,t,a[100],n=0;
    char c=0;
    int min,max;
    printf("input data\n");
    while(c!='\n')
    {
        scanf("%d",&a[n++]);
        c=getchar();
    }
    max=0;
    min=n-1;
    for(i=1;i<n;i++)
    {
        if(a[max]<a[i])
        {
            max=i;
        }
    }
    if(max!=0)
    {
        t=a[0];
        a[0]=a[max];
        a[max]=t;
    }
    for(j=n-2;j>=0;j--)
    {
        if(a[min]>a[j])
        {
            min=j;
        }
    }
    if(min!=n-1)
    {
        t=a[n-1];
        a[n-1]=a[min];
        a[min]=t;
    }
    printf("the array after swapping\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

