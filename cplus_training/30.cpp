#include<stdio.h>

main(){
	int a,b,c,d,e,x;
	printf("��������λ���֣�");
	scanf("%ld",&x);
	a = x/10000;
	x = x%10000;
	b = x/1000;
	x = x%1000;
	c = x/100;
	x = x%100;
	d = x/10;
	x = x%10;
	e = x/1;
	printf("a=%ld,b=%ld,c=%ld,d=%ld,e=%ld",a,b,c,d,e);
	if(a==e&&b==d){
		printf("\n���ǻ�����");
	}
	else{
		printf("\n�ⲻ�ǻ�����");
	}
} 



