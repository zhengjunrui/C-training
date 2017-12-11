#include <stdio.h>
#define N 41

main(){
	int a[N];
	int i;
	a[1]=1;
	a[2]=1;
	for(i=3;i<=N-1;i++){
		a[i] = a[i-1] + a[i-2];
	}
	for(i=1;i<=N-1;i++){
		printf("第%-2d个月的兔子数量为%-9d只\n",i,a[i]);
	}	
}
