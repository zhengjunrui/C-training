#include <stdio.h>

main(){
	int a,i,b,k,j;
	int c[100];
	for(a=2;a<=1000;a++){
		b = a;
		k = 0;				//写完代码自己确定了要在纸上跑一遍 
		for(i=1;i<a;i++){
			
			if(a%i==0){
				b = b - i;
				k++;
				c[k] = i;
			}
		}
			//continue;
		if(b==0){
			printf("\n%d=%d",a,c[1]);
			for(j=2;j<=k;j++){				//注意变量条件 
				printf("+%d",c[j]);
			}
		}
	
	}
}
