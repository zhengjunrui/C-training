#include<stdio.h>
#include<iostream>
#define N 2
using namespace std;

typedef struct stu
{
    char name[50];
    int age;
    char sex[5];
}stu;

void input(stu *stu)
{
    int i;
    for(i=0;i<N;i++)
    {
        cout<<"input the student's name\n";
        cin>>stu[i].name;
        cout<<"input the student's age\n";
        cin>>stu[i].age;
        cout<<"input the student's sex\n";
        cin>>stu[i].sex;  
        //cout<<endl;
    }
}

void output(stu *stu)
{
    int i;
    for(i=0;i<N;i++)
    {
        cout<<"the student's name is "<<stu[i].name<<"\n";
        cout<<"the student's age is "<<stu[i].age<<"\n";
        cout<<"the student's sex is "<<stu[i].sex<<"\n";
        cout<<endl;
    }
}

int main()
{
    stu s[N+1];
    input(s);
    output(s);
    return 0;
}