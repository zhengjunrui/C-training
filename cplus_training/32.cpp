#include<stdio.h>
#include<string.h>

char * deletechar(char * proto,char * deletewhat){
	char board[256] = {0};
	int i;
	int j=0;
	for(i=0;i<strlen(deletewhat);i++){
		board[deletewhat[i]]=1;
	}
	for(i=0;i<strlen(proto);i++){
		if(!board[proto[i]]){			//画个表即可知原因 
			proto[j++] = proto[i];
		} 
	}
	proto[j]='\0';
	return proto;
}

main(){
	char a[2] = "c";
	char b[] = "gqwiuccwuic";
	printf("原式是：%s\n",b);
	printf("变成了：%s",deletechar(b,a));
}
