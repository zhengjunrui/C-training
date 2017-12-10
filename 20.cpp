#include <stdio.h>
#include <math.h>
#define N 100

main(){
	int a,i;
	float falling;
	
	printf("第几次下落？\n");
	scanf("%d",&a);
	float b[a+1];
    b[0] = N;
	falling = b[0];
	for(i=2;i<=a;i++){
		b[i-1] = N * pow(0.5,i-2);
		falling += b[i-1];
	}
	printf("下落距离为%f米,反弹高%f米",falling,b[a-1]/4);
	return 0;
}
