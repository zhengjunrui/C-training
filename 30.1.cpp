#include<stdio.h>

main(){
	long x[1000];
	long a;
	printf("������λ���֣�"); 
	scanf("%ld",&a);
	int i=0;
	while(a!=0){
		x[i]=a%10;
		a = a/10;
		i++;
	}
	int flag=1;
	for(int j=0;j<=i-1;j++){
		printf("%ld ",x[j]);
	}
	for(int j=0;j<=i-1;j++){
		
		if(x[j]!=x[i-1-j]){
			flag=0;
			printf("\n�ⲻ�ǻ�����");
			break;
		}
	}
	if(flag==1){
		printf("\n���ǻ�����");
	}
}
