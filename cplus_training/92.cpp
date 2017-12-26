/*#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    time_t start,end;
    int a=0,i=0;
    start = time(NULL);
    for(i=0;i<1000000000;i++)
    {
        a++;
        continue;
    }
    end = time(NULL);
    cout<<"the time is "<<difftime(end,start)<<endl;
    return 0;
}*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,a;
    double start,end,time;
    start = clock();
    for(i=0;i<1000000000;i++)
    {
        a++;
        continue;
    }            
    end = clock();
    time = (end-start)/CLOCKS_PER_SEC;
    cout<<"the time is "<<time<<endl;
    return 0;
}