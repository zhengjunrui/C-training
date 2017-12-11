#include<stdio.h>
#define N 5

main(){
	int i,j;
	int a[N+1]={0};
	int temp;
	printf("输入N个数字\n");
	for(i=1;i<=N;i++){
		scanf("%d",&a[i]);
	}
	int min = i;
	printf("从小到大排序为\n");
	for(i=1;i<=N;i++){
		for(j=i+1;j<=N;j++){
			if(a[i]>a[j]){
				min = j;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%d ",a[i]);
	}
}
