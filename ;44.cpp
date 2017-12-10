#include<stdio.h>

int a,b,c;		//申明外部变量 
void add(){
	a=3;
	c = a+b;
}
main(){
	a=b=4;
	add();
	printf("%d",c);
}

