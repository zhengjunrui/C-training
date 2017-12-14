#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    const char *s[]={"q","a","b","c","d"};
    const char **q;
    for(int k=0;k<5;k++)
    {
        q = &s[k];
        cout<<*q<<"\n";
    }
    cout<<endl;
    return 0;
}