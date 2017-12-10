//2µÄn´Î·½ 
#include <stdio.h>
#include<math.h> 
#define N 10

int add1(int a){
	a *= 2;
	return a;
}

int addaddadd(int a){
	int i;
	for(i=0;i<N;i++){
		a = add1(a);
	}
	printf("%d",a);
}

main(){
	int a=1;
//	a = add1(a);
	addaddadd(a);
//	printf("%d",a);
}
