#include<stdio.h>
#include<stdlib.h>
#define N 5
struct man{
    char name[20];
    int  age;
}

person[N]={"li",18,"sun",22,"wang",19,"zheng",46,"huang",16};
int main()
{
    struct man *q,*p,*r;
    int i,m=0;
    p=person;
    for(i=0;i<N;i++)
    {
        if(m<p->age)
        {
            m=p->age;
            r = p;
        }
        p++;
    }
    printf("%s %d\n",r->name,r->age);
     return 0;
}