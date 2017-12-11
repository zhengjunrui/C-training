#include <stdio.h>
#include<time.h> 
int main()
{
    int start=time(); 
	int i;
    int tmp=0;
    for(i=1;i<=100;i++)
        tmp+=i;
    printf("总和为 %d\n",tmp);
    int end=time();
    printf("时间 %d\n",end-start);
    return 0;
}
