#include <stdio.h>
//���ڱ�����ijk����abc����ٷ� 
main(){
	char i,j,k;
	for(i='x';i<='z';i++){
		for(j='x';j<='z';j++){
			if(i!=j){
				for(k='x';k<='z';k++){
					if(k!=j&&k!=i){
						if(i!='x'&&k!='x'&&k!='z'){
							printf("a���%c,b���%c,c���%c",i,j,k);
						}
					}
				}
			}
		}
	}
}
