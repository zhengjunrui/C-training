#include<stdio.h>
#define N 10

main(){
	int a[N+1]={0};
	int i,temp;
	printf("��������:\n");
	for(i=1;i<=N;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=N/2;i++){
		temp = a[N+1-i];
		a[N+1-i] = a[i];
		a[i] = temp;
	}
	printf("��������Ϊ:\n");
	for(i=1;i<=N;i++){
		printf("%d ",a[i]);
	}
//	printf("\n%d",N/2);
}
