#include<stdio.h>
#define MAX 5

main(){
	int x,i,j,k,a;
	printf("������λ��������\n");
	scanf("%d",&x);
	printf("����Ϊ:");
	j = x;
	a=0;
	for(i=1;i<=MAX;i++){
		k = j%10;
		printf("%d ",k);
		j = j/10;
		a++;
		if(j==0){
			break;
		}
		
	}
	printf("\n�ܹ���%dλ",a);
}
