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
		if(!board[proto[i]]){			//��������֪ԭ�� 
			proto[j++] = proto[i];
		} 
	}
	proto[j]='\0';
	return proto;
}

main(){
	char a[2] = "c";
	char b[] = "gqwiuccwuic";
	printf("ԭʽ�ǣ�%s\n",b);
	printf("����ˣ�%s",deletechar(b,a));
}
