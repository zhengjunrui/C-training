#include<stdio.h>
#define N 10

main(){
	int i,j,min;
	int a[N+1]={0};
	printf("����N������\n");
	for(i=1;i<=N;i++){
		scanf("%d",&a[i]);
	} 
	printf("��С��������Ϊ:");
	for(i=1;i<=N;i++){
		min = a[i];
		for(j=i+1;j<=N;j++){
			if(a[j]<a[i]){
				min = a[j];
				a[j] = a[i];
				a[i] = min;
			}
		}
		printf("%d ",a[i]);
	}
}
