#include <stdio.h>
 
main(){
	int i=5;
	void reverse(int n);
	printf("��������ַ�  ��");
	reverse(i);
}

reverse(int n){
	char next;
	if(n<=1){
		next = getchar();
		printf("\n���������ַ��ǣ�");
		putchar(next); 
	}
	else{
		next = getchar();
		n--;
		reverse(n);
		putchar(next);
	}
}
