#include<stdio.h> 
#define N 20

main(){
	double a[N+1]={0};
	double b;
	int j;
	a[1] = 1;
	b = a[1];
	for(j=2;j<=N;j++){
			a[j] = j * a[j-1];
			b += a[j];
		}
	printf("ºÍÎª%Lf",b);
} 


