#include<stdio.h>

main(){
	int i=0,a=2;
	for(i=0;i<3;i++){
		printf("a=%d\n",a);
		a++;
		static int a=1;
		printf("a=%d\n",a);
		a++;
	}
}
