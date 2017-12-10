#include <stdio.h>
#include <math.h>
#define N 100

main(){
	int a,i,falling;
	
	printf("第几次下落？");
	scanf("%d",&a);
	int b[a];
	b[0] = N;
	falling = b[0];
	for(i=1;i<=a;i++){
		b[i] = 100 * pow(0.5,i-1);
		falling += b[i];
	}
	printf("下落距离为%d",falling);
	
}
