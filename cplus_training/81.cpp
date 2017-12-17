#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct eightyone
{
    int data;
    eightyone *next;
}*a;

int main()
{
    a p,q,r;
    p = (eightyone*)malloc(sizeof(eightyone));
    //q = (eightyone*)malloc(sizeof(eightyone));
    p->next = NULL;
    r = p;    //必须先这么写，才能接过去
    
    int i,a,b,c;
    for(i=10;i<100;i++)
    {
        a = 809*i;
        b = 8*i;
        c = 9*i;
        if(a/1000!=0&&a/10000==0)
        {
            if(b/10!=0&&b/100==0)
            {
                if(c/100!=0&&c/1000==0)
                {
                    //cout<<i<<"\n";
                    
                    q = (eightyone*)malloc(sizeof(eightyone));
                    q->data = i;
                    //cout<<q->data<<"\n";
                    r->next = q;
                    r = r->next;
                    r = NULL;  
                }
            }
        }



    }
    q=p->next;
    while(q!=NULL)
    {
        cout<<q->data<<" "; 
        q = q->next;
    }
    cout<<endl; 
    return 0;
}