#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;

typedef struct LinkCode
{
    int data;
    LinkCode *next;
}*L1;

L1 create(L1 s)
{
    L1 t,d;
    int i;
    s = (LinkCode*)malloc(sizeof(LinkCode));
    s->next = NULL;
    //h = s;
    t = s;
    for(i=0;i<N;i++)
    {
        d = (LinkCode*)malloc(sizeof(LinkCode));
        cout<<"input the data of the list\n";
        cin>>d->data;
        //d->next=NULL;
        //t->next=d;
        //t=d;
        d->next=NULL;
        t->next=d;    //d=t->next会core dumped
        t=d;
    }
    return s;
}

void print(L1 h)
{
    L1 j;
    j = h->next;
    while(j!=NULL)
    {
        cout<<j->data<<" ";
        j = j->next;
    }
    cout<<endl;
}

int main()
{
    L1 p=NULL;
    p = create(p);    //直接create(p)会core dumped
    print(p);
    return 0;
}