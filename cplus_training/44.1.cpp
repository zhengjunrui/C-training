#include<stdio.h>

//int a,b,c;		//�����ⲿ���� 
int add(){
	int a=3,b;
	int c;
	c = a+b;
	return c;
}
int main(){
	static int a=4,b=4;
	int c = add();
	printf("%d",c);
	return 0;
}
