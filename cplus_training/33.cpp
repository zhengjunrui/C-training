#include<stdio.h>
#include<math.h>

main(){
	int a,i;
	printf("输入一个数字\n");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			printf("\n该数字不是质数");
			break;
		}
		if(a/i==1){
			printf("\n该数字是质数");
			break;
		}
	}
	
}
