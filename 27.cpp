#include <stdio.h>
 
main(){
	int i=5;
	void reverse(int n);
	printf("输入五个字符  ：");
	reverse(i);
}

reverse(int n){
	char next;
	if(n<=1){
		next = getchar();
		printf("\n倒过来的字符是：");
		putchar(next); 
	}
	else{
		next = getchar();
		n--;
		reverse(n);
		putchar(next);
	}
}
