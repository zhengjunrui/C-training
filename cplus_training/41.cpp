#include<stdio.h>

main(){
	void fun();
	int i;
	for(i=0;i<3;i++){
		fun();
	}
} 

fun(){
	int i=0;
	static int si=0;
	printf("i=%d\n",i);
	printf("si=%d\n",si);
	i++;
	si++;
}
