#include<stdio.h>

void reverse(char* s){
	char *p = s;	//p�ǵ�ַ�������� 
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
	printf("�����ַ�����");
	scanf("%s",&s);
	reverse(s);
	printf("�ߵ������£�%s",s);
	return 0; 
}
