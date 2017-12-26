#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

char *concat(char *str1,char *str2)
{
    char *str;
    //*str=NULL;
    
    //str = (char*)malloc(char * (strlen(str1)+strlen(str2)+1)),error
    str = (char*)malloc(strlen(str1)+strlen(str2)+1);
    *str=NULL;
    //str[0]='\0';      //ÏÈmallocÔÙ²Ù×÷
    str = strcat(str,str1);
    str = strcat(str,str2);
    return str;
}

int main()
{
    char a[20],b[20],*c;
    cout<<"input a\n";
    cin>>a;
    //cout<<a<<"\n";
    cout<<"input b\n";
    cin>>b;
   // c = (char*)malloc(strlen(a)+strlen(b)+1);
    //c = ()
    c = concat(a,b);
    cout<<c<<endl;
    return 0;
}