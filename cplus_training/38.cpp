#include<stdio.h>
#define N 3

main(){
	int i,j,num;
	int a[N+1][N+1]={0};
	num = 0;
	printf("������������о�����ֵ\n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			printf("�����%d�е�%d�е�ֵ��",i,j);
			scanf("%d",&a[i][j]);
			printf("\n");
		}
	}
	for(i=1;i<=N;i++){
		num += a[i][i];
	}
	printf("�Խ��ߺ�Ϊ%d",num);
}
