#include<stdio.h>
#include<math.h>
#define N 20

main(){
	float a[N]={0};			//作为除数和被除数，定义时要和结果的格式一样 
	float b[N]={0};
	int i,j;
	double x,y;
	y=0;
	a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
	for(i=2;i<=N-1;i++){
		a[i]=a[i-2]+a[i-1];
		b[i]=b[i-2]+b[i-1];
	}
	for(i=1;i<=N;i++){
		y += a[i-1]/b[i-1];
	}
	printf("数列的前20项之和是%lf",y);
}
