#include <stdio.h>

main(){
	int i,j;
	printf("不是素数的数字有\n");
	for(i=101;i<=200;i++){
		for(j=2;j<i;j++){
			if(i % j ==0){
				break;  //break用于提前终止循环 
			} 
		}
		if(j>=i){
		printf("%d\n",i);	
		}
		
	}
	
}
