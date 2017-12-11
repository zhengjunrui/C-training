#include<stdio.h>
#define N 3

main(){
	int a[100]={0};
	int i,j,min=0,newnum;
	printf("输入N个数字\n");
	for(i=1;i<=N;i++){
		scanf("%d",&a[i]);
	}
	printf("原先数字排序为：\n");
	for(i=1;i<=N;i++){
		min = a[i];
		for(j=i;j<=N;j++){
			if(a[j]<a[i]){
				min = a[j];
				a[j] = a[i];
				a[i] = min;
			}
		}
		printf("%d ",a[i]);
	}
	printf("\n请插入新的数字：\n");
	scanf("%d",&newnum);
	a[N+1] = newnum;
	printf("插入后数字排序为：\n");
	for(i=1;i<=N+1;i++){
		if(a[N+1] < a[i]){
			for(j=N+1;j>i;j--){
				min = a[j];
				a[j] = a[j-1];
				a[j-1] = min;	
			//	break;			
			}
		}
		printf("%d ",a[i]);
	} 
}
