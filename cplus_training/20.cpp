#include <stdio.h>
#include <math.h>
#define N 100

main(){
	int a,i;
	float falling;
	
	printf("�ڼ������䣿\n");
	scanf("%d",&a);
	float b[a+1];
    b[0] = N;
	falling = b[0];
	for(i=2;i<=a;i++){
		b[i-1] = N * pow(0.5,i-2);
		falling += b[i-1];
	}
	printf("�������Ϊ%f��,������%f��",falling,b[a-1]/4);
	return 0;
}
