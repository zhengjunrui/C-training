#include<stdio.h>

main(){
	int a,i,j;
	printf("100以内的素数有：\n");
	for(i=1;i<=100;i++){
		for(j=2;j<i;j++){
			a = i%j;
			if(a==0){
		//		printf("%d ",i);
				break;
			}
			if(j==i-1){
				printf("%d ",i);
			}
		}
	}
} 
