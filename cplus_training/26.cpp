#include<stdio.h>

main(){
	int i=7;
	int fact(int);
	printf("%d!µÄÖµÎª%d",i,fact(i));
}

int fact(int j){
	int a;
	if(j==0){
		a = 1;
	}
	if(j!=0){
		a = j * fact(j-1);
	}
	return a;
}
