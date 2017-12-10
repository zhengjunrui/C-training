#include <stdio.h>
//对于本例，ijk象征abc，穷举法 
main(){
	char i,j,k;
	for(i='x';i<='z';i++){
		for(j='x';j<='z';j++){
			if(i!=j){
				for(k='x';k<='z';k++){
					if(k!=j&&k!=i){
						if(i!='x'&&k!='x'&&k!='z'){
							printf("a配对%c,b配对%c,c配对%c",i,j,k);
						}
					}
				}
			}
		}
	}
}
