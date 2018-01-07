#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define N 50

int main()
{
    char a[N],b[N];
    cout<<"input the data\n";
    //cin>>a[N];
    
    //cin>>b[N];
    int i,j,k,aLen,bLen,count=0;
    k=0;
    gets(a);      //get是输入函数，但是linux不适合，要使用fgets(fgets后strlen得到的字符会加1)
    cout<<"input the word which you want to search\n";
    gets(b);
    aLen = strlen(a);
    bLen = strlen(b);
    //cout<<a[3]<<" "<<b[0];
    for(i=0;i<=aLen-bLen;i++)
    {
        for(j=i,k=0;k<bLen&&a[j]==b[k];j++,k++);
        //{
            
            if(k==bLen)      //若放在循环内，无法跑if
            {
                count++;
            }
        //}
    }
    cout<<"we found "<<count<<" results."<<endl;
    return 0;
}