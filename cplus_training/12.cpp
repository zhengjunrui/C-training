#include <stdio.h>

main(){
	int i,j;
	printf("����������������\n");
	for(i=101;i<=200;i++){
		for(j=2;j<i;j++){
			if(i % j ==0){
				break;  //break������ǰ��ֹѭ�� 
			} 
		}
		if(j>=i){
		printf("%d\n",i);	
		}
		
	}
	
}
