#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    FILE *fp = NULL;
    char filename[25];
    char ch;
    cout<<"input the file name\n";
    gets(filename);
    if((fp=fopen(filename,"w"))==NULL)    //wҪ��˫���ţ����Ų���ʡ  
    {
        cout<<"can not open the file!"<<endl;
        exit(0);
    }
    cout<<"you can add the data\n";
    getchar();
    while(ch=getchar()!='#')
    {
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}