#include <stdio.h>

main(){
	int a[11];
	int i;
	a[9] = 1;
	//a[8] = 2*a[9] + 2;
	i=8;
//	第一种方法（while） 
//	while(i>0){
//		a[i] = 2*a[i+1] + 2;
//		i--;
//	}
	
	for(i=8;i>0;i--){
		a[i] = 2*(a[i+1]+1);
	}

	a[0] = 2*a[1];
	printf("猴子第一天一共摘了%d个桃子",a[0]);
} 
