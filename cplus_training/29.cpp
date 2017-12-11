#include<stdio.h>
#define MAX 5

main(){
	int x,i,j,k,a;
	printf("输入五位以内数字\n");
	scanf("%d",&x);
	printf("逆序为:");
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
	printf("\n总共有%d位",a);
}
