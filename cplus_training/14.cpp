#include<stdio.h>

main(){
	int a,i;
	printf("����һ��������\n");
	scanf("%d",&a);
	printf("\n%d=1",a);
	for(i=2;i<=a;i++) {
		while(a%i==0){
			a = a/i;
			printf("*%d",i);
		}
		if(a==1)
		break;
	}
	
}
