#include<stdio.h>
#define N 10

main(){
	int a[N+1]={0};
	int i,temp;
	printf("输入数组:\n");
	for(i=1;i<=N;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=N/2;i++){
		temp = a[N+1-i];
		a[N+1-i] = a[i];
		a[i] = temp;
	}
	printf("数组逆序为:\n");
	for(i=1;i<=N;i++){
		printf("%d ",a[i]);
	}
//	printf("\n%d",N/2);
}
