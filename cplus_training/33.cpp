#include<stdio.h>
#include<math.h>

main(){
	int a,i;
	printf("����һ������\n");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			printf("\n�����ֲ�������");
			break;
		}
		if(a/i==1){
			printf("\n������������");
			break;
		}
	}
	
}
