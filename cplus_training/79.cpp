#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct LinkList    //²»ÓÃ¼ÓÀ¨ºÅ
{
    int data;
    LinkList *next;
}*L1;

L1 create(L1 p,int n)
{
    L1 q,tail;
    int i;
    p = (LinkList*)malloc(sizeof(LinkList));
    p->next=NULL;
    tail=p;
    for(i=0;i<n;i++)
    {
        q = (LinkList*)malloc(sizeof(LinkList));
        cin>>q->data;
        tail->next = q;
        tail=q;
        tail->next=NULL;
    }
    return p;
}

L1 paixu(L1 p)
{
    L1 a,q,r,s,t;
    a = (LinkList*)malloc(sizeof(LinkList));
    q = p->next;
    a->next = q;
    q = q->next;
    t = a->next;
    //r=a;
    //s=a->next;
    while(q!=NULL)
    {
        r=a;
        s=a->next;
        t=r;
        if(q->data<s->data)
        {
            t=q;
            t->next==NULL;
        }
        //r=s;
        //s=s->next;
        while(s->next!=NULL)
        {
            r=s;
            s=s->next;
            t=r;
            if(q->data<=s->data&&q->data>=r->data)
            {
                t->next=q;
                t->next->next=s;
                break;
            }
        }
        if(s->next==NULL)
        {
            t=s;
            t->next=q;
            t->next->next=NULL;
            //r=s;
            //s=s->next
        }
        q = q->next;
    }
    return t;
}

void print(L1 p,int n)
{
    L1 q;
    int i;
    q = p->next;
    for(i=0;i<n;i++)    
    {
        cout<<q->data<<" ";
        q = q->next;
    }
    cout<<endl;
}

int main()
{
    L1 a=NULL;
    L1 b=NULL;
    a = create(a,5);
    print(a,5);
    b = paixu(a);
    print(b,5);
    return 0;
}