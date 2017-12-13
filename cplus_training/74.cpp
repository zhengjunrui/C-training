#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct LinkList
{
    int data;
    LinkList *next;
}*L1;

L1 create(L1 p,int N)
{
    L1 q,tail;
    int i;
    p = (LinkList*)malloc(sizeof(L1));
    //p=NULL;    //�ᵼ�¶δ���
    p->next=NULL;
    tail = p;
    q = p;
    for(i=0;i<N;i++)
    {
        q = (LinkList*)malloc(sizeof(LinkList));
        cout<<"input the data in the list\n";
        cin>>q->data;
        tail->next = q;
        tail = q;
        tail->next = NULL;
    }
    return p;
}

void print(L1 p)
{
    L1 q;
    q = p->next;
    while(q!=NULL)
    {
        cout<<q->data<<" ";
        q=q->next;
    }
    cout<<endl;
}

L1 connect(L1 p,L1 q)
{
    L1 b;
    b = p->next;
    while(b->next!=NULL)    //b->next����b�ᷢ���δ���,ԭ������ĵ�������b->next���ᳬ�ڴ棻*nextҲ��LinkList�����ʺ�*b��һ����
    {
        b=b->next;
    }
    b->next = q->next;
    return p;      
}

int main()
{
    L1 k,p,q;
    p = create(p,3);
    q = create(q,4);
    print(p);
    print(q);
    k = connect(p,q);
    print(k);
}   