#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;

typedef struct RLinkList
{
    int data;
    RLinkList *next;
}*R1;

R1 create(R1 p)
{
    R1 head,d;
    int i;
    p = (RLinkList*)malloc(sizeof(RLinkList));
    head = p;
    
    p->next = NULL;
    for(i=0;i<N;i++)
    {
        d = (RLinkList*)malloc(sizeof(RLinkList));
        cout<<"input the data in the linklist\n";
        cin>>d->data;
        d->next = head->next;
        //d->next = NULL;
        head->next = d;        
    }
    return p;
}

void print(R1 p)
{
    R1 d;
    int i;
    d = p->next;
    for(i=0;i<N;i++)
    {
        cout<<d->data<<" ";
        d = d->next;
    }
    cout<<endl;
}

int main()
{
    R1 a;
    //a = (RLinkList*)malloc(sizeof(RLinkList));
    a = create(a);
    print(a);
    return 0;
}