#include<stdio.h>

void reverse(char* s){
	char *p = s;	//p是地址，连续的 
	int len=0;
	while(*p!=0){
		len++;
		p++;
	}
	int i=0;
	char c;
	while(i<=len/2-1){
		c = *(s+i);
		*(s+i) = *(s+len-1-i);
		*(s+len-1-i) = c;
		i++;
	}
}

main(){
	char s[]={0};
	printf("输入字符串：");
	scanf("%s",&s);
	reverse(s);
	printf("颠倒后如下：%s",s);
	return 0; 
}
