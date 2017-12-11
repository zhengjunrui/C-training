#include<stdio.h>
#define N 3

main(){
	int i,j,num;
	int a[N+1][N+1]={0};
	num = 0;
	printf("请输入矩阵行列具体数值\n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			printf("输入第%d行第%d列的值：",i,j);
			scanf("%d",&a[i][j]);
			printf("\n");
		}
	}
	for(i=1;i<=N;i++){
		num += a[i][i];
	}
	printf("对角线和为%d",num);
}
