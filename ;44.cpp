#include<stdio.h>

int a,b,c;		//�����ⲿ���� 
void add(){
	a=3;
	c = a+b;
}
main(){
	a=b=4;
	add();
	printf("%d",c);
}

