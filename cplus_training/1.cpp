#include<stdio.h>

main(){
	int a,b,c,i=0;
	printf("���ظ�����λ����\n");
	for(a=1;a<=4;a++){
		for(b=1;b<=4;b++){
			for(c=1;c<=4;c++){
				if(a!=b&&b!=c&&a!=c){
					i++;
					printf("%d%d%d ",a,b,c);
				}
			}
		}
	}
	printf("\n�ܹ���%d�����ظ�����",i); 
}
