#include<iostream>
#include<stdlib.h>
using namespace std;

/*typedef struct aaa
{
    int num;
    const char *abc;
}*a;

int main()
{
    a f;
    f = (aaa*)malloc(sizeof(aaa));
    f->num = 3;
    f->abc = "ee";
    cout<<f->num<<" "<<f->abc<<"\n";
    return 0;
}*/

typedef struct aaa
{
    int num;
    char abc;
}a;

aaa e(struct aaa b)
{
    b.num=20;
    b.abc = 'c';
}

int main()
{
    a f;
    //f = (aaa*)malloc(sizeof(aaa));
    f.num = 3;
    f.abc = 'a';
    e(f);
    cout<<f.num<<" "<<f.abc<<"\n";
    return 0;
}

