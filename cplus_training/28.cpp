#include <stdio.h>


//����ĺ���Ҫ��д���� 
age(int n){
	int c;
	if(n == 1){
		c = 10;
		return c;
	}
	else{
		c = age(n-1) + 2;
	}
	
}

main(){
//	int n;
//	void age(n);
	printf("%d",age(5));
}
